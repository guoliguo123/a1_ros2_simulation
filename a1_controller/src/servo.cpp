/************************************************************************
Copyright (c) 2018-2019, Unitree Robotics.Co.Ltd. All rights reserved.
Use of this source code is governed by the MPL-2.0 license, see LICENSE.
************************************************************************/

#include "rclcpp/rclcpp.hpp"
#include <stdio.h>
#include <stdlib.h>
#include "a1_msgs/msg/low_cmd.hpp"
#include "a1_msgs/msg/low_state.hpp"
#include "a1_msgs/msg/motor_cmd.hpp"
#include "a1_msgs/msg/motor_state.hpp"
#include <geometry_msgs/msg/wrench_stamped.hpp>
#include <sensor_msgs/msg/imu.hpp>
#include <std_msgs/msg/bool.h>
#include <vector>
#include <string>
#include <math.h>
#include <nav_msgs/msg/odometry.h>
#include "body.h"
#include <chrono>
using std::placeholders::_1;
using namespace std;
using namespace unitree_model;

bool start_up = true;

class multiThread
{
public:
    multiThread(string rname){
        robot_name = rname;
        auto A1_node = rclcpp::Node::make_shared(robot_name);
        imu_sub = A1_node->create_subscription<sensor_msgs::msg::Imu>(
                "/trunk_imu", 10, std::bind(&multiThread::imuCallback, this, _1));

        footForce_sub[0] = A1_node->create_subscription<geometry_msgs::msg::WrenchStamped>(
                "/visual/FR_foot_contact/the_force", 1, std::bind(&multiThread::FRfootCallback, this, _1));
        footForce_sub[1] = A1_node->create_subscription<geometry_msgs::msg::WrenchStamped>(
                "/visual/FL_foot_contact/the_force", 1, std::bind(&multiThread::FLfootCallback, this, _1));
        footForce_sub[2] = A1_node->create_subscription<geometry_msgs::msg::WrenchStamped>(
                "/visual/RR_foot_contact/the_force", 1, std::bind(&multiThread::RRfootCallback, this, _1));
        footForce_sub[3] = A1_node->create_subscription<geometry_msgs::msg::WrenchStamped>(
                "/visual/RL_foot_contact/the_force", 1, std::bind(&multiThread::RLfootCallback, this, _1));
        servo_sub[0] = A1_node->create_subscription<a1_msgs::msg::MotorState>(
                "/" + robot_name + "_gazebo/FR_hip_controller/state", 1, std::bind(&multiThread::FRhipCallback, this, _1));
        servo_sub[1] = A1_node->create_subscription<a1_msgs::msg::MotorState>(
                "/" + robot_name + "_gazebo/FR_thigh_controller/state", 1, std::bind(&multiThread::FRthighCallback, this, _1));
        servo_sub[2] = A1_node->create_subscription<a1_msgs::msg::MotorState>(
                "/" + robot_name + "_gazebo/FR_calf_controller/state", 1, std::bind(&multiThread::FRcalfCallback, this, _1));
        servo_sub[3] = A1_node->create_subscription<a1_msgs::msg::MotorState>(
                "/" + robot_name + "_gazebo/FL_hip_controller/state", 1, std::bind(&multiThread::FLhipCallback, this, _1));
        servo_sub[4] = A1_node->create_subscription<a1_msgs::msg::MotorState>(
                "/" + robot_name + "_gazebo/FL_thigh_controller/state", 1, std::bind(&multiThread::FLthighCallback, this, _1));
        servo_sub[5] = A1_node->create_subscription<a1_msgs::msg::MotorState>(
                "/" + robot_name + "_gazebo/FL_calf_controller/state", 1, std::bind(&multiThread::FLcalfCallback, this, _1));
        servo_sub[6] = A1_node->create_subscription<a1_msgs::msg::MotorState>(
                "/" + robot_name + "_gazebo/RR_hip_controller/state", 1, std::bind(&multiThread::RRhipCallback, this, _1));
        servo_sub[7] = A1_node->create_subscription<a1_msgs::msg::MotorState>(
                "/" + robot_name + "_gazebo/RR_thigh_controller/state", 1, std::bind(&multiThread::RRthighCallback, this, _1));
        servo_sub[8] = A1_node->create_subscription<a1_msgs::msg::MotorState>(
                "/" + robot_name + "_gazebo/RR_calf_controller/state", 1, std::bind(&multiThread::RRcalfCallback, this, _1));
        servo_sub[9] = A1_node->create_subscription<a1_msgs::msg::MotorState>(
                "/" + robot_name + "_gazebo/RL_hip_controller/state", 1, std::bind(&multiThread::RLhipCallback, this, _1));
        servo_sub[10] = A1_node->create_subscription<a1_msgs::msg::MotorState>(
                "/" + robot_name + "_gazebo/RL_thigh_controller/state", 1, std::bind(&multiThread::RLthighCallback, this, _1));
        servo_sub[11] = A1_node->create_subscription<a1_msgs::msg::MotorState>(
                "/" + robot_name + "_gazebo/RL_calf_controller/state", 1, std::bind(&multiThread::RLcalfCallback, this, _1));
        rclcpp::spin(A1_node);
    }   
    
    void imuCallback(const sensor_msgs::msg::Imu::UniquePtr msg)
    { 
        lowState.imu.quaternion[0] = msg->orientation.w;
        lowState.imu.quaternion[1] = msg->orientation.x;
        lowState.imu.quaternion[2] = msg->orientation.y;
        lowState.imu.quaternion[3] = msg->orientation.z;

        lowState.imu.gyroscope[0] = msg->angular_velocity.x;
        lowState.imu.gyroscope[1] = msg->angular_velocity.y;
        lowState.imu.gyroscope[2] = msg->angular_velocity.z;
        
        lowState.imu.accelerometer[0] = msg->linear_acceleration.x;
        lowState.imu.accelerometer[1] = msg->linear_acceleration.y;
        lowState.imu.accelerometer[2] = msg->linear_acceleration.z;
        
    }

    void FRhipCallback(const a1_msgs::msg::MotorState::UniquePtr msg)
    {   std::cout << "======FRhipCallback======" << std::endl;
        start_up = false;
        lowState.motorstate[0].mode = msg->mode;
        lowState.motorstate[0].q = msg->q;
        lowState.motorstate[0].dq = msg->dq;
        lowState.motorstate[0].tau_est = msg->tau_est;
    }

    void FRthighCallback(const a1_msgs::msg::MotorState::UniquePtr msg)
    {
        lowState.motorstate[1].mode = msg->mode;
        lowState.motorstate[1].q = msg->q;
        lowState.motorstate[1].dq = msg->dq;
        lowState.motorstate[1].tau_est = msg->tau_est;
    }

    void FRcalfCallback(const a1_msgs::msg::MotorState::UniquePtr msg)
    {
        lowState.motorstate[2].mode = msg->mode;
        lowState.motorstate[2].q = msg->q;
        lowState.motorstate[2].dq = msg->dq;
        lowState.motorstate[2].tau_est = msg->tau_est;
    }

    void FLhipCallback(const a1_msgs::msg::MotorState::UniquePtr msg)
    {
        start_up = false;
        lowState.motorstate[3].mode = msg->mode;
        lowState.motorstate[3].q = msg->q;
        lowState.motorstate[3].dq = msg->dq;
        lowState.motorstate[3].tau_est = msg->tau_est;
    }

    void FLthighCallback(const a1_msgs::msg::MotorState::UniquePtr msg)
    {
        lowState.motorstate[4].mode = msg->mode;
        lowState.motorstate[4].q = msg->q;
        lowState.motorstate[4].dq = msg->dq;
        lowState.motorstate[4].tau_est = msg->tau_est;
    }

    void FLcalfCallback(const a1_msgs::msg::MotorState::UniquePtr msg)
    {
        lowState.motorstate[5].mode = msg->mode;
        lowState.motorstate[5].q = msg->q;
        lowState.motorstate[5].dq = msg->dq;
        lowState.motorstate[5].tau_est = msg->tau_est;
    }

    void RRhipCallback(const a1_msgs::msg::MotorState::UniquePtr msg)
    {
        start_up = false;
        lowState.motorstate[6].mode = msg->mode;
        lowState.motorstate[6].q = msg->q;
        lowState.motorstate[6].dq = msg->dq;
        lowState.motorstate[6].tau_est = msg->tau_est;
    }

    void RRthighCallback(const a1_msgs::msg::MotorState::UniquePtr msg)
    {
        lowState.motorstate[7].mode = msg->mode;
        lowState.motorstate[7].q = msg->q;
        lowState.motorstate[7].dq = msg->dq;
        lowState.motorstate[7].tau_est = msg->tau_est;
    }

    void RRcalfCallback(const a1_msgs::msg::MotorState::UniquePtr msg)
    {
        lowState.motorstate[8].mode = msg->mode;
        lowState.motorstate[8].q = msg->q;
        lowState.motorstate[8].dq = msg->dq;
        lowState.motorstate[8].tau_est = msg->tau_est;
    }

    void RLhipCallback(const a1_msgs::msg::MotorState::UniquePtr msg)
    {
        start_up = false;
        lowState.motorstate[9].mode = msg->mode;
        lowState.motorstate[9].q = msg->q;
        lowState.motorstate[9].dq = msg->dq;
        lowState.motorstate[9].tau_est = msg->tau_est;
    }

    void RLthighCallback(const a1_msgs::msg::MotorState::UniquePtr msg)
    {
        lowState.motorstate[10].mode = msg->mode;
        lowState.motorstate[10].q = msg->q;
        lowState.motorstate[10].dq = msg->dq;
        lowState.motorstate[10].tau_est = msg->tau_est;
    }

    void RLcalfCallback(const a1_msgs::msg::MotorState::UniquePtr msg)
    {
        lowState.motorstate[11].mode = msg->mode;
        lowState.motorstate[11].q = msg->q;
        lowState.motorstate[11].dq = msg->dq;
        lowState.motorstate[11].tau_est = msg->tau_est;
    }

    void FRfootCallback(const geometry_msgs::msg::WrenchStamped::UniquePtr msg)
    {
        lowState.eeforce[0].x = msg->wrench.force.x;
        lowState.eeforce[0].y = msg->wrench.force.y;
        lowState.eeforce[0].z = msg->wrench.force.z;
        lowState.footforce[0] = msg->wrench.force.z;
    }

    void FLfootCallback(const geometry_msgs::msg::WrenchStamped::UniquePtr msg)
    {
        lowState.eeforce[1].x = msg->wrench.force.x;
        lowState.eeforce[1].y = msg->wrench.force.y;
        lowState.eeforce[1].z = msg->wrench.force.z;
        lowState.footforce[1] = msg->wrench.force.z;
    }

    void RRfootCallback(const geometry_msgs::msg::WrenchStamped::UniquePtr msg)
    {
        lowState.eeforce[2].x = msg->wrench.force.x;
        lowState.eeforce[2].y = msg->wrench.force.y;
        lowState.eeforce[2].z = msg->wrench.force.z;
        lowState.footforce[2] = msg->wrench.force.z;
    }

    void RLfootCallback(const geometry_msgs::msg::WrenchStamped::UniquePtr msg)
    {
        lowState.eeforce[3].x = msg->wrench.force.x;
        lowState.eeforce[3].y = msg->wrench.force.y;
        lowState.eeforce[3].z = msg->wrench.force.z;
        lowState.footforce[3] = msg->wrench.force.z;
    }

    rclcpp::Subscription<a1_msgs::msg::MotorState>::SharedPtr servo_sub[12];
    rclcpp::Subscription<geometry_msgs::msg::WrenchStamped>::SharedPtr footForce_sub[4];
    rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr imu_sub;
    string robot_name;
};
int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);

    string robot_name;
    //rclcpp::param::get("/robot_name", robot_name);
    robot_name = "a1";
    cout << "robot_name: " << robot_name << endl;
    //auto master_node = rclcpp::Node::make_shared("MasterNode");
    //multiThread listen_publish_obj(robot_name);
    //using rclcpp::executors::MultiThreadedExecutor;
    //MultiThreadedExecutor executor;
    //executor.add_node(master_node);
    //std::thread executor_thread(std::bind(&MultiThreadedExecutor::spin, &executor));
    //executor_thread.detach();
    usleep(300000); // must wait 300ms, to get first state

    auto ros_thread = std::thread(
    [&]() {
      std::cout << "=== start ros===" << std::endl;
      multiThread listen_publish_obj(robot_name);
      std::cout << "=== end ros ===" << std::endl;
    });

    cout << "=== a1 node ===" << endl;
    // ros::Publisher lowState_pub; //for rviz visualization
    auto A1_node = rclcpp::Node::make_shared(robot_name);
    rclcpp::Publisher<a1_msgs::msg::LowState>::SharedPtr lowState_pub;
    // ros::Rate loop_rate(1000);
    // the following nodes have been initialized by "gazebo.launch"
    lowState_pub = A1_node->create_publisher<a1_msgs::msg::LowState>("/" + robot_name + "_gazebo/lowState/state", 1);
    servo_pub[0]  = A1_node->create_publisher<a1_msgs::msg::MotorCmd>("/" + robot_name + "_gazebo/FR_hip_controller/command", 1);
    servo_pub[1]  = A1_node->create_publisher<a1_msgs::msg::MotorCmd>("/" + robot_name + "_gazebo/FR_thigh_controller/command", 1);
    servo_pub[2]  = A1_node->create_publisher<a1_msgs::msg::MotorCmd>("/" + robot_name + "_gazebo/FR_calf_controller/command", 1);
    servo_pub[3]  = A1_node->create_publisher<a1_msgs::msg::MotorCmd>("/" + robot_name + "_gazebo/FL_hip_controller/command", 1);
    servo_pub[4]  = A1_node->create_publisher<a1_msgs::msg::MotorCmd>("/" + robot_name + "_gazebo/FL_thigh_controller/command", 1);
    servo_pub[5]  = A1_node->create_publisher<a1_msgs::msg::MotorCmd>("/" + robot_name + "_gazebo/FL_calf_controller/command", 1);
    servo_pub[6]  = A1_node->create_publisher<a1_msgs::msg::MotorCmd>("/" + robot_name + "_gazebo/RR_hip_controller/command", 1);
    servo_pub[7]  = A1_node->create_publisher<a1_msgs::msg::MotorCmd>("/" + robot_name + "_gazebo/RR_thigh_controller/command", 1);
    servo_pub[8]  = A1_node->create_publisher<a1_msgs::msg::MotorCmd>("/" + robot_name + "_gazebo/RR_calf_controller/command", 1);
    servo_pub[9]  = A1_node->create_publisher<a1_msgs::msg::MotorCmd>("/" + robot_name + "_gazebo/RL_hip_controller/command", 1);
    servo_pub[10] = A1_node->create_publisher<a1_msgs::msg::MotorCmd>("/" + robot_name + "_gazebo/RL_thigh_controller/command", 1);
    servo_pub[11] = A1_node->create_publisher<a1_msgs::msg::MotorCmd>("/" + robot_name + "_gazebo/RL_calf_controller/command", 1);

    cout << "=== create publish over ===" << endl;
    motion_init();

    while (rclcpp::ok()){
        /*
        control logic
        */
        lowState_pub->publish(lowState);
        // sendServoCmd();
        for(int m=0; m < 12; m++){
            servo_pub[m]->publish(lowCmd.motorcmd[m]);
        }

        rclcpp::spin_some(A1_node);
        usleep(1000);

    }
    return 0;
}
