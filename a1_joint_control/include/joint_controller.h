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

#define PMSM      (0x0A)
#define BRAKE     (0x00)
#define PosStopF  (2.146E+9f)
#define VelStopF  (16000.0f)

namespace unitree_legged_control
{
class UnitreeJointController: public controller_interface::ControllerInterface
    {
private:
        hardware_interface::CommandInterface a;
        hardware_interface::LoanedCommandInterface joint(a);
        //ros::Subscriber sub_cmd, sub_ft;
        rclcpp::Subscription<geometry_msgs::msg::WrenchStamped>::SharedPtr sub_cmd;
        rclcpp::Subscription<a1_msgs::msg::MotorCmd>::SharedPtr sub_ft;
        // ros::Publisher pub_state;
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
