// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from a1_msgs:msg/LowCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "a1_msgs/msg/detail/low_cmd__rosidl_typesupport_introspection_c.h"
#include "a1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "a1_msgs/msg/detail/low_cmd__functions.h"
#include "a1_msgs/msg/detail/low_cmd__struct.h"


// Include directives for member types
// Member `motorcmd`
#include "a1_msgs/msg/motor_cmd.h"
// Member `motorcmd`
#include "a1_msgs/msg/detail/motor_cmd__rosidl_typesupport_introspection_c.h"
// Member `led`
#include "a1_msgs/msg/led.h"
// Member `led`
#include "a1_msgs/msg/detail/led__rosidl_typesupport_introspection_c.h"
// Member `ff`
#include "a1_msgs/msg/cartesian.h"
// Member `ff`
#include "a1_msgs/msg/detail/cartesian__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LowCmd__rosidl_typesupport_introspection_c__LowCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  a1_msgs__msg__LowCmd__init(message_memory);
}

void LowCmd__rosidl_typesupport_introspection_c__LowCmd_fini_function(void * message_memory)
{
  a1_msgs__msg__LowCmd__fini(message_memory);
}

size_t LowCmd__rosidl_typesupport_introspection_c__size_function__MotorCmd__motorcmd(
  const void * untyped_member)
{
  (void)untyped_member;
  return 20;
}

const void * LowCmd__rosidl_typesupport_introspection_c__get_const_function__MotorCmd__motorcmd(
  const void * untyped_member, size_t index)
{
  const a1_msgs__msg__MotorCmd ** member =
    (const a1_msgs__msg__MotorCmd **)(untyped_member);
  return &(*member)[index];
}

void * LowCmd__rosidl_typesupport_introspection_c__get_function__MotorCmd__motorcmd(
  void * untyped_member, size_t index)
{
  a1_msgs__msg__MotorCmd ** member =
    (a1_msgs__msg__MotorCmd **)(untyped_member);
  return &(*member)[index];
}

size_t LowCmd__rosidl_typesupport_introspection_c__size_function__LED__led(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * LowCmd__rosidl_typesupport_introspection_c__get_const_function__LED__led(
  const void * untyped_member, size_t index)
{
  const a1_msgs__msg__LED ** member =
    (const a1_msgs__msg__LED **)(untyped_member);
  return &(*member)[index];
}

void * LowCmd__rosidl_typesupport_introspection_c__get_function__LED__led(
  void * untyped_member, size_t index)
{
  a1_msgs__msg__LED ** member =
    (a1_msgs__msg__LED **)(untyped_member);
  return &(*member)[index];
}

size_t LowCmd__rosidl_typesupport_introspection_c__size_function__Cartesian__ff(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * LowCmd__rosidl_typesupport_introspection_c__get_const_function__Cartesian__ff(
  const void * untyped_member, size_t index)
{
  const a1_msgs__msg__Cartesian ** member =
    (const a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

void * LowCmd__rosidl_typesupport_introspection_c__get_function__Cartesian__ff(
  void * untyped_member, size_t index)
{
  a1_msgs__msg__Cartesian ** member =
    (a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_member_array[11] = {
  {
    "levelflag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowCmd, levelflag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commversion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowCmd, commversion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robotid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowCmd, robotid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowCmd, sn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bandwidth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowCmd, bandwidth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motorcmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    20,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowCmd, motorcmd),  // bytes offset in struct
    NULL,  // default value
    LowCmd__rosidl_typesupport_introspection_c__size_function__MotorCmd__motorcmd,  // size() function pointer
    LowCmd__rosidl_typesupport_introspection_c__get_const_function__MotorCmd__motorcmd,  // get_const(index) function pointer
    LowCmd__rosidl_typesupport_introspection_c__get_function__MotorCmd__motorcmd,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "led",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowCmd, led),  // bytes offset in struct
    NULL,  // default value
    LowCmd__rosidl_typesupport_introspection_c__size_function__LED__led,  // size() function pointer
    LowCmd__rosidl_typesupport_introspection_c__get_const_function__LED__led,  // get_const(index) function pointer
    LowCmd__rosidl_typesupport_introspection_c__get_function__LED__led,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wirelessremote",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    40,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowCmd, wirelessremote),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserve",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowCmd, reserve),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "crc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowCmd, crc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ff",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowCmd, ff),  // bytes offset in struct
    NULL,  // default value
    LowCmd__rosidl_typesupport_introspection_c__size_function__Cartesian__ff,  // size() function pointer
    LowCmd__rosidl_typesupport_introspection_c__get_const_function__Cartesian__ff,  // get_const(index) function pointer
    LowCmd__rosidl_typesupport_introspection_c__get_function__Cartesian__ff,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_members = {
  "a1_msgs__msg",  // message namespace
  "LowCmd",  // message name
  11,  // number of fields
  sizeof(a1_msgs__msg__LowCmd),
  LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_member_array,  // message members
  LowCmd__rosidl_typesupport_introspection_c__LowCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  LowCmd__rosidl_typesupport_introspection_c__LowCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_type_support_handle = {
  0,
  &LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_a1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, LowCmd)() {
  LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, MotorCmd)();
  LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, LED)();
  LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, Cartesian)();
  if (!LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_type_support_handle.typesupport_identifier) {
    LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
