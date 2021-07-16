// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from a1_msgs:srv/Imu.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__SRV__DETAIL__IMU__STRUCT_H_
#define A1_MSGS__SRV__DETAIL__IMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Imu in the package a1_msgs.
typedef struct a1_msgs__srv__Imu_Request
{
  uint8_t structure_needs_at_least_one_member;
} a1_msgs__srv__Imu_Request;

// Struct for a sequence of a1_msgs__srv__Imu_Request.
typedef struct a1_msgs__srv__Imu_Request__Sequence
{
  a1_msgs__srv__Imu_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} a1_msgs__srv__Imu_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Imu in the package a1_msgs.
typedef struct a1_msgs__srv__Imu_Response
{
  float quaternion[4];
  float gyroscope[3];
  float accelerometer[3];
  int8_t temperature;
} a1_msgs__srv__Imu_Response;

// Struct for a sequence of a1_msgs__srv__Imu_Response.
typedef struct a1_msgs__srv__Imu_Response__Sequence
{
  a1_msgs__srv__Imu_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} a1_msgs__srv__Imu_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // A1_MSGS__SRV__DETAIL__IMU__STRUCT_H_
