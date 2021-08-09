// Copyright 2020 PAL Robotics S.L.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*
 * Author: Bence Magyar, Enrique Fernández, Manuel Meraz
 */

#ifndef DIFF_DRIVE_CONTROLLER__DIFF_DRIVE_CONTROLLER_HPP_
#define DIFF_DRIVE_CONTROLLER__DIFF_DRIVE_CONTROLLER_HPP_

#include <chrono>
#include <cmath>
#include <memory>
#include <queue>
#include <string>
#include <vector>

#include "controller_interface/controller_interface.hpp"
#include "a1_drive_controller/visibility_control.h"
#include "hardware_interface/handle.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "geometry_msgs/msg/twist_stamped.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_lifecycle/state.hpp"
#include "realtime_tools/realtime_box.h"
#include "realtime_tools/realtime_buffer.h"
#include "realtime_tools/realtime_publisher.h"
#include "tf2_msgs/msg/tf_message.hpp"

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
#include "a1_drive_controller/unitree_joint_control_tool.h"
#include <geometry_msgs/msg/wrench_stamped.hpp>
#include "rcppmath/clamp.hpp"
namespace a1_joint_control
{
using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;
#define PMSM      (0x0A)
#define BRAKE     (0x00)
#define PosStopF  (2.146E+9f)
#define VelStopF  (16000.0f)
class UnitreeJointController : public controller_interface::ControllerInterface
{
  using Twist = geometry_msgs::msg::TwistStamped;

public:
  A1_DRIVE_CONTROLLER_PUBLIC
  UnitreeJointController();

  A1_DRIVE_CONTROLLER_PUBLIC
  controller_interface::return_type
  init(const std::string & controller_name) override;

  A1_DRIVE_CONTROLLER_PUBLIC
  controller_interface::InterfaceConfiguration
  command_interface_configuration() const override;

  A1_DRIVE_CONTROLLER_PUBLIC
  controller_interface::InterfaceConfiguration
  state_interface_configuration() const override;

  A1_DRIVE_CONTROLLER_PUBLIC
  controller_interface::return_type update() override;

  A1_DRIVE_CONTROLLER_PUBLIC
  CallbackReturn on_configure(const rclcpp_lifecycle::State & previous_state) override;

  A1_DRIVE_CONTROLLER_PUBLIC
  CallbackReturn on_activate(const rclcpp_lifecycle::State & previous_state) override;

  A1_DRIVE_CONTROLLER_PUBLIC
  CallbackReturn on_deactivate(const rclcpp_lifecycle::State & previous_state) override;

  A1_DRIVE_CONTROLLER_PUBLIC
  CallbackReturn on_cleanup(const rclcpp_lifecycle::State & previous_state) override;

  A1_DRIVE_CONTROLLER_PUBLIC
  CallbackReturn on_error(const rclcpp_lifecycle::State & previous_state) override;

  A1_DRIVE_CONTROLLER_PUBLIC
  CallbackReturn on_shutdown(const rclcpp_lifecycle::State & previous_state) override;
  
  void setTorqueCB(const geometry_msgs::msg::WrenchStamped::UniquePtr msg);
  void setCommandCB(const a1_msgs::msg::MotorCmd::UniquePtr msg);
  void positionLimits(double &position);
  void velocityLimits(double &velocity);
  void effortLimits(double &effort);

  void setGains(const double &p, const double &i, const double &d, const double &i_max, const double &i_min, const bool &antiwindup = false);
  void getGains(double &p, double &i, double &d, double &i_max, double &i_min, bool &antiwindup);
  void getGains(double &p, double &i, double &d, double &i_max, double &i_min);
protected:
  struct LegHandle
  {
    std::reference_wrapper<const hardware_interface::LoanedStateInterface> position;
    std::reference_wrapper<hardware_interface::LoanedCommandInterface> velocity;
      //std::reference_wrapper<hardware_interface::LoanedCommandInterface> effort;
  };
  CallbackReturn configure_side(
    const std::string & side,
    const std::vector<std::string> & leg_names,
    std::vector<LegHandle> & registered_handles);
  std::vector<std::string> joint_names_;
  std::vector<std::string> FL_joint_names_;
  std::vector<std::string> FR_joint_names_;
  std::vector<std::string> RL_joint_names_;
  std::vector<std::string> RR_joint_names_;

  std::vector<LegHandle> registered_left_front_handles_;
  std::vector<LegHandle> registered_right_front_handles_;
  std::vector<LegHandle> registered_left_rear_handles_;
  std::vector<LegHandle> registered_right_rear_handles_;

  std::queue<Twist> previous_commands_;  // last two commands

  std::shared_ptr<rclcpp::Publisher<a1_msgs::msg::MotorState>> limited_velocity_publisher_ =
    nullptr;
  std::shared_ptr<realtime_tools::RealtimePublisher<a1_msgs::msg::MotorState>>
          controller_state_publisher_ = nullptr;

  control_toolbox::Pid pid_controller_;
  rclcpp::Subscription<a1_msgs::msg::MotorCmd>::SharedPtr sub_cmd;
  rclcpp::Subscription<geometry_msgs::msg::WrenchStamped>::SharedPtr sub_ft;

  bool is_halted = false;
  bool use_stamped_vel_ = true;

  bool reset();
  void halt();
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
}  // namespace diff_drive_controller
#endif  // DIFF_DRIVE_CONTROLLER__DIFF_DRIVE_CONTROLLER_HPP_
