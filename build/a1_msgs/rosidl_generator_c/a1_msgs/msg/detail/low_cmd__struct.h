// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from a1_msgs:msg/LowCmd.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__LOW_CMD__STRUCT_H_
#define A1_MSGS__MSG__DETAIL__LOW_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motorcmd'
#include "a1_msgs/msg/detail/motor_cmd__struct.h"
// Member 'led'
#include "a1_msgs/msg/detail/led__struct.h"
// Member 'ff'
#include "a1_msgs/msg/detail/cartesian__struct.h"

// Struct defined in msg/LowCmd in the package a1_msgs.
typedef struct a1_msgs__msg__LowCmd
{
  uint8_t levelflag;
  uint16_t commversion;
  uint16_t robotid;
  uint32_t sn;
  uint8_t bandwidth;
  a1_msgs__msg__MotorCmd motorcmd[20];
  a1_msgs__msg__LED led[4];
  uint8_t wirelessremote[40];
  uint32_t reserve;
  uint32_t crc;
  a1_msgs__msg__Cartesian ff[4];
} a1_msgs__msg__LowCmd;

// Struct for a sequence of a1_msgs__msg__LowCmd.
typedef struct a1_msgs__msg__LowCmd__Sequence
{
  a1_msgs__msg__LowCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} a1_msgs__msg__LowCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // A1_MSGS__MSG__DETAIL__LOW_CMD__STRUCT_H_
