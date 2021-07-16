// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from a1_msgs:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
#define A1_MSGS__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_

#include "a1_msgs/msg/detail/motor_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace a1_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorState_reserve
{
public:
  explicit Init_MotorState_reserve(::a1_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  ::a1_msgs::msg::MotorState reserve(::a1_msgs::msg::MotorState::_reserve_type arg)
  {
    msg_.reserve = std::move(arg);
    return std::move(msg_);
  }

private:
  ::a1_msgs::msg::MotorState msg_;
};

class Init_MotorState_temperature
{
public:
  explicit Init_MotorState_temperature(::a1_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_reserve temperature(::a1_msgs::msg::MotorState::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_MotorState_reserve(msg_);
  }

private:
  ::a1_msgs::msg::MotorState msg_;
};

class Init_MotorState_ddq_raw
{
public:
  explicit Init_MotorState_ddq_raw(::a1_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_temperature ddq_raw(::a1_msgs::msg::MotorState::_ddq_raw_type arg)
  {
    msg_.ddq_raw = std::move(arg);
    return Init_MotorState_temperature(msg_);
  }

private:
  ::a1_msgs::msg::MotorState msg_;
};

class Init_MotorState_dq_raw
{
public:
  explicit Init_MotorState_dq_raw(::a1_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_ddq_raw dq_raw(::a1_msgs::msg::MotorState::_dq_raw_type arg)
  {
    msg_.dq_raw = std::move(arg);
    return Init_MotorState_ddq_raw(msg_);
  }

private:
  ::a1_msgs::msg::MotorState msg_;
};

class Init_MotorState_q_raw
{
public:
  explicit Init_MotorState_q_raw(::a1_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_dq_raw q_raw(::a1_msgs::msg::MotorState::_q_raw_type arg)
  {
    msg_.q_raw = std::move(arg);
    return Init_MotorState_dq_raw(msg_);
  }

private:
  ::a1_msgs::msg::MotorState msg_;
};

class Init_MotorState_tau_est
{
public:
  explicit Init_MotorState_tau_est(::a1_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_q_raw tau_est(::a1_msgs::msg::MotorState::_tau_est_type arg)
  {
    msg_.tau_est = std::move(arg);
    return Init_MotorState_q_raw(msg_);
  }

private:
  ::a1_msgs::msg::MotorState msg_;
};

class Init_MotorState_ddq
{
public:
  explicit Init_MotorState_ddq(::a1_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_tau_est ddq(::a1_msgs::msg::MotorState::_ddq_type arg)
  {
    msg_.ddq = std::move(arg);
    return Init_MotorState_tau_est(msg_);
  }

private:
  ::a1_msgs::msg::MotorState msg_;
};

class Init_MotorState_dq
{
public:
  explicit Init_MotorState_dq(::a1_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_ddq dq(::a1_msgs::msg::MotorState::_dq_type arg)
  {
    msg_.dq = std::move(arg);
    return Init_MotorState_ddq(msg_);
  }

private:
  ::a1_msgs::msg::MotorState msg_;
};

class Init_MotorState_q
{
public:
  explicit Init_MotorState_q(::a1_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_dq q(::a1_msgs::msg::MotorState::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_MotorState_dq(msg_);
  }

private:
  ::a1_msgs::msg::MotorState msg_;
};

class Init_MotorState_mode
{
public:
  Init_MotorState_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorState_q mode(::a1_msgs::msg::MotorState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorState_q(msg_);
  }

private:
  ::a1_msgs::msg::MotorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::a1_msgs::msg::MotorState>()
{
  return a1_msgs::msg::builder::Init_MotorState_mode();
}

}  // namespace a1_msgs

#endif  // A1_MSGS__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
