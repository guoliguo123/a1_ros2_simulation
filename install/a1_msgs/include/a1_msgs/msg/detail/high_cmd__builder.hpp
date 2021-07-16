// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from a1_msgs:msg/HighCmd.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__HIGH_CMD__BUILDER_HPP_
#define A1_MSGS__MSG__DETAIL__HIGH_CMD__BUILDER_HPP_

#include "a1_msgs/msg/detail/high_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace a1_msgs
{

namespace msg
{

namespace builder
{

class Init_HighCmd_crc
{
public:
  explicit Init_HighCmd_crc(::a1_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  ::a1_msgs::msg::HighCmd crc(::a1_msgs::msg::HighCmd::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_reserve
{
public:
  explicit Init_HighCmd_reserve(::a1_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_crc reserve(::a1_msgs::msg::HighCmd::_reserve_type arg)
  {
    msg_.reserve = std::move(arg);
    return Init_HighCmd_crc(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_appremote
{
public:
  explicit Init_HighCmd_appremote(::a1_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_reserve appremote(::a1_msgs::msg::HighCmd::_appremote_type arg)
  {
    msg_.appremote = std::move(arg);
    return Init_HighCmd_reserve(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_wirelessremote
{
public:
  explicit Init_HighCmd_wirelessremote(::a1_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_appremote wirelessremote(::a1_msgs::msg::HighCmd::_wirelessremote_type arg)
  {
    msg_.wirelessremote = std::move(arg);
    return Init_HighCmd_appremote(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_led
{
public:
  explicit Init_HighCmd_led(::a1_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_wirelessremote led(::a1_msgs::msg::HighCmd::_led_type arg)
  {
    msg_.led = std::move(arg);
    return Init_HighCmd_wirelessremote(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_roll
{
public:
  explicit Init_HighCmd_roll(::a1_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_led roll(::a1_msgs::msg::HighCmd::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_HighCmd_led(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_pitch
{
public:
  explicit Init_HighCmd_pitch(::a1_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_roll pitch(::a1_msgs::msg::HighCmd::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_HighCmd_roll(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_yaw
{
public:
  explicit Init_HighCmd_yaw(::a1_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_pitch yaw(::a1_msgs::msg::HighCmd::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_HighCmd_pitch(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_footraiseheight
{
public:
  explicit Init_HighCmd_footraiseheight(::a1_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_yaw footraiseheight(::a1_msgs::msg::HighCmd::_footraiseheight_type arg)
  {
    msg_.footraiseheight = std::move(arg);
    return Init_HighCmd_yaw(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_bodyheight
{
public:
  explicit Init_HighCmd_bodyheight(::a1_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_footraiseheight bodyheight(::a1_msgs::msg::HighCmd::_bodyheight_type arg)
  {
    msg_.bodyheight = std::move(arg);
    return Init_HighCmd_footraiseheight(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_rotatespeed
{
public:
  explicit Init_HighCmd_rotatespeed(::a1_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_bodyheight rotatespeed(::a1_msgs::msg::HighCmd::_rotatespeed_type arg)
  {
    msg_.rotatespeed = std::move(arg);
    return Init_HighCmd_bodyheight(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_sidespeed
{
public:
  explicit Init_HighCmd_sidespeed(::a1_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_rotatespeed sidespeed(::a1_msgs::msg::HighCmd::_sidespeed_type arg)
  {
    msg_.sidespeed = std::move(arg);
    return Init_HighCmd_rotatespeed(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_forwardspeed
{
public:
  explicit Init_HighCmd_forwardspeed(::a1_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_sidespeed forwardspeed(::a1_msgs::msg::HighCmd::_forwardspeed_type arg)
  {
    msg_.forwardspeed = std::move(arg);
    return Init_HighCmd_sidespeed(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_mode
{
public:
  explicit Init_HighCmd_mode(::a1_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_forwardspeed mode(::a1_msgs::msg::HighCmd::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_HighCmd_forwardspeed(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_bandwidth
{
public:
  explicit Init_HighCmd_bandwidth(::a1_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_mode bandwidth(::a1_msgs::msg::HighCmd::_bandwidth_type arg)
  {
    msg_.bandwidth = std::move(arg);
    return Init_HighCmd_mode(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_sn
{
public:
  explicit Init_HighCmd_sn(::a1_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_bandwidth sn(::a1_msgs::msg::HighCmd::_sn_type arg)
  {
    msg_.sn = std::move(arg);
    return Init_HighCmd_bandwidth(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_robotid
{
public:
  explicit Init_HighCmd_robotid(::a1_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_sn robotid(::a1_msgs::msg::HighCmd::_robotid_type arg)
  {
    msg_.robotid = std::move(arg);
    return Init_HighCmd_sn(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_commversion
{
public:
  explicit Init_HighCmd_commversion(::a1_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_robotid commversion(::a1_msgs::msg::HighCmd::_commversion_type arg)
  {
    msg_.commversion = std::move(arg);
    return Init_HighCmd_robotid(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_levelflag
{
public:
  Init_HighCmd_levelflag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HighCmd_commversion levelflag(::a1_msgs::msg::HighCmd::_levelflag_type arg)
  {
    msg_.levelflag = std::move(arg);
    return Init_HighCmd_commversion(msg_);
  }

private:
  ::a1_msgs::msg::HighCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::a1_msgs::msg::HighCmd>()
{
  return a1_msgs::msg::builder::Init_HighCmd_levelflag();
}

}  // namespace a1_msgs

#endif  // A1_MSGS__MSG__DETAIL__HIGH_CMD__BUILDER_HPP_
