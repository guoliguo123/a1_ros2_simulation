// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from a1_msgs:srv/HighState.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__SRV__DETAIL__HIGH_STATE__BUILDER_HPP_
#define A1_MSGS__SRV__DETAIL__HIGH_STATE__BUILDER_HPP_

#include "a1_msgs/srv/detail/high_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace a1_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::a1_msgs::srv::HighState_Request>()
{
  return ::a1_msgs::srv::HighState_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace a1_msgs


namespace a1_msgs
{

namespace srv
{

namespace builder
{

class Init_HighState_Response_jointp
{
public:
  explicit Init_HighState_Response_jointp(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  ::a1_msgs::srv::HighState_Response jointp(::a1_msgs::srv::HighState_Response::_jointp_type arg)
  {
    msg_.jointp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_eeforce
{
public:
  explicit Init_HighState_Response_eeforce(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_jointp eeforce(::a1_msgs::srv::HighState_Response::_eeforce_type arg)
  {
    msg_.eeforce = std::move(arg);
    return Init_HighState_Response_jointp(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_crc
{
public:
  explicit Init_HighState_Response_crc(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_eeforce crc(::a1_msgs::srv::HighState_Response::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return Init_HighState_Response_eeforce(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_reserve
{
public:
  explicit Init_HighState_Response_reserve(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_crc reserve(::a1_msgs::srv::HighState_Response::_reserve_type arg)
  {
    msg_.reserve = std::move(arg);
    return Init_HighState_Response_crc(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_wirelessremote
{
public:
  explicit Init_HighState_Response_wirelessremote(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_reserve wirelessremote(::a1_msgs::srv::HighState_Response::_wirelessremote_type arg)
  {
    msg_.wirelessremote = std::move(arg);
    return Init_HighState_Response_reserve(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_tick
{
public:
  explicit Init_HighState_Response_tick(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_wirelessremote tick(::a1_msgs::srv::HighState_Response::_tick_type arg)
  {
    msg_.tick = std::move(arg);
    return Init_HighState_Response_wirelessremote(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_footforceest
{
public:
  explicit Init_HighState_Response_footforceest(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_tick footforceest(::a1_msgs::srv::HighState_Response::_footforceest_type arg)
  {
    msg_.footforceest = std::move(arg);
    return Init_HighState_Response_tick(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_footforce
{
public:
  explicit Init_HighState_Response_footforce(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_footforceest footforce(::a1_msgs::srv::HighState_Response::_footforce_type arg)
  {
    msg_.footforce = std::move(arg);
    return Init_HighState_Response_footforceest(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_footspeed2body
{
public:
  explicit Init_HighState_Response_footspeed2body(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_footforce footspeed2body(::a1_msgs::srv::HighState_Response::_footspeed2body_type arg)
  {
    msg_.footspeed2body = std::move(arg);
    return Init_HighState_Response_footforce(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_footposition2body
{
public:
  explicit Init_HighState_Response_footposition2body(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_footspeed2body footposition2body(::a1_msgs::srv::HighState_Response::_footposition2body_type arg)
  {
    msg_.footposition2body = std::move(arg);
    return Init_HighState_Response_footspeed2body(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_sideposition
{
public:
  explicit Init_HighState_Response_sideposition(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_footposition2body sideposition(::a1_msgs::srv::HighState_Response::_sideposition_type arg)
  {
    msg_.sideposition = std::move(arg);
    return Init_HighState_Response_footposition2body(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_forwardposition
{
public:
  explicit Init_HighState_Response_forwardposition(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_sideposition forwardposition(::a1_msgs::srv::HighState_Response::_forwardposition_type arg)
  {
    msg_.forwardposition = std::move(arg);
    return Init_HighState_Response_sideposition(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_updownspeed
{
public:
  explicit Init_HighState_Response_updownspeed(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_forwardposition updownspeed(::a1_msgs::srv::HighState_Response::_updownspeed_type arg)
  {
    msg_.updownspeed = std::move(arg);
    return Init_HighState_Response_forwardposition(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_bodyheight
{
public:
  explicit Init_HighState_Response_bodyheight(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_updownspeed bodyheight(::a1_msgs::srv::HighState_Response::_bodyheight_type arg)
  {
    msg_.bodyheight = std::move(arg);
    return Init_HighState_Response_updownspeed(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_rotatespeed
{
public:
  explicit Init_HighState_Response_rotatespeed(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_bodyheight rotatespeed(::a1_msgs::srv::HighState_Response::_rotatespeed_type arg)
  {
    msg_.rotatespeed = std::move(arg);
    return Init_HighState_Response_bodyheight(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_sidespeed
{
public:
  explicit Init_HighState_Response_sidespeed(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_rotatespeed sidespeed(::a1_msgs::srv::HighState_Response::_sidespeed_type arg)
  {
    msg_.sidespeed = std::move(arg);
    return Init_HighState_Response_rotatespeed(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_forwardspeed
{
public:
  explicit Init_HighState_Response_forwardspeed(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_sidespeed forwardspeed(::a1_msgs::srv::HighState_Response::_forwardspeed_type arg)
  {
    msg_.forwardspeed = std::move(arg);
    return Init_HighState_Response_sidespeed(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_imu
{
public:
  explicit Init_HighState_Response_imu(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_forwardspeed imu(::a1_msgs::srv::HighState_Response::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return Init_HighState_Response_forwardspeed(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_mode
{
public:
  explicit Init_HighState_Response_mode(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_imu mode(::a1_msgs::srv::HighState_Response::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_HighState_Response_imu(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_bandwidth
{
public:
  explicit Init_HighState_Response_bandwidth(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_mode bandwidth(::a1_msgs::srv::HighState_Response::_bandwidth_type arg)
  {
    msg_.bandwidth = std::move(arg);
    return Init_HighState_Response_mode(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_sn
{
public:
  explicit Init_HighState_Response_sn(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_bandwidth sn(::a1_msgs::srv::HighState_Response::_sn_type arg)
  {
    msg_.sn = std::move(arg);
    return Init_HighState_Response_bandwidth(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_robotid
{
public:
  explicit Init_HighState_Response_robotid(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_sn robotid(::a1_msgs::srv::HighState_Response::_robotid_type arg)
  {
    msg_.robotid = std::move(arg);
    return Init_HighState_Response_sn(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_commversion
{
public:
  explicit Init_HighState_Response_commversion(::a1_msgs::srv::HighState_Response & msg)
  : msg_(msg)
  {}
  Init_HighState_Response_robotid commversion(::a1_msgs::srv::HighState_Response::_commversion_type arg)
  {
    msg_.commversion = std::move(arg);
    return Init_HighState_Response_robotid(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

class Init_HighState_Response_levelflag
{
public:
  Init_HighState_Response_levelflag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HighState_Response_commversion levelflag(::a1_msgs::srv::HighState_Response::_levelflag_type arg)
  {
    msg_.levelflag = std::move(arg);
    return Init_HighState_Response_commversion(msg_);
  }

private:
  ::a1_msgs::srv::HighState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::a1_msgs::srv::HighState_Response>()
{
  return a1_msgs::srv::builder::Init_HighState_Response_levelflag();
}

}  // namespace a1_msgs

#endif  // A1_MSGS__SRV__DETAIL__HIGH_STATE__BUILDER_HPP_
