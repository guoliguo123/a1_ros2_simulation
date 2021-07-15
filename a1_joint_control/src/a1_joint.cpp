//#include "joint_trajectory_controller/joint_trajectory_controller.hpp"
#include "a1_joint.h"
#include <stddef.h>
#include <chrono>
#include <functional>
#include <memory>
#include <ostream>
#include <ratio>
#include <string>
#include <vector>

#include "angles/angles.h"
#include "builtin_interfaces/msg/duration.hpp"
#include "builtin_interfaces/msg/time.hpp"
#include "hardware_interface/types/hardware_interface_return_values.hpp"
#include "hardware_interface/types/hardware_interface_type_values.hpp"
#include "joint_trajectory_controller/trajectory.hpp"
#include "lifecycle_msgs/msg/state.hpp"
#include "rclcpp/logging.hpp"
#include "rclcpp/parameter.hpp"
#include "rclcpp/qos.hpp"
#include "rclcpp/qos_event.hpp"
#include "rclcpp/time.hpp"
#include "rclcpp_action/create_server.hpp"
#include "rclcpp_action/server_goal_handle.hpp"
#include "rclcpp_lifecycle/lifecycle_node.hpp"
#include "rclcpp_lifecycle/node_interfaces/lifecycle_node_interface.hpp"
#include "rclcpp_lifecycle/state.hpp"
#include "std_msgs/msg/header.hpp"
using std::placeholders::_1;
namespace ph = std::placeholders;
namespace unitree_legged_control
{

    UnitreeJointController::UnitreeJointController()
            : controller_interface::ControllerInterface(),
              joint_names_({})
    {
        memset(&lastCmd, 0, sizeof(a1_msgs::msg::MotorCmd));
        memset(&lastState, 0, sizeof(a1_msgs::msg::MotorState));
        memset(&servoCmd, 0, sizeof(ServoCmd));
        std::cout << " === A1 JOINT INIT === " << std::endl;
    }

    void UnitreeJointController::setTorqueCB(const geometry_msgs::msg::WrenchStamped::UniquePtr msg)
    {
        if(isHip) sensor_torque = msg->wrench.torque.x;
        else sensor_torque = msg->wrench.torque.y;
        // printf("sensor torque%f\n", sensor_torque);
    }

    void UnitreeJointController::setCommandCB(const a1_msgs::msg::MotorCmd::UniquePtr msg)
    {
        lastCmd.mode = msg->mode;
        lastCmd.q = msg->q;
        lastCmd.kp = msg->kp;
        lastCmd.dq = msg->dq;
        lastCmd.kd = msg->kd;
        lastCmd.tau = msg->tau;
        // the writeFromNonRT can be used in RT, if you have the guarantee that
        //  * no non-rt thread is calling the same function (we're not subscribing to ros callbacks)
        //  * there is only one single rt thread
        command.writeFromNonRT(lastCmd);
    }
    void UnitreeJointController::setGains(const double &p, const double &i, const double &d, const double &i_max, const double &i_min, const bool &antiwindup)
    {
        pid_controller_.setGains(p,i,d,i_max,i_min,antiwindup);
    }

    void UnitreeJointController::getGains(double &p, double &i, double &d, double &i_max, double &i_min, bool &antiwindup)
    {
        pid_controller_.getGains(p,i,d,i_max,i_min,antiwindup);
    }

    void UnitreeJointController::getGains(double &p, double &i, double &d, double &i_max, double &i_min)
    {
        bool dummy;
        pid_controller_.getGains(p,i,d,i_max,i_min,dummy);
    }
    controller_interface::return_type
    UnitreeJointController::init(const std::string & controller_name)
    {
        std::cout << " ===  A1 JOINT INIT === " << std::endl;
        // initialize lifecycle node
        const auto ret = ControllerInterface::init(controller_name);
        if (ret != controller_interface::return_type::OK) {
            return ret;
        }

        // with the lifecycle node being initialized, we can declare parameters
        node_->declare_parameter<std::vector<std::string>>("joints", joint_names_);
        node_->declare_parameter<std::vector<std::string>>(
                "command_interfaces", command_interface_types_);
        node_->declare_parameter<std::vector<std::string>>("state_interfaces", state_interface_types_);
        node_->declare_parameter<double>("state_publish_rate", 50.0);
        return controller_interface::return_type::OK;
    }

    controller_interface::InterfaceConfiguration
    UnitreeJointController::command_interface_configuration() const
    {
        controller_interface::InterfaceConfiguration conf;
        conf.type = controller_interface::interface_configuration_type::INDIVIDUAL;
        conf.names.reserve(joint_names_.size() * command_interface_types_.size());
        for (const auto & joint_name  : joint_names_) {
            for (const auto & interface_type : command_interface_types_) {
                conf.names.push_back(joint_name + "/" + interface_type);
            }
        }
        return conf;
    }

    controller_interface::InterfaceConfiguration
    UnitreeJointController::state_interface_configuration() const
    {
        controller_interface::InterfaceConfiguration conf;
        conf.type = controller_interface::interface_configuration_type::INDIVIDUAL;
        conf.names.reserve(joint_names_.size() * state_interface_types_.size());
        for (const auto & joint_name  : joint_names_) {
            for (const auto & interface_type : state_interface_types_) {
                conf.names.push_back(joint_name + "/" + interface_type);
            }
        }
        return conf;
    }

    controller_interface::return_type
    UnitreeJointController::update()
    {
        std::cout << " === A1 UPDATE === " << std::endl;
        if (get_current_state().id() == lifecycle_msgs::msg::State::PRIMARY_STATE_INACTIVE) {
            return controller_interface::return_type::OK;
        }
        double currentPos, currentVel, calcTorque;
        lastCmd = *(command.readFromRT());

        // set command data
        if(lastCmd.mode == PMSM) {
            servoCmd.pos = lastCmd.q;
            positionLimits(servoCmd.pos);
            servoCmd.posStiffness = lastCmd.kp;
            if(fabs(lastCmd.q - PosStopF) < 0.00001){
                servoCmd.posStiffness = 0;
            }
            servoCmd.vel = lastCmd.dq;
            velocityLimits(servoCmd.vel);
            servoCmd.velStiffness = lastCmd.kd;
            if(fabs(lastCmd.dq - VelStopF) < 0.00001){
                servoCmd.velStiffness = 0;
            }
            servoCmd.torque = lastCmd.tau;
            effortLimits(servoCmd.torque);
        }
        if(lastCmd.mode == BRAKE) {
            servoCmd.posStiffness = 0;
            servoCmd.vel = 0;
            servoCmd.velStiffness = 20;
            servoCmd.torque = 0;
            effortLimits(servoCmd.torque);
        }

#ifdef rqtTune
        double i, i_max, i_min;
            getGains(servoCmd.posStiffness,i,servoCmd.velStiffness,i_max,i_min);
#endif
        // }

        //currentPos = joint.getPosition();
        currentVel = computeVel(currentPos, (double)lastState.q, (double)lastState.dq, /*period.toSec()*/0);
        calcTorque = computeTorque(currentPos, currentVel, servoCmd);
        effortLimits(calcTorque);

        //joint.setCommand(calcTorque);

        lastState.q = currentPos;
        lastState.dq = currentVel;
        // lastState.tauEst = calcTorque;
        // lastState.tauEst = sensor_torque;
        //lastState.tau_est = joint.getEffort();

        return controller_interface::return_type::OK;
    }

    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    UnitreeJointController::on_configure(const rclcpp_lifecycle::State &)
    {
        const auto logger = node_->get_logger();
        std::cout << " === A1 CONFIGURE === " << std::endl;
        // update parameters
        joint_names_ = node_->get_parameter("joints").as_string_array();



        if (joint_names_.empty()) {
            RCLCPP_WARN(logger, "'joints' parameter is empty.");
        }

        // Specialized, child controllers set interfaces before calling configure function.
        if (command_interface_types_.empty()) {
            command_interface_types_ = node_->get_parameter("command_interfaces").as_string_array();
        }

        if (command_interface_types_.empty()) {
            RCLCPP_ERROR(logger, "'command_interfaces' parameter is empty.");
            return CallbackReturn::FAILURE;
        }

        // Check if only allowed interface types are used and initialize storage to avoid memory
        // allocation during activation
        joint_command_interface_.resize(allowed_interface_types_.size());
        for (const auto & interface : command_interface_types_) {
            auto it = std::find(
                    allowed_interface_types_.begin(), allowed_interface_types_.end(), interface);
            if (it == allowed_interface_types_.end()) {
                RCLCPP_ERROR(logger, "Command interface type '%s' not allowed!", interface.c_str());
                return CallbackReturn::FAILURE;
            }
        }

        // Check if command interfaces combination is valid. Valid combinations are:
        // 1. effort
        // 2. velocity
        // 2. position [velocity, [acceleration]]


        //auto A1_node = rclcpp::Node::make_shared("joint");
        name_space = get_node()->get_namespace();

        sub_ft = get_node()->create_subscription<geometry_msgs::msg::WrenchStamped>(
                name_space + "/" +"joint_wrench", 1, std::bind(&UnitreeJointController::setTorqueCB,this, ph::_1));
        //sub_cmd = n.subscribe("command", 20, &UnitreeJointController::setCommandCB, this);
        sub_cmd = get_node()->create_subscription<a1_msgs::msg::MotorCmd>(
                "command", 20, std::bind(&UnitreeJointController::setCommandCB,this , ph::_1));
        //controller_state_publisher_.reset(
        //        new realtime_tools::RealtimePublisher<a1_msgs::msg::MotorState>(get_node(), name_space + "/state", 1));
        return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
    }

// Fill ordered_interfaces with references to the matching interfaces
// in the same order as in joint_names
    template<typename T>
    bool get_ordered_interfaces(
            std::vector<T> & unordered_interfaces, const std::vector<std::string> & joint_names,
            const std::string & interface_type, std::vector<std::reference_wrapper<T>> & ordered_interfaces)
    {
        for (const auto & joint_name : joint_names) {
            for (auto & interface : unordered_interfaces) {
                if ((interface.get_name() == joint_name) &&
                    (interface.get_interface_name() == interface_type))
                {
                    ordered_interfaces.emplace_back(std::ref(interface));
                }
            }
        }

        return joint_names.size() == ordered_interfaces.size();
    }

    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    UnitreeJointController::on_activate(const rclcpp_lifecycle::State &)
    {
        // order all joints in the storage
        for (const auto & interface : command_interface_types_) {
            auto it = std::find(
                    allowed_interface_types_.begin(), allowed_interface_types_.end(), interface);
            auto index = std::distance(allowed_interface_types_.begin(), it);
            if (!get_ordered_interfaces(
                    command_interfaces_, joint_names_, interface, joint_command_interface_[index]))
            {
                RCLCPP_ERROR(
                        node_->get_logger(), "Expected %zu '%s' command interfaces, got %zu.",
                        joint_names_.size(), interface.c_str(), joint_command_interface_[index].size());
                return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::ERROR;
            }
        }
        for (const auto & interface : state_interface_types_) {
            auto it = std::find(
                    allowed_interface_types_.begin(), allowed_interface_types_.end(), interface);
            auto index = std::distance(allowed_interface_types_.begin(), it);
            if (!get_ordered_interfaces(
                    state_interfaces_, joint_names_, interface, joint_state_interface_[index]))
            {
                RCLCPP_ERROR(
                        node_->get_logger(), "Expected %zu '%s' state interfaces, got %zu.",
                        joint_names_.size(), interface.c_str(), joint_state_interface_[index].size());
                return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::ERROR;
            }
        }

        //double init_pos = joint.getPosition();
        //lastCmd.q = init_pos;
        //lastState.q = init_pos;
        lastCmd.dq = 0;
        lastState.dq = 0;
        lastCmd.tau = 0;
        lastState.tau_est = 0;
        command.initRT(lastCmd);

        pid_controller_.reset();

        // TODO(karsten1987): activate subscriptions of subscriber
        return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
    }

    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    UnitreeJointController::on_deactivate(const rclcpp_lifecycle::State &)
    {
        // TODO(anyone): How to halt when using effort commands?
        for (auto index = 0ul; index < joint_names_.size(); ++index) {
            joint_command_interface_[0][index].get().set_value(
                    joint_command_interface_[0][index].get().get_value());
        }

        for (auto index = 0ul; index < allowed_interface_types_.size(); ++index) {
            joint_command_interface_[index].clear();
            joint_state_interface_[index].clear();
        }
        release_interfaces();

//        subscriber_is_active_ = false;

        return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
    }

    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    UnitreeJointController::on_cleanup(const rclcpp_lifecycle::State &)
    {
        // go home
        //traj_home_point_ptr_->update(traj_msg_home_ptr_);
        //traj_point_active_ptr_ = &traj_home_point_ptr_;

        return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
    }

    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    UnitreeJointController::on_error(const rclcpp_lifecycle::State &)
    {
        //if (!reset()) {
        //    return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::ERROR;
        //}
        return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
    }



    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    UnitreeJointController::on_shutdown(const rclcpp_lifecycle::State &)
    {
        // TODO(karsten1987): what to do?

        return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
    }


}  // namespace joint_trajectory_controller

#include "pluginlib/class_list_macros.hpp"
#include "class_loader/register_macro.hpp"
//PLUGINLIB_EXPORT_CLASS(
//        unitree_legged_control::UnitreeJointController, controller_interface::ControllerInterface)

CLASS_LOADER_REGISTER_CLASS(
        unitree_legged_control::UnitreeJointController, controller_interface::ControllerInterface)
