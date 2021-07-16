// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from a1_msgs:msg/Cartesian.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__CARTESIAN__TRAITS_HPP_
#define A1_MSGS__MSG__DETAIL__CARTESIAN__TRAITS_HPP_

#include "a1_msgs/msg/detail/cartesian__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<a1_msgs::msg::Cartesian>()
{
  return "a1_msgs::msg::Cartesian";
}

template<>
inline const char * name<a1_msgs::msg::Cartesian>()
{
  return "a1_msgs/msg/Cartesian";
}

template<>
struct has_fixed_size<a1_msgs::msg::Cartesian>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<a1_msgs::msg::Cartesian>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<a1_msgs::msg::Cartesian>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // A1_MSGS__MSG__DETAIL__CARTESIAN__TRAITS_HPP_
