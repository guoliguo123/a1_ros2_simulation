// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from a1_msgs:srv/Cartesian.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__SRV__DETAIL__CARTESIAN__STRUCT_H_
#define A1_MSGS__SRV__DETAIL__CARTESIAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Cartesian in the package a1_msgs.
typedef struct a1_msgs__srv__Cartesian_Request
{
  uint8_t structure_needs_at_least_one_member;
} a1_msgs__srv__Cartesian_Request;

// Struct for a sequence of a1_msgs__srv__Cartesian_Request.
typedef struct a1_msgs__srv__Cartesian_Request__Sequence
{
  a1_msgs__srv__Cartesian_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} a1_msgs__srv__Cartesian_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'footposition2body'
// Member 'footspeed2body'
#include "a1_msgs/msg/detail/cartesian__struct.h"

// Struct defined in srv/Cartesian in the package a1_msgs.
typedef struct a1_msgs__srv__Cartesian_Response
{
  a1_msgs__msg__Cartesian footposition2body[4];
  a1_msgs__msg__Cartesian footspeed2body[4];
} a1_msgs__srv__Cartesian_Response;

// Struct for a sequence of a1_msgs__srv__Cartesian_Response.
typedef struct a1_msgs__srv__Cartesian_Response__Sequence
{
  a1_msgs__srv__Cartesian_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} a1_msgs__srv__Cartesian_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // A1_MSGS__SRV__DETAIL__CARTESIAN__STRUCT_H_
