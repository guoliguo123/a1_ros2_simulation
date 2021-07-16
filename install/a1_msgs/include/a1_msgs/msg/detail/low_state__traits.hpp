// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from a1_msgs:msg/LowState.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__LOW_STATE__TRAITS_HPP_
#define A1_MSGS__MSG__DETAIL__LOW_STATE__TRAITS_HPP_

#include "a1_msgs/msg/detail/low_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'imu'
#include "a1_msgs/msg/detail/imu__traits.hpp"
// Member 'motorstate'
#include "a1_msgs/msg/detail/motor_state__traits.hpp"
// Member 'eeforceraw'
// Member 'eeforce'
// Member 'position'
// Member 'velocity'
// Member 'velocity_w'
#include "a1_msgs/msg/detail/cartesian__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<a1_msgs::msg::LowState>()
{
  return "a1_msgs::msg::LowState";
}

template<>
inline const char * name<a1_msgs::msg::LowState>()
{
  return "a1_msgs/msg/LowState";
}

template<>
struct has_fixed_size<a1_msgs::msg::LowState>
  : std::integral_constant<bool, has_fixed_size<a1_msgs::msg::Cartesian>::value && has_fixed_size<a1_msgs::msg::IMU>::value && has_fixed_size<a1_msgs::msg::MotorState>::value> {};

template<>
struct has_bounded_size<a1_msgs::msg::LowState>
  : std::integral_constant<bool, has_bounded_size<a1_msgs::msg::Cartesian>::value && has_bounded_size<a1_msgs::msg::IMU>::value && has_bounded_size<a1_msgs::msg::MotorState>::value> {};

template<>
struct is_message<a1_msgs::msg::LowState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // A1_MSGS__MSG__DETAIL__LOW_STATE__TRAITS_HPP_
