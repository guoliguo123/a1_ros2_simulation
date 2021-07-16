// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from a1_msgs:msg/HighState.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__HIGH_STATE__BUILDER_HPP_
#define A1_MSGS__MSG__DETAIL__HIGH_STATE__BUILDER_HPP_

#include "a1_msgs/msg/detail/high_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace a1_msgs
{

namespace msg
{

namespace builder
{

class Init_HighState_jointp
{
public:
  explicit Init_HighState_jointp(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  ::a1_msgs::msg::HighState jointp(::a1_msgs::msg::HighState::_jointp_type arg)
  {
    msg_.jointp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_eeforce
{
public:
  explicit Init_HighState_eeforce(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_jointp eeforce(::a1_msgs::msg::HighState::_eeforce_type arg)
  {
    msg_.eeforce = std::move(arg);
    return Init_HighState_jointp(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_crc
{
public:
  explicit Init_HighState_crc(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_eeforce crc(::a1_msgs::msg::HighState::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return Init_HighState_eeforce(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_reserve
{
public:
  explicit Init_HighState_reserve(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_crc reserve(::a1_msgs::msg::HighState::_reserve_type arg)
  {
    msg_.reserve = std::move(arg);
    return Init_HighState_crc(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_wirelessremote
{
public:
  explicit Init_HighState_wirelessremote(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_reserve wirelessremote(::a1_msgs::msg::HighState::_wirelessremote_type arg)
  {
    msg_.wirelessremote = std::move(arg);
    return Init_HighState_reserve(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_tick
{
public:
  explicit Init_HighState_tick(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_wirelessremote tick(::a1_msgs::msg::HighState::_tick_type arg)
  {
    msg_.tick = std::move(arg);
    return Init_HighState_wirelessremote(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_footforceest
{
public:
  explicit Init_HighState_footforceest(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_tick footforceest(::a1_msgs::msg::HighState::_footforceest_type arg)
  {
    msg_.footforceest = std::move(arg);
    return Init_HighState_tick(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_footforce
{
public:
  explicit Init_HighState_footforce(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_footforceest footforce(::a1_msgs::msg::HighState::_footforce_type arg)
  {
    msg_.footforce = std::move(arg);
    return Init_HighState_footforceest(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_footspeed2body
{
public:
  explicit Init_HighState_footspeed2body(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_footforce footspeed2body(::a1_msgs::msg::HighState::_footspeed2body_type arg)
  {
    msg_.footspeed2body = std::move(arg);
    return Init_HighState_footforce(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_footposition2body
{
public:
  explicit Init_HighState_footposition2body(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_footspeed2body footposition2body(::a1_msgs::msg::HighState::_footposition2body_type arg)
  {
    msg_.footposition2body = std::move(arg);
    return Init_HighState_footspeed2body(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_sideposition
{
public:
  explicit Init_HighState_sideposition(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_footposition2body sideposition(::a1_msgs::msg::HighState::_sideposition_type arg)
  {
    msg_.sideposition = std::move(arg);
    return Init_HighState_footposition2body(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_forwardposition
{
public:
  explicit Init_HighState_forwardposition(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_sideposition forwardposition(::a1_msgs::msg::HighState::_forwardposition_type arg)
  {
    msg_.forwardposition = std::move(arg);
    return Init_HighState_sideposition(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_updownspeed
{
public:
  explicit Init_HighState_updownspeed(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_forwardposition updownspeed(::a1_msgs::msg::HighState::_updownspeed_type arg)
  {
    msg_.updownspeed = std::move(arg);
    return Init_HighState_forwardposition(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_bodyheight
{
public:
  explicit Init_HighState_bodyheight(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_updownspeed bodyheight(::a1_msgs::msg::HighState::_bodyheight_type arg)
  {
    msg_.bodyheight = std::move(arg);
    return Init_HighState_updownspeed(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_rotatespeed
{
public:
  explicit Init_HighState_rotatespeed(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_bodyheight rotatespeed(::a1_msgs::msg::HighState::_rotatespeed_type arg)
  {
    msg_.rotatespeed = std::move(arg);
    return Init_HighState_bodyheight(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_sidespeed
{
public:
  explicit Init_HighState_sidespeed(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_rotatespeed sidespeed(::a1_msgs::msg::HighState::_sidespeed_type arg)
  {
    msg_.sidespeed = std::move(arg);
    return Init_HighState_rotatespeed(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_forwardspeed
{
public:
  explicit Init_HighState_forwardspeed(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_sidespeed forwardspeed(::a1_msgs::msg::HighState::_forwardspeed_type arg)
  {
    msg_.forwardspeed = std::move(arg);
    return Init_HighState_sidespeed(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_imu
{
public:
  explicit Init_HighState_imu(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_forwardspeed imu(::a1_msgs::msg::HighState::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return Init_HighState_forwardspeed(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_mode
{
public:
  explicit Init_HighState_mode(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_imu mode(::a1_msgs::msg::HighState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_HighState_imu(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_bandwidth
{
public:
  explicit Init_HighState_bandwidth(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_mode bandwidth(::a1_msgs::msg::HighState::_bandwidth_type arg)
  {
    msg_.bandwidth = std::move(arg);
    return Init_HighState_mode(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_sn
{
public:
  explicit Init_HighState_sn(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_bandwidth sn(::a1_msgs::msg::HighState::_sn_type arg)
  {
    msg_.sn = std::move(arg);
    return Init_HighState_bandwidth(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_robotid
{
public:
  explicit Init_HighState_robotid(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_sn robotid(::a1_msgs::msg::HighState::_robotid_type arg)
  {
    msg_.robotid = std::move(arg);
    return Init_HighState_sn(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_commversion
{
public:
  explicit Init_HighState_commversion(::a1_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_robotid commversion(::a1_msgs::msg::HighState::_commversion_type arg)
  {
    msg_.commversion = std::move(arg);
    return Init_HighState_robotid(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

class Init_HighState_levelflag
{
public:
  Init_HighState_levelflag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HighState_commversion levelflag(::a1_msgs::msg::HighState::_levelflag_type arg)
  {
    msg_.levelflag = std::move(arg);
    return Init_HighState_commversion(msg_);
  }

private:
  ::a1_msgs::msg::HighState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::a1_msgs::msg::HighState>()
{
  return a1_msgs::msg::builder::Init_HighState_levelflag();
}

}  // namespace a1_msgs

#endif  // A1_MSGS__MSG__DETAIL__HIGH_STATE__BUILDER_HPP_
