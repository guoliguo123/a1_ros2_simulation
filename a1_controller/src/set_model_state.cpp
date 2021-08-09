#include <memory>
#include <chrono>
#include <unistd.h>
#include "rclcpp/rclcpp.hpp"
#include <gazebo_msgs/msg/link_states.hpp>
#include <gazebo_msgs/msg/model_states.hpp>
#include <gazebo_msgs/srv/get_entity_state.hpp>
#include <gazebo_msgs/srv/set_entity_state.hpp>
#include <tf2/transform_datatypes.h>
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"
#define ROS2_SERVICE_SET_MODEL_STATE "/demo/set_entity_state"
using namespace std::chrono_literals;
long long time_ms = 0;
class ClientNode
{
public:
    ClientNode(uint8_t mode) :count_(5) {
        set_mode = mode;
        node = rclcpp::Node::make_shared("set_model_state");
        client = node->create_client<gazebo_msgs::srv::SetEntityState>(ROS2_SERVICE_SET_MODEL_STATE);
    }
    void client_set_model_state(std::string joint);
private:
    rclcpp::TimerBase::SharedPtr timer_c;
    rclcpp::Client<gazebo_msgs::srv::SetEntityState>::SharedPtr client;
    std::shared_ptr<rclcpp::Node> node;
    size_t count_;
    uint8_t set_mode;
};

void ClientNode::client_set_model_state(std::string joint) {
    size_t times = 0;

    auto request = std::make_shared<gazebo_msgs::srv::SetEntityState::Request>();
    while (!client->wait_for_service(1s)) {
        times++;
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting times(%d)...", times);
        if (count_ == times)
            return;
    }
    if (set_mode == 1) {
#if 0
        request->state.twist.linear.x  = 0.0; //0.02: 2cm/sec;
        request->state.twist.linear.y  = 0.0;
        request->state.twist.linear.z  = 0.0;
        request->state.twist.angular.x = 0.0;
        request->state.twist.angular.y = 0.0;
        request->state.twist.angular.z = 1.0;
        request->state.name = "base";
        //request->reference_frame = "base";
        request->state.name = joint;
#endif
        request->state.name = "base";
        request->state.pose.position.x = 0.0;
        request->state.pose.position.y = 0.0;
        request->state.pose.position.z = 0.0;

        request->state.pose.orientation.x = 0.0;
        request->state.pose.orientation.y = 0.0;
        request->state.pose.orientation.z = 0.0;
        request->state.pose.orientation.w = 1.0;
#if 0
        if (joint == "FL_hip")
        {
            request->state.pose.position.x = 0.2;
            request->state.pose.position.y = -0.2;
            request->state.pose.position.z = 0.5;
        }
        else if (joint == "FL_thigh")
        {
            request->state.pose.position.x = 0.2;
            request->state.pose.position.y = -0.2;
            request->state.pose.position.z = 0.25;
        }
        else if (joint == "FL_calf")
        {
            request->state.pose.position.x = 0.2;
            request->state.pose.position.y = -0.2;
            request->state.pose.position.z = 0.0;
        }
        else if (joint == "FR_hip")
        {
            request->state.pose.position.x = -0.2;
            request->state.pose.position.y = -0.2;
            request->state.pose.position.z = 0.5;
        }
        else if (joint == "FR_thigh")
        {
            request->state.pose.position.x = -0.2;
            request->state.pose.position.y = -0.2;
            request->state.pose.position.z = 0.25;
        }
        else if (joint == "FR_calf")
        {
            request->state.pose.position.x = -0.2;
            request->state.pose.position.y = -0.2;
            request->state.pose.position.z = 0.0;
        }
        else if (joint == "RL_hip")
        {
            request->state.pose.position.x = 0.2;
            request->state.pose.position.y = 0.2;
            request->state.pose.position.z = 0.5;
        }
        else if (joint == "RL_thigh")
        {
            request->state.pose.position.x = 0.2;
            request->state.pose.position.y = 0.2;
            request->state.pose.position.z = 0.25;
        }
        else if (joint == "RL_calf")
        {
            request->state.pose.position.x = 0.2;
            request->state.pose.position.y = 0.2;
            request->state.pose.position.z = 0.0;
        }
        else if (joint == "RR_hip")
        {
            request->state.pose.position.x = -0.2;
            request->state.pose.position.y = 0.2;
            request->state.pose.position.z = 0.5;
        }
        else if (joint == "RR_thigh")
        {
            request->state.pose.position.x = -0.2;
            request->state.pose.position.y = 0.2;
            request->state.pose.position.z = 0.25;
        }
        else if (joint == "RR_calf")
        {
            request->state.pose.position.x = -0.2;
            request->state.pose.position.y = 0.2;
            request->state.pose.position.z = 0.0;
        }
#endif
    }
    else
    {
        request->state.name = "base";
        request->state.pose.position.x = 0.0;
        request->state.pose.position.y = 0.0;
        request->state.pose.position.z = 0.5;

        request->state.pose.orientation.x = 0.0;
        request->state.pose.orientation.y = 0.0;
        request->state.pose.orientation.z = 0.0;
        request->state.pose.orientation.w = 1.0;

        //request->reference_frame = "world";
        const double period = 5000;
        const double radius = 1.5;
        tf2::Quaternion quat_tf;
        // walk circle

        quat_tf.setRPY(0, 0, -2 * M_PI * (double)time_ms/period);
        geometry_msgs::msg::Quaternion quat_msg;

        request->state.pose.position.x = radius * sin(2*M_PI*(double)time_ms/period);
        request->state.pose.position.y = radius * cos(2*M_PI*(double)time_ms/period);
        //request->state.pose.orientation = radius * tf2::createQuaternionMsgFromRollPitchYaw(
        //                                           0, 0,-2 * M_PI * (double)time_ms/period);
        tf2::convert(quat_tf, quat_msg);

        request->state.pose.orientation = quat_msg;

        time_ms += 1;
    }
    // send command message to service
    auto result = client->async_send_request(request);
    // Wait for the result.
    if (rclcpp::spin_until_future_complete(node, result) ==
        rclcpp::executor::FutureReturnCode::SUCCESS)
    {
        auto cmd = result.get();
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service return value : %d", cmd->success);
    }
    else {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service");
    }

    return;
}


int main(int argc, char *argv[]) {

    rclcpp::init(argc, argv);
    if (argv[1] == NULL || (atoi(argv[1]) < 0 || atoi(argv[1]) > 2))
    {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Invalid number of input parameters.");
        return -1;
    }

    ClientNode set_model_state(atoi(argv[1]));
    rclcpp::WallRate loop_rate(1000);
    while (rclcpp::ok())
    {
        set_model_state.client_set_model_state("base");
#if 0
        set_model_state.client_set_model_state("FL_hip");
        set_model_state.client_set_model_state("FL_thigh");
        set_model_state.client_set_model_state("FL_calf");

        set_model_state.client_set_model_state("FR_hip");
        set_model_state.client_set_model_state("FR_thigh");
        set_model_state.client_set_model_state("FR_calf");

        set_model_state.client_set_model_state("RR_hip");
        set_model_state.client_set_model_state("RR_thigh");
        set_model_state.client_set_model_state("RR_calf");

        set_model_state.client_set_model_state("RL_hip");
        set_model_state.client_set_model_state("RL_thigh");
        set_model_state.client_set_model_state("RL_calf");
#endif
        loop_rate.sleep();
    }
    rclcpp::shutdown();
    return 0;
}