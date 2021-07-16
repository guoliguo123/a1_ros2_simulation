// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from a1_msgs:msg/LowState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "a1_msgs/msg/detail/low_state__rosidl_typesupport_introspection_c.h"
#include "a1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "a1_msgs/msg/detail/low_state__functions.h"
#include "a1_msgs/msg/detail/low_state__struct.h"


// Include directives for member types
// Member `imu`
#include "a1_msgs/msg/imu.h"
// Member `imu`
#include "a1_msgs/msg/detail/imu__rosidl_typesupport_introspection_c.h"
// Member `motorstate`
#include "a1_msgs/msg/motor_state.h"
// Member `motorstate`
#include "a1_msgs/msg/detail/motor_state__rosidl_typesupport_introspection_c.h"
// Member `eeforceraw`
// Member `eeforce`
// Member `position`
// Member `velocity`
// Member `velocity_w`
#include "a1_msgs/msg/cartesian.h"
// Member `eeforceraw`
// Member `eeforce`
// Member `position`
// Member `velocity`
// Member `velocity_w`
#include "a1_msgs/msg/detail/cartesian__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LowState__rosidl_typesupport_introspection_c__LowState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  a1_msgs__msg__LowState__init(message_memory);
}

void LowState__rosidl_typesupport_introspection_c__LowState_fini_function(void * message_memory)
{
  a1_msgs__msg__LowState__fini(message_memory);
}

size_t LowState__rosidl_typesupport_introspection_c__size_function__MotorState__motorstate(
  const void * untyped_member)
{
  (void)untyped_member;
  return 20;
}

const void * LowState__rosidl_typesupport_introspection_c__get_const_function__MotorState__motorstate(
  const void * untyped_member, size_t index)
{
  const a1_msgs__msg__MotorState ** member =
    (const a1_msgs__msg__MotorState **)(untyped_member);
  return &(*member)[index];
}

void * LowState__rosidl_typesupport_introspection_c__get_function__MotorState__motorstate(
  void * untyped_member, size_t index)
{
  a1_msgs__msg__MotorState ** member =
    (a1_msgs__msg__MotorState **)(untyped_member);
  return &(*member)[index];
}

size_t LowState__rosidl_typesupport_introspection_c__size_function__Cartesian__eeforceraw(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * LowState__rosidl_typesupport_introspection_c__get_const_function__Cartesian__eeforceraw(
  const void * untyped_member, size_t index)
{
  const a1_msgs__msg__Cartesian ** member =
    (const a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

void * LowState__rosidl_typesupport_introspection_c__get_function__Cartesian__eeforceraw(
  void * untyped_member, size_t index)
{
  a1_msgs__msg__Cartesian ** member =
    (a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

size_t LowState__rosidl_typesupport_introspection_c__size_function__Cartesian__eeforce(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * LowState__rosidl_typesupport_introspection_c__get_const_function__Cartesian__eeforce(
  const void * untyped_member, size_t index)
{
  const a1_msgs__msg__Cartesian ** member =
    (const a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

void * LowState__rosidl_typesupport_introspection_c__get_function__Cartesian__eeforce(
  void * untyped_member, size_t index)
{
  a1_msgs__msg__Cartesian ** member =
    (a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[18] = {
  {
    "levelflag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowState, levelflag),  // bytes offset in struct
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
    offsetof(a1_msgs__msg__LowState, commversion),  // bytes offset in struct
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
    offsetof(a1_msgs__msg__LowState, robotid),  // bytes offset in struct
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
    offsetof(a1_msgs__msg__LowState, sn),  // bytes offset in struct
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
    offsetof(a1_msgs__msg__LowState, bandwidth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowState, imu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motorstate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    20,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowState, motorstate),  // bytes offset in struct
    NULL,  // default value
    LowState__rosidl_typesupport_introspection_c__size_function__MotorState__motorstate,  // size() function pointer
    LowState__rosidl_typesupport_introspection_c__get_const_function__MotorState__motorstate,  // get_const(index) function pointer
    LowState__rosidl_typesupport_introspection_c__get_function__MotorState__motorstate,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "footforce",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowState, footforce),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "footforceest",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowState, footforceest),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tick",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowState, tick),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
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
    offsetof(a1_msgs__msg__LowState, wirelessremote),  // bytes offset in struct
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
    offsetof(a1_msgs__msg__LowState, reserve),  // bytes offset in struct
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
    offsetof(a1_msgs__msg__LowState, crc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eeforceraw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowState, eeforceraw),  // bytes offset in struct
    NULL,  // default value
    LowState__rosidl_typesupport_introspection_c__size_function__Cartesian__eeforceraw,  // size() function pointer
    LowState__rosidl_typesupport_introspection_c__get_const_function__Cartesian__eeforceraw,  // get_const(index) function pointer
    LowState__rosidl_typesupport_introspection_c__get_function__Cartesian__eeforceraw,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eeforce",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowState, eeforce),  // bytes offset in struct
    NULL,  // default value
    LowState__rosidl_typesupport_introspection_c__size_function__Cartesian__eeforce,  // size() function pointer
    LowState__rosidl_typesupport_introspection_c__get_const_function__Cartesian__eeforce,  // get_const(index) function pointer
    LowState__rosidl_typesupport_introspection_c__get_function__Cartesian__eeforce,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowState, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowState, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__LowState, velocity_w),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LowState__rosidl_typesupport_introspection_c__LowState_message_members = {
  "a1_msgs__msg",  // message namespace
  "LowState",  // message name
  18,  // number of fields
  sizeof(a1_msgs__msg__LowState),
  LowState__rosidl_typesupport_introspection_c__LowState_message_member_array,  // message members
  LowState__rosidl_typesupport_introspection_c__LowState_init_function,  // function to initialize message memory (memory has to be allocated)
  LowState__rosidl_typesupport_introspection_c__LowState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LowState__rosidl_typesupport_introspection_c__LowState_message_type_support_handle = {
  0,
  &LowState__rosidl_typesupport_introspection_c__LowState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_a1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, LowState)() {
  LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, IMU)();
  LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, MotorState)();
  LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, Cartesian)();
  LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, Cartesian)();
  LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, Cartesian)();
  LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, Cartesian)();
  LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, Cartesian)();
  if (!LowState__rosidl_typesupport_introspection_c__LowState_message_type_support_handle.typesupport_identifier) {
    LowState__rosidl_typesupport_introspection_c__LowState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LowState__rosidl_typesupport_introspection_c__LowState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
