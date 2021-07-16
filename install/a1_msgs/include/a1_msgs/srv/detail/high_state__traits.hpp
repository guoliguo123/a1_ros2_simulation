// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from a1_msgs:srv/HighState.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__SRV__DETAIL__HIGH_STATE__TRAITS_HPP_
#define A1_MSGS__SRV__DETAIL__HIGH_STATE__TRAITS_HPP_

#include "a1_msgs/srv/detail/high_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<a1_msgs::srv::HighState_Request>()
{
  return "a1_msgs::srv::HighState_Request";
}

template<>
inline const char * name<a1_msgs::srv::HighState_Request>()
{
  return "a1_msgs/srv/HighState_Request";
}

template<>
struct has_fixed_size<a1_msgs::srv::HighState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<a1_msgs::srv::HighState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<a1_msgs::srv::HighState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'imu'
#include "a1_msgs/msg/detail/imu__traits.hpp"
// Member 'footposition2body'
// Member 'footspeed2body'
// Member 'eeforce'
#include "a1_msgs/msg/detail/cartesian__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<a1_msgs::srv::HighState_Response>()
{
  return "a1_msgs::srv::HighState_Response";
}

template<>
inline const char * name<a1_msgs::srv::HighState_Response>()
{
  return "a1_msgs/srv/HighState_Response";
}

template<>
struct has_fixed_size<a1_msgs::srv::HighState_Response>
  : std::integral_constant<bool, has_fixed_size<a1_msgs::msg::Cartesian>::value && has_fixed_size<a1_msgs::msg::IMU>::value> {};

template<>
struct has_bounded_size<a1_msgs::srv::HighState_Response>
  : std::integral_constant<bool, has_bounded_size<a1_msgs::msg::Cartesian>::value && has_bounded_size<a1_msgs::msg::IMU>::value> {};

template<>
struct is_message<a1_msgs::srv::HighState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<a1_msgs::srv::HighState>()
{
  return "a1_msgs::srv::HighState";
}

template<>
inline const char * name<a1_msgs::srv::HighState>()
{
  return "a1_msgs/srv/HighState";
}

template<>
struct has_fixed_size<a1_msgs::srv::HighState>
  : std::integral_constant<
    bool,
    has_fixed_size<a1_msgs::srv::HighState_Request>::value &&
    has_fixed_size<a1_msgs::srv::HighState_Response>::value
  >
{
};

template<>
struct has_bounded_size<a1_msgs::srv::HighState>
  : std::integral_constant<
    bool,
    has_bounded_size<a1_msgs::srv::HighState_Request>::value &&
    has_bounded_size<a1_msgs::srv::HighState_Response>::value
  >
{
};

template<>
struct is_service<a1_msgs::srv::HighState>
  : std::true_type
{
};

template<>
struct is_service_request<a1_msgs::srv::HighState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<a1_msgs::srv::HighState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // A1_MSGS__SRV__DETAIL__HIGH_STATE__TRAITS_HPP_
