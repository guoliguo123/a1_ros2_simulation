// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from a1_msgs:srv/Mode.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__SRV__DETAIL__MODE__STRUCT_H_
#define A1_MSGS__SRV__DETAIL__MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Mode in the package a1_msgs.
typedef struct a1_msgs__srv__Mode_Request
{
  uint8_t mode;
} a1_msgs__srv__Mode_Request;

// Struct for a sequence of a1_msgs__srv__Mode_Request.
typedef struct a1_msgs__srv__Mode_Request__Sequence
{
  a1_msgs__srv__Mode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} a1_msgs__srv__Mode_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Mode in the package a1_msgs.
typedef struct a1_msgs__srv__Mode_Response
{
  bool value;
} a1_msgs__srv__Mode_Response;

// Struct for a sequence of a1_msgs__srv__Mode_Response.
typedef struct a1_msgs__srv__Mode_Response__Sequence
{
  a1_msgs__srv__Mode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} a1_msgs__srv__Mode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // A1_MSGS__SRV__DETAIL__MODE__STRUCT_H_
