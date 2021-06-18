/************************************************************************
Copyright (c) 2018-2019, Unitree Robotics.Co.Ltd. All rights reserved.
Use of this source code is governed by the MPL-2.0 license, see LICENSE.
************************************************************************/

#ifndef __BODY_H__
#define __BODY_H__
#include <memory>
#include <string>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "rclcpp/rclcpp.hpp"
#include "a1_msgs/msg/low_cmd.hpp"
#include "a1_msgs/msg/low_state.hpp"
#include "a1_msgs/msg/high_state.hpp"
#include "a1_msgs/msg/motor_state.hpp"
#define PosStopF (2.146E+9f)
#define VelStopF (16000.f)
namespace unitree_model {
extern rclcpp::Publisher<a1_msgs::msg::MotorCmd>::SharedPtr servo_pub[12];
extern rclcpp::Publisher<a1_msgs::msg::HighState>::SharedPtr highState_pub;
extern a1_msgs::msg::LowCmd lowCmd;
extern a1_msgs::msg::LowState lowState;

void stand();
void motion_init();
void sendServoCmd();
void moveAllPosition(double* jointPositions, double duration);
}
#endif
