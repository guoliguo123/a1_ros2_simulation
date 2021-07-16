// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from a1_msgs:srv/LowState.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__SRV__DETAIL__LOW_STATE__BUILDER_HPP_
#define A1_MSGS__SRV__DETAIL__LOW_STATE__BUILDER_HPP_

#include "a1_msgs/srv/detail/low_state__struct.hpp"
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
auto build<::a1_msgs::srv::LowState_Request>()
{
  return ::a1_msgs::srv::LowState_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace a1_msgs


namespace a1_msgs
{

namespace srv
{

namespace builder
{

class Init_LowState_Response_crc
{
public:
  explicit Init_LowState_Response_crc(::a1_msgs::srv::LowState_Response & msg)
  : msg_(msg)
  {}
  ::a1_msgs::srv::LowState_Response crc(::a1_msgs::srv::LowState_Response::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::a1_msgs::srv::LowState_Response msg_;
};

class Init_LowState_Response_reserve
{
public:
  explicit Init_LowState_Response_reserve(::a1_msgs::srv::LowState_Response & msg)
  : msg_(msg)
  {}
  Init_LowState_Response_crc reserve(::a1_msgs::srv::LowState_Response::_reserve_type arg)
  {
    msg_.reserve = std::move(arg);
    return Init_LowState_Response_crc(msg_);
  }

private:
  ::a1_msgs::srv::LowState_Response msg_;
};

class Init_LowState_Response_wirelessremote
{
public:
  explicit Init_LowState_Response_wirelessremote(::a1_msgs::srv::LowState_Response & msg)
  : msg_(msg)
  {}
  Init_LowState_Response_reserve wirelessremote(::a1_msgs::srv::LowState_Response::_wirelessremote_type arg)
  {
    msg_.wirelessremote = std::move(arg);
    return Init_LowState_Response_reserve(msg_);
  }

private:
  ::a1_msgs::srv::LowState_Response msg_;
};

class Init_LowState_Response_tick
{
public:
  explicit Init_LowState_Response_tick(::a1_msgs::srv::LowState_Response & msg)
  : msg_(msg)
  {}
  Init_LowState_Response_wirelessremote tick(::a1_msgs::srv::LowState_Response::_tick_type arg)
  {
    msg_.tick = std::move(arg);
    return Init_LowState_Response_wirelessremote(msg_);
  }

private:
  ::a1_msgs::srv::LowState_Response msg_;
};

class Init_LowState_Response_footforceest
{
public:
  explicit Init_LowState_Response_footforceest(::a1_msgs::srv::LowState_Response & msg)
  : msg_(msg)
  {}
  Init_LowState_Response_tick footforceest(::a1_msgs::srv::LowState_Response::_footforceest_type arg)
  {
    msg_.footforceest = std::move(arg);
    return Init_LowState_Response_tick(msg_);
  }

private:
  ::a1_msgs::srv::LowState_Response msg_;
};

class Init_LowState_Response_footforce
{
public:
  explicit Init_LowState_Response_footforce(::a1_msgs::srv::LowState_Response & msg)
  : msg_(msg)
  {}
  Init_LowState_Response_footforceest footforce(::a1_msgs::srv::LowState_Response::_footforce_type arg)
  {
    msg_.footforce = std::move(arg);
    return Init_LowState_Response_footforceest(msg_);
  }

private:
  ::a1_msgs::srv::LowState_Response msg_;
};

class Init_LowState_Response_motorstate
{
public:
  explicit Init_LowState_Response_motorstate(::a1_msgs::srv::LowState_Response & msg)
  : msg_(msg)
  {}
  Init_LowState_Response_footforce motorstate(::a1_msgs::srv::LowState_Response::_motorstate_type arg)
  {
    msg_.motorstate = std::move(arg);
    return Init_LowState_Response_footforce(msg_);
  }

private:
  ::a1_msgs::srv::LowState_Response msg_;
};

class Init_LowState_Response_imu
{
public:
  explicit Init_LowState_Response_imu(::a1_msgs::srv::LowState_Response & msg)
  : msg_(msg)
  {}
  Init_LowState_Response_motorstate imu(::a1_msgs::srv::LowState_Response::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return Init_LowState_Response_motorstate(msg_);
  }

private:
  ::a1_msgs::srv::LowState_Response msg_;
};

class Init_LowState_Response_bandwidth
{
public:
  explicit Init_LowState_Response_bandwidth(::a1_msgs::srv::LowState_Response & msg)
  : msg_(msg)
  {}
  Init_LowState_Response_imu bandwidth(::a1_msgs::srv::LowState_Response::_bandwidth_type arg)
  {
    msg_.bandwidth = std::move(arg);
    return Init_LowState_Response_imu(msg_);
  }

private:
  ::a1_msgs::srv::LowState_Response msg_;
};

class Init_LowState_Response_sn
{
public:
  explicit Init_LowState_Response_sn(::a1_msgs::srv::LowState_Response & msg)
  : msg_(msg)
  {}
  Init_LowState_Response_bandwidth sn(::a1_msgs::srv::LowState_Response::_sn_type arg)
  {
    msg_.sn = std::move(arg);
    return Init_LowState_Response_bandwidth(msg_);
  }

private:
  ::a1_msgs::srv::LowState_Response msg_;
};

class Init_LowState_Response_robotid
{
public:
  explicit Init_LowState_Response_robotid(::a1_msgs::srv::LowState_Response & msg)
  : msg_(msg)
  {}
  Init_LowState_Response_sn robotid(::a1_msgs::srv::LowState_Response::_robotid_type arg)
  {
    msg_.robotid = std::move(arg);
    return Init_LowState_Response_sn(msg_);
  }

private:
  ::a1_msgs::srv::LowState_Response msg_;
};

class Init_LowState_Response_commversion
{
public:
  explicit Init_LowState_Response_commversion(::a1_msgs::srv::LowState_Response & msg)
  : msg_(msg)
  {}
  Init_LowState_Response_robotid commversion(::a1_msgs::srv::LowState_Response::_commversion_type arg)
  {
    msg_.commversion = std::move(arg);
    return Init_LowState_Response_robotid(msg_);
  }

private:
  ::a1_msgs::srv::LowState_Response msg_;
};

class Init_LowState_Response_levelflag
{
public:
  Init_LowState_Response_levelflag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LowState_Response_commversion levelflag(::a1_msgs::srv::LowState_Response::_levelflag_type arg)
  {
    msg_.levelflag = std::move(arg);
    return Init_LowState_Response_commversion(msg_);
  }

private:
  ::a1_msgs::srv::LowState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::a1_msgs::srv::LowState_Response>()
{
  return a1_msgs::srv::builder::Init_LowState_Response_levelflag();
}

}  // namespace a1_msgs

#endif  // A1_MSGS__SRV__DETAIL__LOW_STATE__BUILDER_HPP_
