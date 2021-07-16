// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from a1_msgs:msg/LED.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__LED__BUILDER_HPP_
#define A1_MSGS__MSG__DETAIL__LED__BUILDER_HPP_

#include "a1_msgs/msg/detail/led__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace a1_msgs
{

namespace msg
{

namespace builder
{

class Init_LED_b
{
public:
  explicit Init_LED_b(::a1_msgs::msg::LED & msg)
  : msg_(msg)
  {}
  ::a1_msgs::msg::LED b(::a1_msgs::msg::LED::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::a1_msgs::msg::LED msg_;
};

class Init_LED_g
{
public:
  explicit Init_LED_g(::a1_msgs::msg::LED & msg)
  : msg_(msg)
  {}
  Init_LED_b g(::a1_msgs::msg::LED::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_LED_b(msg_);
  }

private:
  ::a1_msgs::msg::LED msg_;
};

class Init_LED_r
{
public:
  Init_LED_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LED_g r(::a1_msgs::msg::LED::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_LED_g(msg_);
  }

private:
  ::a1_msgs::msg::LED msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::a1_msgs::msg::LED>()
{
  return a1_msgs::msg::builder::Init_LED_r();
}

}  // namespace a1_msgs

#endif  // A1_MSGS__MSG__DETAIL__LED__BUILDER_HPP_
