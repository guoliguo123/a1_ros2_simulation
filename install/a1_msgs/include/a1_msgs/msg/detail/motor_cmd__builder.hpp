// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from a1_msgs:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_
#define A1_MSGS__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_

#include "a1_msgs/msg/detail/motor_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace a1_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorCmd_reserve
{
public:
  explicit Init_MotorCmd_reserve(::a1_msgs::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  ::a1_msgs::msg::MotorCmd reserve(::a1_msgs::msg::MotorCmd::_reserve_type arg)
  {
    msg_.reserve = std::move(arg);
    return std::move(msg_);
  }

private:
  ::a1_msgs::msg::MotorCmd msg_;
};

class Init_MotorCmd_kd
{
public:
  explicit Init_MotorCmd_kd(::a1_msgs::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_reserve kd(::a1_msgs::msg::MotorCmd::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_MotorCmd_reserve(msg_);
  }

private:
  ::a1_msgs::msg::MotorCmd msg_;
};

class Init_MotorCmd_kp
{
public:
  explicit Init_MotorCmd_kp(::a1_msgs::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_kd kp(::a1_msgs::msg::MotorCmd::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_MotorCmd_kd(msg_);
  }

private:
  ::a1_msgs::msg::MotorCmd msg_;
};

class Init_MotorCmd_tau
{
public:
  explicit Init_MotorCmd_tau(::a1_msgs::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_kp tau(::a1_msgs::msg::MotorCmd::_tau_type arg)
  {
    msg_.tau = std::move(arg);
    return Init_MotorCmd_kp(msg_);
  }

private:
  ::a1_msgs::msg::MotorCmd msg_;
};

class Init_MotorCmd_dq
{
public:
  explicit Init_MotorCmd_dq(::a1_msgs::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_tau dq(::a1_msgs::msg::MotorCmd::_dq_type arg)
  {
    msg_.dq = std::move(arg);
    return Init_MotorCmd_tau(msg_);
  }

private:
  ::a1_msgs::msg::MotorCmd msg_;
};

class Init_MotorCmd_q
{
public:
  explicit Init_MotorCmd_q(::a1_msgs::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_dq q(::a1_msgs::msg::MotorCmd::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_MotorCmd_dq(msg_);
  }

private:
  ::a1_msgs::msg::MotorCmd msg_;
};

class Init_MotorCmd_mode
{
public:
  Init_MotorCmd_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCmd_q mode(::a1_msgs::msg::MotorCmd::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorCmd_q(msg_);
  }

private:
  ::a1_msgs::msg::MotorCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::a1_msgs::msg::MotorCmd>()
{
  return a1_msgs::msg::builder::Init_MotorCmd_mode();
}

}  // namespace a1_msgs

#endif  // A1_MSGS__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_
