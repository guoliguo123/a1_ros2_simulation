// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from a1_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "a1_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
#include "a1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "a1_msgs/msg/detail/pose__functions.h"
#include "a1_msgs/msg/detail/pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Pose__rosidl_typesupport_introspection_c__Pose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  a1_msgs__msg__Pose__init(message_memory);
}

void Pose__rosidl_typesupport_introspection_c__Pose_fini_function(void * message_memory)
{
  a1_msgs__msg__Pose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pose__rosidl_typesupport_introspection_c__Pose_message_member_array[4] = {
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__Pose, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__Pose, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__msg__Pose, roll),  // bytes offset in struct
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
    offsetof(a1_msgs__msg__Pose, bodyheight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pose__rosidl_typesupport_introspection_c__Pose_message_members = {
  "a1_msgs__msg",  // message namespace
  "Pose",  // message name
  4,  // number of fields
  sizeof(a1_msgs__msg__Pose),
  Pose__rosidl_typesupport_introspection_c__Pose_message_member_array,  // message members
  Pose__rosidl_typesupport_introspection_c__Pose_init_function,  // function to initialize message memory (memory has to be allocated)
  Pose__rosidl_typesupport_introspection_c__Pose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pose__rosidl_typesupport_introspection_c__Pose_message_type_support_handle = {
  0,
  &Pose__rosidl_typesupport_introspection_c__Pose_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_a1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, Pose)() {
  if (!Pose__rosidl_typesupport_introspection_c__Pose_message_type_support_handle.typesupport_identifier) {
    Pose__rosidl_typesupport_introspection_c__Pose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pose__rosidl_typesupport_introspection_c__Pose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
