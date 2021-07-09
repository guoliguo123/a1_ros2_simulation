/************************************************************************
Copyright (c) 2018-2019, Unitree Robotics.Co.Ltd. All rights reserved.
Use of this source code is governed by the MPL-2.0 license, see LICENSE.
************************************************************************/

#ifndef _UNITREE_ROS_JOINT_CONTROLLER_H_
#define _UNITREE_ROS_JOINT_CONTROLLER_H_

//#include <ros/node_handle.h>
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

namespace unitree_legged_control
{
using CmdType = std_msgs::msg::Float64MultiArray;
using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;
class UnitreeJointController: public controller_interface::ControllerInterface
    {
public:
    FORWARD_COMMAND_CONTROLLER_PUBLIC
    ForwardCommandController();

    FORWARD_COMMAND_CONTROLLER_PUBLIC
    controller_interface::return_type init(const std::string & controller_name) override;

    FORWARD_COMMAND_CONTROLLER_PUBLIC
    controller_interface::InterfaceConfiguration command_interface_configuration() const override;

    FORWARD_COMMAND_CONTROLLER_PUBLIC
    controller_interface::InterfaceConfiguration state_interface_configuration() const override;

    FORWARD_COMMAND_CONTROLLER_PUBLIC
    CallbackReturn on_configure(const rclcpp_lifecycle::State & previous_state) override;

    FORWARD_COMMAND_CONTROLLER_PUBLIC
    CallbackReturn on_activate(const rclcpp_lifecycle::State & previous_state) override;

    FORWARD_COMMAND_CONTROLLER_PUBLIC
    CallbackReturn on_deactivate(const rclcpp_lifecycle::State & previous_state) override;

    FORWARD_COMMAND_CONTROLLER_PUBLIC
    controller_interface::return_type update() override;

protected:
    std::vector<std::string> joint_names_;
    std::string interface_name_;

    realtime_tools::RealtimeBuffer<std::shared_ptr<CmdType>> rt_command_ptr_;
    rclcpp::Subscription<CmdType>::SharedPtr joints_command_subscriber_;

    std::string logger_name_;
private:
    rclcpp::Subscription<geometry_msgs::msg::WrenchStamped>::SharedPtr sub_cmd;
    rclcpp::Subscription<a1_msgs::msg::MotorCmd>::SharedPtr sub_ft;
    control_toolbox::Pid pid_controller_;
    boost::scoped_ptr<realtime_tools::RealtimePublisher<a1_msgs::msg::MotorState> > controller_state_publisher_ ;

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

    UnitreeJointController();
    ~UnitreeJointController();
    virtual controller_interface::return_type init(const std::string & controller_name);
    virtual void starting(const rclcpp::Time& time);
    virtual void update(const rclcpp::Time& time, const rclcpp::Duration& period);
    virtual void stopping();
    void setTorqueCB(const geometry_msgs::msg::WrenchStamped::UniquePtr& msg);
    void setCommandCB(const a1_msgs::msg::MotorCmd::UniquePtr& msg);
    void positionLimits(double &position);
    void velocityLimits(double &velocity);
    void effortLimits(double &effort);

    void setGains(const double &p, const double &i, const double &d, const double &i_max, const double &i_min, const bool &antiwindup = false);
    void getGains(double &p, double &i, double &d, double &i_max, double &i_min, bool &antiwindup);
    void getGains(double &p, double &i, double &d, double &i_max, double &i_min);

    };
}

#endif

#ifndef FORWARD_COMMAND_CONTROLLER__FORWARD_COMMAND_CONTROLLER_HPP_
#define FORWARD_COMMAND_CONTROLLER__FORWARD_COMMAND_CONTROLLER_HPP_

#include <memory>
#include <string>
#include <vector>

#include "controller_interface/controller_interface.hpp"
#include "forward_command_controller/visibility_control.h"
#include "rclcpp_lifecycle/node_interfaces/lifecycle_node_interface.hpp"
#include "rclcpp_lifecycle/state.hpp"
#include "rclcpp/subscription.hpp"
#include "realtime_tools/realtime_buffer.h"
#include "std_msgs/msg/float64_multi_array.hpp"

namespace forward_command_controller
{
    using CmdType = std_msgs::msg::Float64MultiArray;
    using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

/**
 * \brief Forward command controller for a set of joints.
 *
 * This class forwards the command signal down to a set of joints
 * on the specified interface.
 *
 * \param joints Names of the joints to control.
 * \param interface_name Name of the interface to command.
 *
 * Subscribes to:
 * - \b commands (std_msgs::msg::Float64MultiArray) : The commands to apply.
 */
    class ForwardCommandController : public controller_interface::ControllerInterface
    {
    public:
        FORWARD_COMMAND_CONTROLLER_PUBLIC
        ForwardCommandController();

        FORWARD_COMMAND_CONTROLLER_PUBLIC
                controller_interface::return_type init(const std::string & controller_name) override;

        FORWARD_COMMAND_CONTROLLER_PUBLIC
                controller_interface::InterfaceConfiguration command_interface_configuration() const override;

        FORWARD_COMMAND_CONTROLLER_PUBLIC
                controller_interface::InterfaceConfiguration state_interface_configuration() const override;

        FORWARD_COMMAND_CONTROLLER_PUBLIC
                CallbackReturn on_configure(const rclcpp_lifecycle::State & previous_state) override;

        FORWARD_COMMAND_CONTROLLER_PUBLIC
                CallbackReturn on_activate(const rclcpp_lifecycle::State & previous_state) override;

        FORWARD_COMMAND_CONTROLLER_PUBLIC
                CallbackReturn on_deactivate(const rclcpp_lifecycle::State & previous_state) override;

        FORWARD_COMMAND_CONTROLLER_PUBLIC
                controller_interface::return_type update() override;

    protected:
        std::vector<std::string> joint_names_;
        std::string interface_name_;

        realtime_tools::RealtimeBuffer<std::shared_ptr<CmdType>> rt_command_ptr_;
        rclcpp::Subscription<CmdType>::SharedPtr joints_command_subscriber_;

        std::string logger_name_;
    };

}  // namespace forward_command_controller

#endif  // FORWARD_COMMAND_CONTROLLER__FORWARD_COMMAND_CONTROLLER_HPP_
