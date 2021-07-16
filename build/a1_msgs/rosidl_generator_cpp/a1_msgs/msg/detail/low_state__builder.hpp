// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from a1_msgs:msg/LowState.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__LOW_STATE__BUILDER_HPP_
#define A1_MSGS__MSG__DETAIL__LOW_STATE__BUILDER_HPP_

#include "a1_msgs/msg/detail/low_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace a1_msgs
{

namespace msg
{

namespace builder
{

class Init_LowState_velocity_w
{
public:
  explicit Init_LowState_velocity_w(::a1_msgs::msg::LowState & msg)
  : msg_(msg)
  {}
  ::a1_msgs::msg::LowState velocity_w(::a1_msgs::msg::LowState::_velocity_w_type arg)
  {
    msg_.velocity_w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::a1_msgs::msg::LowState msg_;
};

class Init_LowState_velocity
{
public:
  explicit Init_LowState_velocity(::a1_msgs::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_velocity_w velocity(::a1_msgs::msg::LowState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_LowState_velocity_w(msg_);
  }

private:
  ::a1_msgs::msg::LowState msg_;
};

class Init_LowState_position
{
public:
  explicit Init_LowState_position(::a1_msgs::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_velocity position(::a1_msgs::msg::LowState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_LowState_velocity(msg_);
  }

private:
  ::a1_msgs::msg::LowState msg_;
};

class Init_LowState_eeforce
{
public:
  explicit Init_LowState_eeforce(::a1_msgs::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_position eeforce(::a1_msgs::msg::LowState::_eeforce_type arg)
  {
    msg_.eeforce = std::move(arg);
    return Init_LowState_position(msg_);
  }

private:
  ::a1_msgs::msg::LowState msg_;
};

class Init_LowState_eeforceraw
{
public:
  explicit Init_LowState_eeforceraw(::a1_msgs::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_eeforce eeforceraw(::a1_msgs::msg::LowState::_eeforceraw_type arg)
  {
    msg_.eeforceraw = std::move(arg);
    return Init_LowState_eeforce(msg_);
  }

private:
  ::a1_msgs::msg::LowState msg_;
};

class Init_LowState_crc
{
public:
  explicit Init_LowState_crc(::a1_msgs::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_eeforceraw crc(::a1_msgs::msg::LowState::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return Init_LowState_eeforceraw(msg_);
  }

private:
  ::a1_msgs::msg::LowState msg_;
};

class Init_LowState_reserve
{
public:
  explicit Init_LowState_reserve(::a1_msgs::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_crc reserve(::a1_msgs::msg::LowState::_reserve_type arg)
  {
    msg_.reserve = std::move(arg);
    return Init_LowState_crc(msg_);
  }

private:
  ::a1_msgs::msg::LowState msg_;
};

class Init_LowState_wirelessremote
{
public:
  explicit Init_LowState_wirelessremote(::a1_msgs::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_reserve wirelessremote(::a1_msgs::msg::LowState::_wirelessremote_type arg)
  {
    msg_.wirelessremote = std::move(arg);
    return Init_LowState_reserve(msg_);
  }

private:
  ::a1_msgs::msg::LowState msg_;
};

class Init_LowState_tick
{
public:
  explicit Init_LowState_tick(::a1_msgs::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_wirelessremote tick(::a1_msgs::msg::LowState::_tick_type arg)
  {
    msg_.tick = std::move(arg);
    return Init_LowState_wirelessremote(msg_);
  }

private:
  ::a1_msgs::msg::LowState msg_;
};

class Init_LowState_footforceest
{
public:
  explicit Init_LowState_footforceest(::a1_msgs::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_tick footforceest(::a1_msgs::msg::LowState::_footforceest_type arg)
  {
    msg_.footforceest = std::move(arg);
    return Init_LowState_tick(msg_);
  }

private:
  ::a1_msgs::msg::LowState msg_;
};

class Init_LowState_footforce
{
public:
  explicit Init_LowState_footforce(::a1_msgs::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_footforceest footforce(::a1_msgs::msg::LowState::_footforce_type arg)
  {
    msg_.footforce = std::move(arg);
    return Init_LowState_footforceest(msg_);
  }

private:
  ::a1_msgs::msg::LowState msg_;
};

class Init_LowState_motorstate
{
public:
  explicit Init_LowState_motorstate(::a1_msgs::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_footforce motorstate(::a1_msgs::msg::LowState::_motorstate_type arg)
  {
    msg_.motorstate = std::move(arg);
    return Init_LowState_footforce(msg_);
  }

private:
  ::a1_msgs::msg::LowState msg_;
};

class Init_LowState_imu
{
public:
  explicit Init_LowState_imu(::a1_msgs::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_motorstate imu(::a1_msgs::msg::LowState::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return Init_LowState_motorstate(msg_);
  }

private:
  ::a1_msgs::msg::LowState msg_;
};

class Init_LowState_bandwidth
{
public:
  explicit Init_LowState_bandwidth(::a1_msgs::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_imu bandwidth(::a1_msgs::msg::LowState::_bandwidth_type arg)
  {
    msg_.bandwidth = std::move(arg);
    return Init_LowState_imu(msg_);
  }

private:
  ::a1_msgs::msg::LowState msg_;
};

class Init_LowState_sn
{
public:
  explicit Init_LowState_sn(::a1_msgs::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_bandwidth sn(::a1_msgs::msg::LowState::_sn_type arg)
  {
    msg_.sn = std::move(arg);
    return Init_LowState_bandwidth(msg_);
  }

private:
  ::a1_msgs::msg::LowState msg_;
};

class Init_LowState_robotid
{
public:
  explicit Init_LowState_robotid(::a1_msgs::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_sn robotid(::a1_msgs::msg::LowState::_robotid_type arg)
  {
    msg_.robotid = std::move(arg);
    return Init_LowState_sn(msg_);
  }

private:
  ::a1_msgs::msg::LowState msg_;
};

class Init_LowState_commversion
{
public:
  explicit Init_LowState_commversion(::a1_msgs::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_robotid commversion(::a1_msgs::msg::LowState::_commversion_type arg)
  {
    msg_.commversion = std::move(arg);
    return Init_LowState_robotid(msg_);
  }

private:
  ::a1_msgs::msg::LowState msg_;
};

class Init_LowState_levelflag
{
public:
  Init_LowState_levelflag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LowState_commversion levelflag(::a1_msgs::msg::LowState::_levelflag_type arg)
  {
    msg_.levelflag = std::move(arg);
    return Init_LowState_commversion(msg_);
  }

private:
  ::a1_msgs::msg::LowState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::a1_msgs::msg::LowState>()
{
  return a1_msgs::msg::builder::Init_LowState_levelflag();
}

}  // namespace a1_msgs

#endif  // A1_MSGS__MSG__DETAIL__LOW_STATE__BUILDER_HPP_
