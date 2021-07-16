// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from a1_msgs:msg/Cartesian.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__CARTESIAN__BUILDER_HPP_
#define A1_MSGS__MSG__DETAIL__CARTESIAN__BUILDER_HPP_

#include "a1_msgs/msg/detail/cartesian__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace a1_msgs
{

namespace msg
{

namespace builder
{

class Init_Cartesian_z
{
public:
  explicit Init_Cartesian_z(::a1_msgs::msg::Cartesian & msg)
  : msg_(msg)
  {}
  ::a1_msgs::msg::Cartesian z(::a1_msgs::msg::Cartesian::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::a1_msgs::msg::Cartesian msg_;
};

class Init_Cartesian_y
{
public:
  explicit Init_Cartesian_y(::a1_msgs::msg::Cartesian & msg)
  : msg_(msg)
  {}
  Init_Cartesian_z y(::a1_msgs::msg::Cartesian::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Cartesian_z(msg_);
  }

private:
  ::a1_msgs::msg::Cartesian msg_;
};

class Init_Cartesian_x
{
public:
  Init_Cartesian_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cartesian_y x(::a1_msgs::msg::Cartesian::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Cartesian_y(msg_);
  }

private:
  ::a1_msgs::msg::Cartesian msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::a1_msgs::msg::Cartesian>()
{
  return a1_msgs::msg::builder::Init_Cartesian_x();
}

}  // namespace a1_msgs

#endif  // A1_MSGS__MSG__DETAIL__CARTESIAN__BUILDER_HPP_
