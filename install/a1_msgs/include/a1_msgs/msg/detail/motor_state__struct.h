// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from a1_msgs:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
#define A1_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotorState in the package a1_msgs.
typedef struct a1_msgs__msg__MotorState
{
  uint8_t mode;
  float q;
  float dq;
  float ddq;
  float tau_est;
  float q_raw;
  float dq_raw;
  float ddq_raw;
  int8_t temperature;
  uint32_t reserve[2];
} a1_msgs__msg__MotorState;

// Struct for a sequence of a1_msgs__msg__MotorState.
typedef struct a1_msgs__msg__MotorState__Sequence
{
  a1_msgs__msg__MotorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} a1_msgs__msg__MotorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // A1_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
