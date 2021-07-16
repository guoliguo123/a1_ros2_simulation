// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from a1_msgs:msg/HighCmd.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__HIGH_CMD__STRUCT_H_
#define A1_MSGS__MSG__DETAIL__HIGH_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'led'
#include "a1_msgs/msg/detail/led__struct.h"

// Struct defined in msg/HighCmd in the package a1_msgs.
typedef struct a1_msgs__msg__HighCmd
{
  uint8_t levelflag;
  uint16_t commversion;
  uint16_t robotid;
  uint32_t sn;
  uint8_t bandwidth;
  uint8_t mode;
  float forwardspeed;
  float sidespeed;
  float rotatespeed;
  float bodyheight;
  float footraiseheight;
  float yaw;
  float pitch;
  float roll;
  a1_msgs__msg__LED led[4];
  uint8_t wirelessremote[40];
  uint8_t appremote[40];
  uint32_t reserve;
  int32_t crc;
} a1_msgs__msg__HighCmd;

// Struct for a sequence of a1_msgs__msg__HighCmd.
typedef struct a1_msgs__msg__HighCmd__Sequence
{
  a1_msgs__msg__HighCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} a1_msgs__msg__HighCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // A1_MSGS__MSG__DETAIL__HIGH_CMD__STRUCT_H_
