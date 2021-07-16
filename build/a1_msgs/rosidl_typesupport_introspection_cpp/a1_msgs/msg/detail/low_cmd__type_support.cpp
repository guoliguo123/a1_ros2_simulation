// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from a1_msgs:msg/LowCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "a1_msgs/msg/detail/low_cmd__struct.hpp"
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

void LowCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) a1_msgs::msg::LowCmd(_init);
}

void LowCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<a1_msgs::msg::LowCmd *>(message_memory);
  typed_message->~LowCmd();
}

size_t size_function__LowCmd__motorcmd(const void * untyped_member)
{
  (void)untyped_member;
  return 20;
}

const void * get_const_function__LowCmd__motorcmd(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<a1_msgs::msg::MotorCmd, 20> *>(untyped_member);
  return &member[index];
}

void * get_function__LowCmd__motorcmd(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<a1_msgs::msg::MotorCmd, 20> *>(untyped_member);
  return &member[index];
}

size_t size_function__LowCmd__led(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__LowCmd__led(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<a1_msgs::msg::LED, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__LowCmd__led(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<a1_msgs::msg::LED, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__LowCmd__wirelessremote(const void * untyped_member)
{
  (void)untyped_member;
  return 40;
}

const void * get_const_function__LowCmd__wirelessremote(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 40> *>(untyped_member);
  return &member[index];
}

void * get_function__LowCmd__wirelessremote(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 40> *>(untyped_member);
  return &member[index];
}

size_t size_function__LowCmd__ff(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__LowCmd__ff(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<a1_msgs::msg::Cartesian, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__LowCmd__ff(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<a1_msgs::msg::Cartesian, 4> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LowCmd_message_member_array[11] = {
  {
    "levelflag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::LowCmd, levelflag),  // bytes offset in struct
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
    offsetof(a1_msgs::msg::LowCmd, commversion),  // bytes offset in struct
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
    offsetof(a1_msgs::msg::LowCmd, robotid),  // bytes offset in struct
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
    offsetof(a1_msgs::msg::LowCmd, sn),  // bytes offset in struct
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
    offsetof(a1_msgs::msg::LowCmd, bandwidth),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motorcmd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<a1_msgs::msg::MotorCmd>(),  // members of sub message
    true,  // is array
    20,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::LowCmd, motorcmd),  // bytes offset in struct
    nullptr,  // default value
    size_function__LowCmd__motorcmd,  // size() function pointer
    get_const_function__LowCmd__motorcmd,  // get_const(index) function pointer
    get_function__LowCmd__motorcmd,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "led",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<a1_msgs::msg::LED>(),  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::LowCmd, led),  // bytes offset in struct
    nullptr,  // default value
    size_function__LowCmd__led,  // size() function pointer
    get_const_function__LowCmd__led,  // get_const(index) function pointer
    get_function__LowCmd__led,  // get(index) function pointer
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
    offsetof(a1_msgs::msg::LowCmd, wirelessremote),  // bytes offset in struct
    nullptr,  // default value
    size_function__LowCmd__wirelessremote,  // size() function pointer
    get_const_function__LowCmd__wirelessremote,  // get_const(index) function pointer
    get_function__LowCmd__wirelessremote,  // get(index) function pointer
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
    offsetof(a1_msgs::msg::LowCmd, reserve),  // bytes offset in struct
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
    offsetof(a1_msgs::msg::LowCmd, crc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ff",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<a1_msgs::msg::Cartesian>(),  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::LowCmd, ff),  // bytes offset in struct
    nullptr,  // default value
    size_function__LowCmd__ff,  // size() function pointer
    get_const_function__LowCmd__ff,  // get_const(index) function pointer
    get_function__LowCmd__ff,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LowCmd_message_members = {
  "a1_msgs::msg",  // message namespace
  "LowCmd",  // message name
  11,  // number of fields
  sizeof(a1_msgs::msg::LowCmd),
  LowCmd_message_member_array,  // message members
  LowCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  LowCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LowCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LowCmd_message_members,
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
get_message_type_support_handle<a1_msgs::msg::LowCmd>()
{
  return &::a1_msgs::msg::rosidl_typesupport_introspection_cpp::LowCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, a1_msgs, msg, LowCmd)() {
  return &::a1_msgs::msg::rosidl_typesupport_introspection_cpp::LowCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
