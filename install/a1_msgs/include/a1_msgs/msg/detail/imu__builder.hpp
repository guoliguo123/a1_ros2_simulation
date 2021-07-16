// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from a1_msgs:msg/IMU.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__IMU__BUILDER_HPP_
#define A1_MSGS__MSG__DETAIL__IMU__BUILDER_HPP_

#include "a1_msgs/msg/detail/imu__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace a1_msgs
{

namespace msg
{

namespace builder
{

class Init_IMU_temperature
{
public:
  explicit Init_IMU_temperature(::a1_msgs::msg::IMU & msg)
  : msg_(msg)
  {}
  ::a1_msgs::msg::IMU temperature(::a1_msgs::msg::IMU::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::a1_msgs::msg::IMU msg_;
};

class Init_IMU_accelerometer
{
public:
  explicit Init_IMU_accelerometer(::a1_msgs::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_temperature accelerometer(::a1_msgs::msg::IMU::_accelerometer_type arg)
  {
    msg_.accelerometer = std::move(arg);
    return Init_IMU_temperature(msg_);
  }

private:
  ::a1_msgs::msg::IMU msg_;
};

class Init_IMU_gyroscope
{
public:
  explicit Init_IMU_gyroscope(::a1_msgs::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_accelerometer gyroscope(::a1_msgs::msg::IMU::_gyroscope_type arg)
  {
    msg_.gyroscope = std::move(arg);
    return Init_IMU_accelerometer(msg_);
  }

private:
  ::a1_msgs::msg::IMU msg_;
};

class Init_IMU_quaternion
{
public:
  Init_IMU_quaternion()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMU_gyroscope quaternion(::a1_msgs::msg::IMU::_quaternion_type arg)
  {
    msg_.quaternion = std::move(arg);
    return Init_IMU_gyroscope(msg_);
  }

private:
  ::a1_msgs::msg::IMU msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::a1_msgs::msg::IMU>()
{
  return a1_msgs::msg::builder::Init_IMU_quaternion();
}

}  // namespace a1_msgs

#endif  // A1_MSGS__MSG__DETAIL__IMU__BUILDER_HPP_
