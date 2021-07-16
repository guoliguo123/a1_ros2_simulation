// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from a1_msgs:srv/LowState.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__SRV__DETAIL__LOW_STATE__STRUCT_H_
#define A1_MSGS__SRV__DETAIL__LOW_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/LowState in the package a1_msgs.
typedef struct a1_msgs__srv__LowState_Request
{
  uint8_t structure_needs_at_least_one_member;
} a1_msgs__srv__LowState_Request;

// Struct for a sequence of a1_msgs__srv__LowState_Request.
typedef struct a1_msgs__srv__LowState_Request__Sequence
{
  a1_msgs__srv__LowState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} a1_msgs__srv__LowState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'imu'
#include "a1_msgs/msg/detail/imu__struct.h"
// Member 'motorstate'
#include "a1_msgs/msg/detail/motor_state__struct.h"

// Struct defined in srv/LowState in the package a1_msgs.
typedef struct a1_msgs__srv__LowState_Response
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
} a1_msgs__srv__LowState_Response;

// Struct for a sequence of a1_msgs__srv__LowState_Response.
typedef struct a1_msgs__srv__LowState_Response__Sequence
{
  a1_msgs__srv__LowState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} a1_msgs__srv__LowState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // A1_MSGS__SRV__DETAIL__LOW_STATE__STRUCT_H_
