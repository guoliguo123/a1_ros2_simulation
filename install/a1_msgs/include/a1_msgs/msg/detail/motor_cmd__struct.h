// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from a1_msgs:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__MOTOR_CMD__STRUCT_H_
#define A1_MSGS__MSG__DETAIL__MOTOR_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotorCmd in the package a1_msgs.
typedef struct a1_msgs__msg__MotorCmd
{
  uint8_t mode;
  float q;
  float dq;
  float tau;
  float kp;
  float kd;
  uint32_t reserve[3];
} a1_msgs__msg__MotorCmd;

// Struct for a sequence of a1_msgs__msg__MotorCmd.
typedef struct a1_msgs__msg__MotorCmd__Sequence
{
  a1_msgs__msg__MotorCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} a1_msgs__msg__MotorCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // A1_MSGS__MSG__DETAIL__MOTOR_CMD__STRUCT_H_
