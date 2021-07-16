//
// Created by lance on 7/8/21.
//

#ifndef SIMULATION_A1_JOINT_H
#define SIMULATION_A1_JOINT_H
#include "a1_msgs/msg/motor_cmd.hpp"
#include "a1_msgs/msg/motor_state.hpp"
#include <urdf/model.h>
#include <control_toolbox/pid.hpp>
#include <boost/scoped_ptr.hpp>
#include <boost/thread/condition.hpp>
#include <realtime_tools/realtime_publisher.h>
//#include <hardware_interface/joint_command_interface.hpp>
#include <hardware_interface/loaned_command_interface.hpp>
#include <controller_interface/controller_interface.hpp>
#include <std_msgs/msg/float64.hpp>
#include <realtime_tools/realtime_buffer.h>
#include <geometry_msgs/msg/wrench_stamped.h>
#include "unitree_joint_control_tool.h"
#include <geometry_msgs/msg/wrench_stamped.hpp>

#include <memory>
#include <string>
#include <vector>
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
#include "controller_interface/controller_interface.hpp"
#include "forward_command_controller/visibility_control.h"
#include "rclcpp_lifecycle/node_interfaces/lifecycle_node_interface.hpp"
#include "rclcpp_lifecycle/state.hpp"
#include "rclcpp/subscription.hpp"
#include "realtime_tools/realtime_buffer.h"
#include "std_msgs/msg/float64_multi_array.hpp"

#define PMSM      (0x0A)
#define BRAKE     (0x00)
#define PosStopF  (2.146E+9f)
#define VelStopF  (16000.0f)

namespace a1_joint_control
{
    class UnitreeJointController: public controller_interface::ControllerInterface
    {
    public:
        UnitreeJointController();
        ~UnitreeJointController();
        virtual void starting(const rclcpp::Time& time);
        virtual void update(const rclcpp::Time& time, const rclcpp::Duration& period);
        virtual void stopping();
        void setTorqueCB(const geometry_msgs::msg::WrenchStamped::UniquePtr msg);
        void setCommandCB(const a1_msgs::msg::MotorCmd::UniquePtr msg);
        void positionLimits(double &position);
        void velocityLimits(double &velocity);
        void effortLimits(double &effort);

        void setGains(const double &p, const double &i, const double &d, const double &i_max, const double &i_min, const bool &antiwindup = false);
        void getGains(double &p, double &i, double &d, double &i_max, double &i_min, bool &antiwindup);
        void getGains(double &p, double &i, double &d, double &i_max, double &i_min);

        // JOINT_TRAJECTORY_CONTROLLER_PUBLIC
        // JointTrajectoryController();

        JOINT_TRAJECTORY_CONTROLLER_PUBLIC
        controller_interface::return_type
        init(const std::string & controller_name) override;
        /**
         * @brief command_interface_configuration This controller requires the position command
         * interfaces for the controlled joints
         */
        JOINT_TRAJECTORY_CONTROLLER_PUBLIC
        controller_interface::InterfaceConfiguration
        command_interface_configuration() const override;

        /**
         * @brief command_interface_configuration This controller requires the position and velocity
         * state interfaces for the controlled joints
         */
        JOINT_TRAJECTORY_CONTROLLER_PUBLIC
        controller_interface::InterfaceConfiguration
        state_interface_configuration() const override;

        JOINT_TRAJECTORY_CONTROLLER_PUBLIC
        controller_interface::return_type
        update() override;

        JOINT_TRAJECTORY_CONTROLLER_PUBLIC
        rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
        on_configure(const rclcpp_lifecycle::State & previous_state) override;

        JOINT_TRAJECTORY_CONTROLLER_PUBLIC
        rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
        on_activate(const rclcpp_lifecycle::State & previous_state) override;

        JOINT_TRAJECTORY_CONTROLLER_PUBLIC
        rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
        on_deactivate(const rclcpp_lifecycle::State & previous_state) override;

        JOINT_TRAJECTORY_CONTROLLER_PUBLIC
        rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
        on_cleanup(const rclcpp_lifecycle::State & previous_state) override;

        JOINT_TRAJECTORY_CONTROLLER_PUBLIC
        rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
        on_error(const rclcpp_lifecycle::State & previous_state) override;

        JOINT_TRAJECTORY_CONTROLLER_PUBLIC
        rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
        on_shutdown(const rclcpp_lifecycle::State & previous_state) override;
        std::vector<std::string> joint_names_;
        std::vector<std::string> command_interface_types_;
        std::vector<std::string> state_interface_types_;

        // To reduce number of variables and to make the code shorter the interfaces are ordered in types
        // as the following constants
        const std::vector<std::string> allowed_interface_types_ = {
                hardware_interface::HW_IF_POSITION,
                hardware_interface::HW_IF_VELOCITY,
                hardware_interface::HW_IF_ACCELERATION,
                hardware_interface::HW_IF_EFFORT,
        };

        // The interfaces are defined as the types in 'allowed_interface_types_' member.
        // For convenience, for each type the interfaces are ordered so that i-th position
        // matches i-th index in joint_names_
        template<typename T>
        using InterfaceReferences = std::vector<std::vector<std::reference_wrapper<T>>>;

        InterfaceReferences<hardware_interface::LoanedCommandInterface> joint_command_interface_;
        InterfaceReferences<hardware_interface::LoanedStateInterface> joint_state_interface_;

        bool has_velocity_state_interface_ = false;
        bool has_acceleration_state_interface_ = false;
        bool has_position_command_interface_ = false;
        bool has_velocity_command_interface_ = false;
        bool has_acceleration_command_interface_ = false;

        /// If true, a velocity feedforward term plus corrective PID term is used
        bool use_closed_loop_pid_adapter = false;

    private:
        control_toolbox::Pid pid_controller_;
        boost::scoped_ptr<realtime_tools::RealtimePublisher<a1_msgs::msg::MotorState> > controller_state_publisher_ ;
        rclcpp::Subscription<a1_msgs::msg::MotorCmd>::SharedPtr sub_cmd;
        rclcpp::Subscription<geometry_msgs::msg::WrenchStamped>::SharedPtr sub_ft;

    public:
        // bool start_up;
        std::string name_space;
        std::string joint_name;
        float sensor_torque;
        bool isHip, isThigh, isCalf, rqtTune;
        urdf::JointConstSharedPtr joint_urdf;
        realtime_tools::RealtimeBuffer<a1_msgs::msg::MotorCmd> command;
        a1_msgs::msg::MotorCmd lastCmd;
        a1_msgs::msg::MotorState lastState;
        ServoCmd servoCmd;



    };
}

#endif //SIMULATION_A1_JOINT_H
