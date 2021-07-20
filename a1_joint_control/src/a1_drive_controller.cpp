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

#include <memory>
#include <queue>
#include <string>
#include <utility>
#include <vector>

#include "a1_drive_controller/a1_drive_controller.hpp"
#include "lifecycle_msgs/msg/state.hpp"
#include "tf2/LinearMath/Quaternion.h"
#include "hardware_interface/types/hardware_interface_type_values.hpp"
#include "rclcpp/logging.hpp"
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
namespace
{
constexpr auto DEFAULT_COMMAND_TOPIC = "~/cmd_vel";
constexpr auto DEFAULT_COMMAND_UNSTAMPED_TOPIC = "~/cmd_vel_unstamped";
constexpr auto DEFAULT_COMMAND_OUT_TOPIC = "~/cmd_vel_out";
constexpr auto DEFAULT_ODOMETRY_TOPIC = "/odom";
constexpr auto DEFAULT_TRANSFORM_TOPIC = "/tf";
}  // namespace

namespace a1_joint_control
{
using namespace std::chrono_literals;
using lifecycle_msgs::msg::State;
using controller_interface::InterfaceConfiguration;
using controller_interface::interface_configuration_type;
using hardware_interface::HW_IF_POSITION;
using hardware_interface::HW_IF_VELOCITY;

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

UnitreeJointController::UnitreeJointController()
: controller_interface::ControllerInterface() {
    memset(&lastCmd, 0, sizeof(a1_msgs::msg::MotorCmd));
    memset(&lastState, 0, sizeof(a1_msgs::msg::MotorState));
    memset(&servoCmd, 0, sizeof(ServoCmd));

}

controller_interface::return_type
UnitreeJointController::init(const std::string & controller_name)
{
  // initialize lifecycle node
  auto ret = ControllerInterface::init(controller_name);
  if (ret != controller_interface::return_type::OK) {
    return ret;
  }


  auto node = get_node();
  // with the lifecycle node being initialized, we can declare parameters
  node->declare_parameter < std::vector < std::string >> (
          "FL_joint_names", std::vector<std::string>());
  node->declare_parameter < std::vector < std::string >> (
          "FR_joint_names", std::vector<std::string>());

  node->declare_parameter < std::vector < std::string >> (
          "RL_joint_names", std::vector<std::string>());
  node->declare_parameter < std::vector < std::string >> (
          "RR_joint_names", std::vector<std::string>());

  return controller_interface::return_type::OK;
}

InterfaceConfiguration UnitreeJointController::command_interface_configuration() const
{
  std::vector<std::string> conf_names;
  for (const auto & joint_name : FL_joint_names_) {
    conf_names.push_back(joint_name + "/" + HW_IF_VELOCITY);
  }
  for (const auto & joint_name : FR_joint_names_) {
    conf_names.push_back(joint_name + "/" + HW_IF_VELOCITY);
  }
  for (const auto & joint_name : RL_joint_names_) {
    conf_names.push_back(joint_name + "/" + HW_IF_VELOCITY);
  }
  for (const auto & joint_name : RR_joint_names_) {
    conf_names.push_back(joint_name + "/" + HW_IF_VELOCITY);
  }
  return {interface_configuration_type::INDIVIDUAL, conf_names};
}

InterfaceConfiguration UnitreeJointController::state_interface_configuration() const
{
  std::vector<std::string> conf_names;
  for (const auto & joint_name : FL_joint_names_) {
    conf_names.push_back(joint_name + "/" + HW_IF_POSITION);
  }
  for (const auto & joint_name : FR_joint_names_) {
    conf_names.push_back(joint_name + "/" + HW_IF_POSITION);
  }
  for (const auto & joint_name : RL_joint_names_) {
    conf_names.push_back(joint_name + "/" + HW_IF_POSITION);
  }
  for (const auto & joint_name : RR_joint_names_) {
    conf_names.push_back(joint_name + "/" + HW_IF_POSITION);
  }
  return {interface_configuration_type::INDIVIDUAL, conf_names};
}


controller_interface::return_type UnitreeJointController::update()
{
  auto logger = node_->get_logger();

  if (get_current_state().id() == State::PRIMARY_STATE_INACTIVE) {
    if (!is_halted) {
      halt();
      is_halted = true;
    }
    std::cout << "--- update ------" << std::endl;
    return controller_interface::return_type::OK;
  }
  return controller_interface::return_type::OK;
}

CallbackReturn UnitreeJointController::on_configure(const rclcpp_lifecycle::State &)
{
  auto logger = node_->get_logger();
  std::cout << "-------A1 dog on_configure begin-------" << std::endl;
  // update parameters

  FL_joint_names_ = node_->get_parameter("FL_joint_names").as_string_array();
  FR_joint_names_ = node_->get_parameter("FR_joint_names").as_string_array();
  RL_joint_names_ = node_->get_parameter("RL_joint_names").as_string_array();
  RR_joint_names_ = node_->get_parameter("RR_joint_names").as_string_array();
  if (FL_joint_names_.size() != FR_joint_names_.size()) {
    RCLCPP_ERROR(
      logger,
      "The number of left wheels [%zu] and the number of right wheels [%zu] are different",
      FL_joint_names_.size(),
      FR_joint_names_.size());
    return CallbackReturn::ERROR;
  }

  if (FL_joint_names_.empty()) {
    RCLCPP_ERROR(logger, "Wheel names parameters are empty!");
    return CallbackReturn::ERROR;
  }
  name_space = get_node()->get_namespace();

  sub_ft = get_node()->create_subscription<geometry_msgs::msg::WrenchStamped>(
            name_space +"joint_wrench", 1, std::bind(&UnitreeJointController::setTorqueCB,this, ph::_1));
  //sub_cmd = n.subscribe("command", 20, &UnitreeJointController::setCommandCB, this);
  sub_cmd = get_node()->create_subscription<a1_msgs::msg::MotorCmd>(
            "command", 20, std::bind(&UnitreeJointController::setCommandCB,this , ph::_1));
  limited_velocity_publisher_ =
        node_->create_publisher<a1_msgs::msg::MotorState>(
                name_space + "state",
                rclcpp::SystemDefaultsQoS());
  controller_state_publisher_ =
            std::make_shared<realtime_tools::RealtimePublisher<a1_msgs::msg::MotorState>>(limited_velocity_publisher_);
  std::cout << "-------A1 dog on_configure over-------" << std::endl;
  return CallbackReturn::SUCCESS;
}

CallbackReturn UnitreeJointController::on_activate(const rclcpp_lifecycle::State &)
{
  std::cout << "-------A1 dog activate begin-------" << std::endl;
  const auto fl_result =
    configure_side("FL", FL_joint_names_, registered_left_front_handles_);

  const auto fr_result =
    configure_side("FR", FR_joint_names_, registered_right_front_handles_);
  const auto rl_result =
    configure_side("RL", RL_joint_names_, registered_left_rear_handles_);
  const auto rr_result =
    configure_side("RR", RR_joint_names_, registered_right_rear_handles_);
  std::cout << "-------A1 dog activate rear -------" << std::endl;
  if (fl_result == CallbackReturn::ERROR || fr_result == CallbackReturn::ERROR ||
          rl_result == CallbackReturn::ERROR || rr_result == CallbackReturn::ERROR) {
    return CallbackReturn::ERROR;
  }

  if (registered_left_front_handles_.empty() || registered_right_front_handles_.empty() ||
          registered_left_rear_handles_.empty() || registered_right_rear_handles_.empty()) {
    RCLCPP_ERROR(
      node_->get_logger(),
      "Either left wheel interfaces, right wheel interfaces are non existant");
    return CallbackReturn::ERROR;
  }

  RCLCPP_DEBUG(node_->get_logger(), "Subscriber and publisher are now active.");
  return CallbackReturn::SUCCESS;
}

CallbackReturn UnitreeJointController::on_deactivate(const rclcpp_lifecycle::State &)
{
  return CallbackReturn::SUCCESS;
}

CallbackReturn UnitreeJointController::on_cleanup(const rclcpp_lifecycle::State &)
{
  return CallbackReturn::SUCCESS;
}

CallbackReturn UnitreeJointController::on_error(const rclcpp_lifecycle::State &)
{
  if (!reset()) {
    return CallbackReturn::ERROR;
  }
  return CallbackReturn::SUCCESS;
}

bool UnitreeJointController::reset()
{
#if 0
  odometry_.resetOdometry();

  // release the old queue
  std::queue<Twist> empty;
  std::swap(previous_commands_, empty);

  registered_left_front_handles_.clear();
  registered_right_front_handles_.clear();
  registered_left_rear_handles_.clear();
  registered_left_rear_handles_.clear();
  subscriber_is_active_ = false;
  velocity_command_subscriber_.reset();
  velocity_command_unstamped_subscriber_.reset();

  received_velocity_msg_ptr_.set(nullptr);
  is_halted = false;
#endif
  return true;
}

CallbackReturn UnitreeJointController::on_shutdown(const rclcpp_lifecycle::State &)
{
  return CallbackReturn::SUCCESS;
}

void UnitreeJointController::halt()
{
#if 0
  const auto halt_wheels = [](auto & wheel_handles) {
      for (const auto & wheel_handle : wheel_handles) {
        wheel_handle.velocity.get().set_value(0.0);
      }
    };

  halt_wheels(registered_left_front_handles_);
  halt_wheels(registered_right_front_handles_);
  halt_wheels(registered_right_rear_handles_);
  halt_wheels(registered_right_rear_handles_);
#endif
}

CallbackReturn UnitreeJointController::configure_side(
  const std::string & side,
  const std::vector<std::string> & leg_names,
  std::vector<LegHandle> & registered_handles)
{
  auto logger = node_->get_logger();

  if (leg_names.empty()) {
    RCLCPP_ERROR(logger, "No '%s' wheel names specified", side.c_str());
    return CallbackReturn::ERROR;
  }

  // register handles
  registered_handles.reserve(leg_names.size());
  for (const auto & leg_name : leg_names) {
    const auto state_handle = std::find_if(
      state_interfaces_.cbegin(), state_interfaces_.cend(), [&leg_name](const auto & interface) {
        return interface.get_name() == leg_name &&
        interface.get_interface_name() == HW_IF_POSITION;
      });

    if (state_handle == state_interfaces_.cend()) {
      RCLCPP_ERROR(logger, "Unable to obtain joint state handle for %s", leg_name.c_str());
      return CallbackReturn::ERROR;
    }

    const auto command_handle = std::find_if(
      command_interfaces_.begin(), command_interfaces_.end(), [&leg_name](
        const auto & interface) {
        return interface.get_name() == leg_name &&
        interface.get_interface_name() == HW_IF_VELOCITY;
      });

    if (command_handle == command_interfaces_.end()) {
      RCLCPP_ERROR(logger, "Unable to obtain joint command handle for %s", leg_name.c_str());
      return CallbackReturn::ERROR;
    }

    registered_handles.emplace_back(
      LegHandle{std::ref(*state_handle),
        std::ref(*command_handle)});
  }

  return CallbackReturn::SUCCESS;
}
}  // namespace diff_drive_controller

#include "class_loader/register_macro.hpp"

CLASS_LOADER_REGISTER_CLASS(
  a1_joint_control::UnitreeJointController,
  controller_interface::ControllerInterface)
