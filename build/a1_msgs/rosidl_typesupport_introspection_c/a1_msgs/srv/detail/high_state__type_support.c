// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from a1_msgs:srv/HighState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "a1_msgs/srv/detail/high_state__rosidl_typesupport_introspection_c.h"
#include "a1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "a1_msgs/srv/detail/high_state__functions.h"
#include "a1_msgs/srv/detail/high_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void HighState_Request__rosidl_typesupport_introspection_c__HighState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  a1_msgs__srv__HighState_Request__init(message_memory);
}

void HighState_Request__rosidl_typesupport_introspection_c__HighState_Request_fini_function(void * message_memory)
{
  a1_msgs__srv__HighState_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember HighState_Request__rosidl_typesupport_introspection_c__HighState_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__HighState_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HighState_Request__rosidl_typesupport_introspection_c__HighState_Request_message_members = {
  "a1_msgs__srv",  // message namespace
  "HighState_Request",  // message name
  1,  // number of fields
  sizeof(a1_msgs__srv__HighState_Request),
  HighState_Request__rosidl_typesupport_introspection_c__HighState_Request_message_member_array,  // message members
  HighState_Request__rosidl_typesupport_introspection_c__HighState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  HighState_Request__rosidl_typesupport_introspection_c__HighState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HighState_Request__rosidl_typesupport_introspection_c__HighState_Request_message_type_support_handle = {
  0,
  &HighState_Request__rosidl_typesupport_introspection_c__HighState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_a1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, HighState_Request)() {
  if (!HighState_Request__rosidl_typesupport_introspection_c__HighState_Request_message_type_support_handle.typesupport_identifier) {
    HighState_Request__rosidl_typesupport_introspection_c__HighState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HighState_Request__rosidl_typesupport_introspection_c__HighState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "a1_msgs/srv/detail/high_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "a1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "a1_msgs/srv/detail/high_state__functions.h"
// already included above
// #include "a1_msgs/srv/detail/high_state__struct.h"


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

void HighState_Response__rosidl_typesupport_introspection_c__HighState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  a1_msgs__srv__HighState_Response__init(message_memory);
}

void HighState_Response__rosidl_typesupport_introspection_c__HighState_Response_fini_function(void * message_memory)
{
  a1_msgs__srv__HighState_Response__fini(message_memory);
}

size_t HighState_Response__rosidl_typesupport_introspection_c__size_function__Cartesian__footposition2body(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * HighState_Response__rosidl_typesupport_introspection_c__get_const_function__Cartesian__footposition2body(
  const void * untyped_member, size_t index)
{
  const a1_msgs__msg__Cartesian ** member =
    (const a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

void * HighState_Response__rosidl_typesupport_introspection_c__get_function__Cartesian__footposition2body(
  void * untyped_member, size_t index)
{
  a1_msgs__msg__Cartesian ** member =
    (a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

size_t HighState_Response__rosidl_typesupport_introspection_c__size_function__Cartesian__footspeed2body(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * HighState_Response__rosidl_typesupport_introspection_c__get_const_function__Cartesian__footspeed2body(
  const void * untyped_member, size_t index)
{
  const a1_msgs__msg__Cartesian ** member =
    (const a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

void * HighState_Response__rosidl_typesupport_introspection_c__get_function__Cartesian__footspeed2body(
  void * untyped_member, size_t index)
{
  a1_msgs__msg__Cartesian ** member =
    (a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

size_t HighState_Response__rosidl_typesupport_introspection_c__size_function__Cartesian__eeforce(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * HighState_Response__rosidl_typesupport_introspection_c__get_const_function__Cartesian__eeforce(
  const void * untyped_member, size_t index)
{
  const a1_msgs__msg__Cartesian ** member =
    (const a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

void * HighState_Response__rosidl_typesupport_introspection_c__get_function__Cartesian__eeforce(
  void * untyped_member, size_t index)
{
  a1_msgs__msg__Cartesian ** member =
    (a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember HighState_Response__rosidl_typesupport_introspection_c__HighState_Response_message_member_array[24] = {
  {
    "levelflag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__HighState_Response, levelflag),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, commversion),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, robotid),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, sn),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, bandwidth),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, mode),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, imu),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, forwardspeed),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, sidespeed),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, rotatespeed),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, bodyheight),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, updownspeed),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, forwardposition),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, sideposition),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, footposition2body),  // bytes offset in struct
    NULL,  // default value
    HighState_Response__rosidl_typesupport_introspection_c__size_function__Cartesian__footposition2body,  // size() function pointer
    HighState_Response__rosidl_typesupport_introspection_c__get_const_function__Cartesian__footposition2body,  // get_const(index) function pointer
    HighState_Response__rosidl_typesupport_introspection_c__get_function__Cartesian__footposition2body,  // get(index) function pointer
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
    offsetof(a1_msgs__srv__HighState_Response, footspeed2body),  // bytes offset in struct
    NULL,  // default value
    HighState_Response__rosidl_typesupport_introspection_c__size_function__Cartesian__footspeed2body,  // size() function pointer
    HighState_Response__rosidl_typesupport_introspection_c__get_const_function__Cartesian__footspeed2body,  // get_const(index) function pointer
    HighState_Response__rosidl_typesupport_introspection_c__get_function__Cartesian__footspeed2body,  // get(index) function pointer
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
    offsetof(a1_msgs__srv__HighState_Response, footforce),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, footforceest),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, tick),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, wirelessremote),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, reserve),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, crc),  // bytes offset in struct
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
    offsetof(a1_msgs__srv__HighState_Response, eeforce),  // bytes offset in struct
    NULL,  // default value
    HighState_Response__rosidl_typesupport_introspection_c__size_function__Cartesian__eeforce,  // size() function pointer
    HighState_Response__rosidl_typesupport_introspection_c__get_const_function__Cartesian__eeforce,  // get_const(index) function pointer
    HighState_Response__rosidl_typesupport_introspection_c__get_function__Cartesian__eeforce,  // get(index) function pointer
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
    offsetof(a1_msgs__srv__HighState_Response, jointp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HighState_Response__rosidl_typesupport_introspection_c__HighState_Response_message_members = {
  "a1_msgs__srv",  // message namespace
  "HighState_Response",  // message name
  24,  // number of fields
  sizeof(a1_msgs__srv__HighState_Response),
  HighState_Response__rosidl_typesupport_introspection_c__HighState_Response_message_member_array,  // message members
  HighState_Response__rosidl_typesupport_introspection_c__HighState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  HighState_Response__rosidl_typesupport_introspection_c__HighState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HighState_Response__rosidl_typesupport_introspection_c__HighState_Response_message_type_support_handle = {
  0,
  &HighState_Response__rosidl_typesupport_introspection_c__HighState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_a1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, HighState_Response)() {
  HighState_Response__rosidl_typesupport_introspection_c__HighState_Response_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, IMU)();
  HighState_Response__rosidl_typesupport_introspection_c__HighState_Response_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, Cartesian)();
  HighState_Response__rosidl_typesupport_introspection_c__HighState_Response_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, Cartesian)();
  HighState_Response__rosidl_typesupport_introspection_c__HighState_Response_message_member_array[22].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, Cartesian)();
  if (!HighState_Response__rosidl_typesupport_introspection_c__HighState_Response_message_type_support_handle.typesupport_identifier) {
    HighState_Response__rosidl_typesupport_introspection_c__HighState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HighState_Response__rosidl_typesupport_introspection_c__HighState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "a1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "a1_msgs/srv/detail/high_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers a1_msgs__srv__detail__high_state__rosidl_typesupport_introspection_c__HighState_service_members = {
  "a1_msgs__srv",  // service namespace
  "HighState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // a1_msgs__srv__detail__high_state__rosidl_typesupport_introspection_c__HighState_Request_message_type_support_handle,
  NULL  // response message
  // a1_msgs__srv__detail__high_state__rosidl_typesupport_introspection_c__HighState_Response_message_type_support_handle
};

static rosidl_service_type_support_t a1_msgs__srv__detail__high_state__rosidl_typesupport_introspection_c__HighState_service_type_support_handle = {
  0,
  &a1_msgs__srv__detail__high_state__rosidl_typesupport_introspection_c__HighState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, HighState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, HighState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_a1_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, HighState)() {
  if (!a1_msgs__srv__detail__high_state__rosidl_typesupport_introspection_c__HighState_service_type_support_handle.typesupport_identifier) {
    a1_msgs__srv__detail__high_state__rosidl_typesupport_introspection_c__HighState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)a1_msgs__srv__detail__high_state__rosidl_typesupport_introspection_c__HighState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, HighState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, HighState_Response)()->data;
  }

  return &a1_msgs__srv__detail__high_state__rosidl_typesupport_introspection_c__HighState_service_type_support_handle;
}
