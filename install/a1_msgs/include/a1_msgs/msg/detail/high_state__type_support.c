// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from a1_msgs:msg/HighState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "a1_msgs/msg/detail/high_state__rosidl_typesupport_introspection_c.h"
#include "a1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "a1_msgs/msg/detail/high_state__functions.h"
#include "a1_msgs/msg/detail/high_state__struct.h"


// Include directives for member types
// Member `imu`
#include "a1_msgs/msg/imu.h"
// Member `imu`
#include "a1_msgs/msg/detail/imu__rosidl_typesupport_introspection_c.h"
// Member `footposition2body`
// Member `footspeed2body`
// Member `eeforce`
#include "a1_msgs/msg/cartesian.h"
// Member `footposition2body`
// Member `footspeed2body`
// Member `eeforce`
#include "a1_msgs/msg/detail/cartesian__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void HighState__rosidl_typesupport_introspection_c__HighState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  a1_msgs__msg__HighState__init(message_memory);
}

void HighState__rosidl_typesupport_introspection_c__HighState_fini_function(void * message_memory)
{
  a1_msgs__msg__HighState__fini(message_memory);
}

size_t HighState__rosidl_typesupport_introspection_c__size_function__Cartesian__footposition2body(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * HighState__rosidl_typesupport_introspection_c__get_const_function__Cartesian__footposition2body(
  const void * untyped_member, size_t index)
{
  const a1_msgs__msg__Cartesian ** member =
    (const a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

void * HighState__rosidl_typesupport_introspection_c__get_function__Cartesian__footposition2body(
  void * untyped_member, size_t index)
{
  a1_msgs__msg__Cartesian ** member =
    (a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

size_t HighState__rosidl_typesupport_introspection_c__size_function__Cartesian__footspeed2body(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * HighState__rosidl_typesupport_introspection_c__get_const_function__Cartesian__footspeed2body(
  const void * untyped_member, size_t index)
{
  const a1_msgs__msg__Cartesian ** member =
    (const a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

void * HighState__rosidl_typesupport_introspection_c__get_function__Cartesian__footspeed2body(
  void * untyped_member, size_t index)
{
  a1_msgs__msg__Cartesian ** member =
    (a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

size_t HighState__rosidl_typesupport_introspection_c__size_function__Cartesian__eeforce(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * HighState__rosidl_typesupport_introspection_c__get_const_function__Cartesian__eeforce(
  const void * untyped_member, size_t index)
{
  const a1_msgs__msg__Cartesian ** member =
    (const a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

void * HighState__rosidl_typesupport_introspection_c__get_function__Cartesian__eeforce(
  void * untyped_member, size_t index)
{
  a1_msgs__msg__Cartesian ** member =
    (a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember HighState__rosidl_typesupport_introspection_c__HighState_message_member_array[24] = {
  {
    "levelflag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__HighState, levelflag),  // bytes offset in struct
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
    offsetof(a1_msgs__msg__HighState, commversion),  // bytes offset in struct
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
    offsetof(a1_msgs__msg__HighState, robotid),  // bytes offset in struct
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
    offsetof(a1_msgs__msg__HighState, sn),  // bytes offset in struct
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
    offsetof(a1_msgs__msg__HighState, bandwidth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__HighState, mode),  // bytes offset in struct
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
    offsetof(a1_msgs__msg__HighState, imu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "forwardspeed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__HighState, forwardspeed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sidespeed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__HighState, sidespeed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotatespeed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__HighState, rotatespeed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bodyheight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__HighState, bodyheight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "updownspeed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__HighState, updownspeed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "forwardposition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__HighState, forwardposition),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sideposition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__HighState, sideposition),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "footposition2body",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__HighState, footposition2body),  // bytes offset in struct
    NULL,  // default value
    HighState__rosidl_typesupport_introspection_c__size_function__Cartesian__footposition2body,  // size() function pointer
    HighState__rosidl_typesupport_introspection_c__get_const_function__Cartesian__footposition2body,  // get_const(index) function pointer
    HighState__rosidl_typesupport_introspection_c__get_function__Cartesian__footposition2body,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "footspeed2body",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__HighState, footspeed2body),  // bytes offset in struct
    NULL,  // default value
    HighState__rosidl_typesupport_introspection_c__size_function__Cartesian__footspeed2body,  // size() function pointer
    HighState__rosidl_typesupport_introspection_c__get_const_function__Cartesian__footspeed2body,  // get_const(index) function pointer
    HighState__rosidl_typesupport_introspection_c__get_function__Cartesian__footspeed2body,  // get(index) function pointer
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
    offsetof(a1_msgs__msg__HighState, footforce),  // bytes offset in struct
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
    offsetof(a1_msgs__msg__HighState, footforceest),  // bytes offset in struct
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
    offsetof(a1_msgs__msg__HighState, tick),  // bytes offset in struct
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
    offsetof(a1_msgs__msg__HighState, wirelessremote),  // bytes offset in struct
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
    offsetof(a1_msgs__msg__HighState, reserve),  // bytes offset in struct
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
    offsetof(a1_msgs__msg__HighState, crc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
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
    offsetof(a1_msgs__msg__HighState, eeforce),  // bytes offset in struct
    NULL,  // default value
    HighState__rosidl_typesupport_introspection_c__size_function__Cartesian__eeforce,  // size() function pointer
    HighState__rosidl_typesupport_introspection_c__get_const_function__Cartesian__eeforce,  // get_const(index) function pointer
    HighState__rosidl_typesupport_introspection_c__get_function__Cartesian__eeforce,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "jointp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__HighState, jointp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HighState__rosidl_typesupport_introspection_c__HighState_message_members = {
  "a1_msgs__msg",  // message namespace
  "HighState",  // message name
  24,  // number of fields
  sizeof(a1_msgs__msg__HighState),
  HighState__rosidl_typesupport_introspection_c__HighState_message_member_array,  // message members
  HighState__rosidl_typesupport_introspection_c__HighState_init_function,  // function to initialize message memory (memory has to be allocated)
  HighState__rosidl_typesupport_introspection_c__HighState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HighState__rosidl_typesupport_introspection_c__HighState_message_type_support_handle = {
  0,
  &HighState__rosidl_typesupport_introspection_c__HighState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_a1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, HighState)() {
  HighState__rosidl_typesupport_introspection_c__HighState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, IMU)();
  HighState__rosidl_typesupport_introspection_c__HighState_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, Cartesian)();
  HighState__rosidl_typesupport_introspection_c__HighState_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, Cartesian)();
  HighState__rosidl_typesupport_introspection_c__HighState_message_member_array[22].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, Cartesian)();
  if (!HighState__rosidl_typesupport_introspection_c__HighState_message_type_support_handle.typesupport_identifier) {
    HighState__rosidl_typesupport_introspection_c__HighState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HighState__rosidl_typesupport_introspection_c__HighState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
