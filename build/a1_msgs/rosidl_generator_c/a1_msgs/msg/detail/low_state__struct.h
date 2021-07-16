// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from a1_msgs:msg/LowState.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__LOW_STATE__STRUCT_H_
#define A1_MSGS__MSG__DETAIL__LOW_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'imu'
#include "a1_msgs/msg/detail/imu__struct.h"
// Member 'motorstate'
#include "a1_msgs/msg/detail/motor_state__struct.h"
// Member 'eeforceraw'
// Member 'eeforce'
// Member 'position'
// Member 'velocity'
// Member 'velocity_w'
#include "a1_msgs/msg/detail/cartesian__struct.h"

// Struct defined in msg/LowState in the package a1_msgs.
typedef struct a1_msgs__msg__LowState
{
  uint8_t levelflag;
  uint16_t commversion;
  uint16_t robotid;
  uint32_t sn;
  uint8_t bandwidth;
  a1_msgs__msg__IMU imu;
  a1_msgs__msg__MotorState motorstate[20];
  int16_t footforce[4];
  int16_t footforceest[4];
  uint32_t tick;
  uint8_t wirelessremote[40];
  uint32_t reserve;
  uint32_t crc;
  a1_msgs__msg__Cartesian eeforceraw[4];
  a1_msgs__msg__Cartesian eeforce[4];
  a1_msgs__msg__Cartesian position;
  a1_msgs__msg__Cartesian velocity;
  a1_msgs__msg__Cartesian velocity_w;
} a1_msgs__msg__LowState;

// Struct for a sequence of a1_msgs__msg__LowState.
typedef struct a1_msgs__msg__LowState__Sequence
{
  a1_msgs__msg__LowState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} a1_msgs__msg__LowState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // A1_MSGS__MSG__DETAIL__LOW_STATE__STRUCT_H_
