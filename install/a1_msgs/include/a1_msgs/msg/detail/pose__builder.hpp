// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from a1_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__POSE__BUILDER_HPP_
#define A1_MSGS__MSG__DETAIL__POSE__BUILDER_HPP_

#include "a1_msgs/msg/detail/pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace a1_msgs
{

namespace msg
{

namespace builder
{

class Init_Pose_bodyheight
{
public:
  explicit Init_Pose_bodyheight(::a1_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  ::a1_msgs::msg::Pose bodyheight(::a1_msgs::msg::Pose::_bodyheight_type arg)
  {
    msg_.bodyheight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::a1_msgs::msg::Pose msg_;
};

class Init_Pose_roll
{
public:
  explicit Init_Pose_roll(::a1_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_bodyheight roll(::a1_msgs::msg::Pose::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Pose_bodyheight(msg_);
  }

private:
  ::a1_msgs::msg::Pose msg_;
};

class Init_Pose_pitch
{
public:
  explicit Init_Pose_pitch(::a1_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_roll pitch(::a1_msgs::msg::Pose::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Pose_roll(msg_);
  }

private:
  ::a1_msgs::msg::Pose msg_;
};

class Init_Pose_yaw
{
public:
  Init_Pose_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose_pitch yaw(::a1_msgs::msg::Pose::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Pose_pitch(msg_);
  }

private:
  ::a1_msgs::msg::Pose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::a1_msgs::msg::Pose>()
{
  return a1_msgs::msg::builder::Init_Pose_yaw();
}

}  // namespace a1_msgs

#endif  // A1_MSGS__MSG__DETAIL__POSE__BUILDER_HPP_
