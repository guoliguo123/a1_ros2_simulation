// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from a1_msgs:srv/Cartesian.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__SRV__DETAIL__CARTESIAN__TRAITS_HPP_
#define A1_MSGS__SRV__DETAIL__CARTESIAN__TRAITS_HPP_

#include "a1_msgs/srv/detail/cartesian__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<a1_msgs::srv::Cartesian_Request>()
{
  return "a1_msgs::srv::Cartesian_Request";
}

template<>
inline const char * name<a1_msgs::srv::Cartesian_Request>()
{
  return "a1_msgs/srv/Cartesian_Request";
}

template<>
struct has_fixed_size<a1_msgs::srv::Cartesian_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<a1_msgs::srv::Cartesian_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<a1_msgs::srv::Cartesian_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'footposition2body'
// Member 'footspeed2body'
#include "a1_msgs/msg/detail/cartesian__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<a1_msgs::srv::Cartesian_Response>()
{
  return "a1_msgs::srv::Cartesian_Response";
}

template<>
inline const char * name<a1_msgs::srv::Cartesian_Response>()
{
  return "a1_msgs/srv/Cartesian_Response";
}

template<>
struct has_fixed_size<a1_msgs::srv::Cartesian_Response>
  : std::integral_constant<bool, has_fixed_size<a1_msgs::msg::Cartesian>::value> {};

template<>
struct has_bounded_size<a1_msgs::srv::Cartesian_Response>
  : std::integral_constant<bool, has_bounded_size<a1_msgs::msg::Cartesian>::value> {};

template<>
struct is_message<a1_msgs::srv::Cartesian_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<a1_msgs::srv::Cartesian>()
{
  return "a1_msgs::srv::Cartesian";
}

template<>
inline const char * name<a1_msgs::srv::Cartesian>()
{
  return "a1_msgs/srv/Cartesian";
}

template<>
struct has_fixed_size<a1_msgs::srv::Cartesian>
  : std::integral_constant<
    bool,
    has_fixed_size<a1_msgs::srv::Cartesian_Request>::value &&
    has_fixed_size<a1_msgs::srv::Cartesian_Response>::value
  >
{
};

template<>
struct has_bounded_size<a1_msgs::srv::Cartesian>
  : std::integral_constant<
    bool,
    has_bounded_size<a1_msgs::srv::Cartesian_Request>::value &&
    has_bounded_size<a1_msgs::srv::Cartesian_Response>::value
  >
{
};

template<>
struct is_service<a1_msgs::srv::Cartesian>
  : std::true_type
{
};

template<>
struct is_service_request<a1_msgs::srv::Cartesian_Request>
  : std::true_type
{
};

template<>
struct is_service_response<a1_msgs::srv::Cartesian_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // A1_MSGS__SRV__DETAIL__CARTESIAN__TRAITS_HPP_
