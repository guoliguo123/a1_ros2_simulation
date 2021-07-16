// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from a1_msgs:msg/Cartesian.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "a1_msgs/msg/detail/cartesian__struct.hpp"
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

void Cartesian_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) a1_msgs::msg::Cartesian(_init);
}

void Cartesian_fini_function(void * message_memory)
{
  auto typed_message = static_cast<a1_msgs::msg::Cartesian *>(message_memory);
  typed_message->~Cartesian();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Cartesian_message_member_array[3] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::Cartesian, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::Cartesian, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::msg::Cartesian, z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Cartesian_message_members = {
  "a1_msgs::msg",  // message namespace
  "Cartesian",  // message name
  3,  // number of fields
  sizeof(a1_msgs::msg::Cartesian),
  Cartesian_message_member_array,  // message members
  Cartesian_init_function,  // function to initialize message memory (memory has to be allocated)
  Cartesian_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Cartesian_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Cartesian_message_members,
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
get_message_type_support_handle<a1_msgs::msg::Cartesian>()
{
  return &::a1_msgs::msg::rosidl_typesupport_introspection_cpp::Cartesian_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, a1_msgs, msg, Cartesian)() {
  return &::a1_msgs::msg::rosidl_typesupport_introspection_cpp::Cartesian_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
