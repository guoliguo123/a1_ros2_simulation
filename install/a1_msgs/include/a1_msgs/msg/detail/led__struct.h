// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from a1_msgs:msg/LED.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__LED__STRUCT_H_
#define A1_MSGS__MSG__DETAIL__LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/LED in the package a1_msgs.
typedef struct a1_msgs__msg__LED
{
  uint8_t r;
  uint8_t g;
  uint8_t b;
} a1_msgs__msg__LED;

// Struct for a sequence of a1_msgs__msg__LED.
typedef struct a1_msgs__msg__LED__Sequence
{
  a1_msgs__msg__LED * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} a1_msgs__msg__LED__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // A1_MSGS__MSG__DETAIL__LED__STRUCT_H_
