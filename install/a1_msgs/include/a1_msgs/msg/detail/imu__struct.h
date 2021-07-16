// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from a1_msgs:msg/IMU.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__IMU__STRUCT_H_
#define A1_MSGS__MSG__DETAIL__IMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/IMU in the package a1_msgs.
typedef struct a1_msgs__msg__IMU
{
  float quaternion[4];
  float gyroscope[3];
  float accelerometer[3];
  int8_t temperature;
} a1_msgs__msg__IMU;

// Struct for a sequence of a1_msgs__msg__IMU.
typedef struct a1_msgs__msg__IMU__Sequence
{
  a1_msgs__msg__IMU * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} a1_msgs__msg__IMU__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // A1_MSGS__MSG__DETAIL__IMU__STRUCT_H_
