// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from a1_msgs:srv/LowState.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__SRV__DETAIL__LOW_STATE__TRAITS_HPP_
#define A1_MSGS__SRV__DETAIL__LOW_STATE__TRAITS_HPP_

#include "a1_msgs/srv/detail/low_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<a1_msgs::srv::LowState_Request>()
{
  return "a1_msgs::srv::LowState_Request";
}

template<>
inline const char * name<a1_msgs::srv::LowState_Request>()
{
  return "a1_msgs/srv/LowState_Request";
}

template<>
struct has_fixed_size<a1_msgs::srv::LowState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<a1_msgs::srv::LowState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<a1_msgs::srv::LowState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'imu'
#include "a1_msgs/msg/detail/imu__traits.hpp"
// Member 'motorstate'
#include "a1_msgs/msg/detail/motor_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<a1_msgs::srv::LowState_Response>()
{
  return "a1_msgs::srv::LowState_Response";
}

template<>
inline const char * name<a1_msgs::srv::LowState_Response>()
{
  return "a1_msgs/srv/LowState_Response";
}

template<>
struct has_fixed_size<a1_msgs::srv::LowState_Response>
  : std::integral_constant<bool, has_fixed_size<a1_msgs::msg::IMU>::value && has_fixed_size<a1_msgs::msg::MotorState>::value> {};

template<>
struct has_bounded_size<a1_msgs::srv::LowState_Response>
  : std::integral_constant<bool, has_bounded_size<a1_msgs::msg::IMU>::value && has_bounded_size<a1_msgs::msg::MotorState>::value> {};

template<>
struct is_message<a1_msgs::srv::LowState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<a1_msgs::srv::LowState>()
{
  return "a1_msgs::srv::LowState";
}

template<>
inline const char * name<a1_msgs::srv::LowState>()
{
  return "a1_msgs/srv/LowState";
}

template<>
struct has_fixed_size<a1_msgs::srv::LowState>
  : std::integral_constant<
    bool,
    has_fixed_size<a1_msgs::srv::LowState_Request>::value &&
    has_fixed_size<a1_msgs::srv::LowState_Response>::value
  >
{
};

template<>
struct has_bounded_size<a1_msgs::srv::LowState>
  : std::integral_constant<
    bool,
    has_bounded_size<a1_msgs::srv::LowState_Request>::value &&
    has_bounded_size<a1_msgs::srv::LowState_Response>::value
  >
{
};

template<>
struct is_service<a1_msgs::srv::LowState>
  : std::true_type
{
};

template<>
struct is_service_request<a1_msgs::srv::LowState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<a1_msgs::srv::LowState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // A1_MSGS__SRV__DETAIL__LOW_STATE__TRAITS_HPP_
