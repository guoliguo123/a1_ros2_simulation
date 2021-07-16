// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from a1_msgs:msg/HighState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "a1_msgs/msg/detail/high_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace a1_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void HighState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) a1_msgs::msg::HighState(_init);
}

void HighState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<a1_msgs::msg::HighState *>(message_memory);
  typed_message->~HighState();
}

size_t size_function__HighState__footposition2body(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__HighState__footposition2body(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<a1_msgs::msg::Cartesian, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__footposition2body(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<a1_msgs::msg::Cartesian, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__HighState__footspeed2body(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__HighState__footspeed2body(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<a1_msgs::msg::Cartesian, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__footspeed2body(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<a1_msgs::msg::Cartesian, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__HighState__footforce(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__HighState__footforce(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__footforce(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__HighState__footforceest(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__HighState__footforceest(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__footforceest(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__HighState__wirelessremote(const void * untyped_member)
{
  (void)untyped_member;
  return 40;
}

const void * get_const_function__HighState__wirelessremote(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 40> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__wirelessremote(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 40> *>(untyped_member);
  return &member[index];
}

size_t size_function__HighState__eeforce(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__HighState__eeforce(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<a1_msgs::msg::Cartesian, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__eeforce(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<a1_msgs::msg::Cartesian, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__HighState__jointp(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__HighState__jointp(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__jointp(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HighState_message_member_array[24] = {
  {
    "levelflag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, levelflag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "commversion",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, commversion),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robotid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, robotid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sn",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, sn),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bandwidth",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, bandwidth),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "imu",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<a1_msgs::msg::IMU>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, imu),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "forwardspeed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, forwardspeed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sidespeed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, sidespeed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rotatespeed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, rotatespeed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bodyheight",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, bodyheight),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "updownspeed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, updownspeed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "forwardposition",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, forwardposition),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sideposition",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, sideposition),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "footposition2body",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<a1_msgs::msg::Cartesian>(),  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, footposition2body),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__footposition2body,  // size() function pointer
    get_const_function__HighState__footposition2body,  // get_const(index) function pointer
    get_function__HighState__footposition2body,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "footspeed2body",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<a1_msgs::msg::Cartesian>(),  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, footspeed2body),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__footspeed2body,  // size() function pointer
    get_const_function__HighState__footspeed2body,  // get_const(index) function pointer
    get_function__HighState__footspeed2body,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "footforce",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, footforce),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__footforce,  // size() function pointer
    get_const_function__HighState__footforce,  // get_const(index) function pointer
    get_function__HighState__footforce,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "footforceest",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, footforceest),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__footforceest,  // size() function pointer
    get_const_function__HighState__footforceest,  // get_const(index) function pointer
    get_function__HighState__footforceest,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tick",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, tick),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "wirelessremote",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    40,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, wirelessremote),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__wirelessremote,  // size() function pointer
    get_const_function__HighState__wirelessremote,  // get_const(index) function pointer
    get_function__HighState__wirelessremote,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reserve",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, reserve),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "crc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, crc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "eeforce",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<a1_msgs::msg::Cartesian>(),  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, eeforce),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__eeforce,  // size() function pointer
    get_const_function__HighState__eeforce,  // get_const(index) function pointer
    get_function__HighState__eeforce,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "jointp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::HighState, jointp),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__jointp,  // size() function pointer
    get_const_function__HighState__jointp,  // get_const(index) function pointer
    get_function__HighState__jointp,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HighState_message_members = {
  "a1_msgs::msg",  // message namespace
  "HighState",  // message name
  24,  // number of fields
  sizeof(a1_msgs::msg::HighState),
  HighState_message_member_array,  // message members
  HighState_init_function,  // function to initialize message memory (memory has to be allocated)
  HighState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HighState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HighState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace a1_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<a1_msgs::msg::HighState>()
{
  return &::a1_msgs::msg::rosidl_typesupport_introspection_cpp::HighState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, a1_msgs, msg, HighState)() {
  return &::a1_msgs::msg::rosidl_typesupport_introspection_cpp::HighState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
