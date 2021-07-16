// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from a1_msgs:srv/Mode.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__SRV__DETAIL__MODE__BUILDER_HPP_
#define A1_MSGS__SRV__DETAIL__MODE__BUILDER_HPP_

#include "a1_msgs/srv/detail/mode__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace a1_msgs
{

namespace srv
{

namespace builder
{

class Init_Mode_Request_mode
{
public:
  Init_Mode_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::a1_msgs::srv::Mode_Request mode(::a1_msgs::srv::Mode_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::a1_msgs::srv::Mode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::a1_msgs::srv::Mode_Request>()
{
  return a1_msgs::srv::builder::Init_Mode_Request_mode();
}

}  // namespace a1_msgs


namespace a1_msgs
{

namespace srv
{

namespace builder
{

class Init_Mode_Response_value
{
public:
  Init_Mode_Response_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::a1_msgs::srv::Mode_Response value(::a1_msgs::srv::Mode_Response::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::a1_msgs::srv::Mode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::a1_msgs::srv::Mode_Response>()
{
  return a1_msgs::srv::builder::Init_Mode_Response_value();
}

}  // namespace a1_msgs

#endif  // A1_MSGS__SRV__DETAIL__MODE__BUILDER_HPP_
