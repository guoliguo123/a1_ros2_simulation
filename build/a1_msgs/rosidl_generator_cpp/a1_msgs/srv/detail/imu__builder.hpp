// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from a1_msgs:srv/Imu.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__SRV__DETAIL__IMU__BUILDER_HPP_
#define A1_MSGS__SRV__DETAIL__IMU__BUILDER_HPP_

#include "a1_msgs/srv/detail/imu__struct.hpp"
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
auto build<::a1_msgs::srv::Imu_Request>()
{
  return ::a1_msgs::srv::Imu_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace a1_msgs


namespace a1_msgs
{

namespace srv
{

namespace builder
{

class Init_Imu_Response_temperature
{
public:
  explicit Init_Imu_Response_temperature(::a1_msgs::srv::Imu_Response & msg)
  : msg_(msg)
  {}
  ::a1_msgs::srv::Imu_Response temperature(::a1_msgs::srv::Imu_Response::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::a1_msgs::srv::Imu_Response msg_;
};

class Init_Imu_Response_accelerometer
{
public:
  explicit Init_Imu_Response_accelerometer(::a1_msgs::srv::Imu_Response & msg)
  : msg_(msg)
  {}
  Init_Imu_Response_temperature accelerometer(::a1_msgs::srv::Imu_Response::_accelerometer_type arg)
  {
    msg_.accelerometer = std::move(arg);
    return Init_Imu_Response_temperature(msg_);
  }

private:
  ::a1_msgs::srv::Imu_Response msg_;
};

class Init_Imu_Response_gyroscope
{
public:
  explicit Init_Imu_Response_gyroscope(::a1_msgs::srv::Imu_Response & msg)
  : msg_(msg)
  {}
  Init_Imu_Response_accelerometer gyroscope(::a1_msgs::srv::Imu_Response::_gyroscope_type arg)
  {
    msg_.gyroscope = std::move(arg);
    return Init_Imu_Response_accelerometer(msg_);
  }

private:
  ::a1_msgs::srv::Imu_Response msg_;
};

class Init_Imu_Response_quaternion
{
public:
  Init_Imu_Response_quaternion()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Imu_Response_gyroscope quaternion(::a1_msgs::srv::Imu_Response::_quaternion_type arg)
  {
    msg_.quaternion = std::move(arg);
    return Init_Imu_Response_gyroscope(msg_);
  }

private:
  ::a1_msgs::srv::Imu_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::a1_msgs::srv::Imu_Response>()
{
  return a1_msgs::srv::builder::Init_Imu_Response_quaternion();
}

}  // namespace a1_msgs

#endif  // A1_MSGS__SRV__DETAIL__IMU__BUILDER_HPP_
