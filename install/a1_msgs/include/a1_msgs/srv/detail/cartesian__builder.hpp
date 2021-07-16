// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from a1_msgs:srv/Cartesian.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__SRV__DETAIL__CARTESIAN__BUILDER_HPP_
#define A1_MSGS__SRV__DETAIL__CARTESIAN__BUILDER_HPP_

#include "a1_msgs/srv/detail/cartesian__struct.hpp"
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
auto build<::a1_msgs::srv::Cartesian_Request>()
{
  return ::a1_msgs::srv::Cartesian_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace a1_msgs


namespace a1_msgs
{

namespace srv
{

namespace builder
{

class Init_Cartesian_Response_footspeed2body
{
public:
  explicit Init_Cartesian_Response_footspeed2body(::a1_msgs::srv::Cartesian_Response & msg)
  : msg_(msg)
  {}
  ::a1_msgs::srv::Cartesian_Response footspeed2body(::a1_msgs::srv::Cartesian_Response::_footspeed2body_type arg)
  {
    msg_.footspeed2body = std::move(arg);
    return std::move(msg_);
  }

private:
  ::a1_msgs::srv::Cartesian_Response msg_;
};

class Init_Cartesian_Response_footposition2body
{
public:
  Init_Cartesian_Response_footposition2body()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cartesian_Response_footspeed2body footposition2body(::a1_msgs::srv::Cartesian_Response::_footposition2body_type arg)
  {
    msg_.footposition2body = std::move(arg);
    return Init_Cartesian_Response_footspeed2body(msg_);
  }

private:
  ::a1_msgs::srv::Cartesian_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::a1_msgs::srv::Cartesian_Response>()
{
  return a1_msgs::srv::builder::Init_Cartesian_Response_footposition2body();
}

}  // namespace a1_msgs

#endif  // A1_MSGS__SRV__DETAIL__CARTESIAN__BUILDER_HPP_
