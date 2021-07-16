// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from a1_msgs:msg/LowState.idl
// generated code does not contain a copyright notice
#include "a1_msgs/msg/detail/low_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `imu`
#include "a1_msgs/msg/detail/imu__functions.h"
// Member `motorstate`
#include "a1_msgs/msg/detail/motor_state__functions.h"
// Member `eeforceraw`
// Member `eeforce`
// Member `position`
// Member `velocity`
// Member `velocity_w`
#include "a1_msgs/msg/detail/cartesian__functions.h"

bool
a1_msgs__msg__LowState__init(a1_msgs__msg__LowState * msg)
{
  if (!msg) {
    return false;
  }
  // levelflag
  // commversion
  // robotid
  // sn
  // bandwidth
  // imu
  if (!a1_msgs__msg__IMU__init(&msg->imu)) {
    a1_msgs__msg__LowState__fini(msg);
    return false;
  }
  // motorstate
  for (size_t i = 0; i < 20; ++i) {
    if (!a1_msgs__msg__MotorState__init(&msg->motorstate[i])) {
      a1_msgs__msg__LowState__fini(msg);
      return false;
    }
  }
  // footforce
  // footforceest
  // tick
  // wirelessremote
  // reserve
  // crc
  // eeforceraw
  for (size_t i = 0; i < 4; ++i) {
    if (!a1_msgs__msg__Cartesian__init(&msg->eeforceraw[i])) {
      a1_msgs__msg__LowState__fini(msg);
      return false;
    }
  }
  // eeforce
  for (size_t i = 0; i < 4; ++i) {
    if (!a1_msgs__msg__Cartesian__init(&msg->eeforce[i])) {
      a1_msgs__msg__LowState__fini(msg);
      return false;
    }
  }
  // position
  if (!a1_msgs__msg__Cartesian__init(&msg->position)) {
    a1_msgs__msg__LowState__fini(msg);
    return false;
  }
  // velocity
  if (!a1_msgs__msg__Cartesian__init(&msg->velocity)) {
    a1_msgs__msg__LowState__fini(msg);
    return false;
  }
  // velocity_w
  if (!a1_msgs__msg__Cartesian__init(&msg->velocity_w)) {
    a1_msgs__msg__LowState__fini(msg);
    return false;
  }
  return true;
}

void
a1_msgs__msg__LowState__fini(a1_msgs__msg__LowState * msg)
{
  if (!msg) {
    return;
  }
  // levelflag
  // commversion
  // robotid
  // sn
  // bandwidth
  // imu
  a1_msgs__msg__IMU__fini(&msg->imu);
  // motorstate
  for (size_t i = 0; i < 20; ++i) {
    a1_msgs__msg__MotorState__fini(&msg->motorstate[i]);
  }
  // footforce
  // footforceest
  // tick
  // wirelessremote
  // reserve
  // crc
  // eeforceraw
  for (size_t i = 0; i < 4; ++i) {
    a1_msgs__msg__Cartesian__fini(&msg->eeforceraw[i]);
  }
  // eeforce
  for (size_t i = 0; i < 4; ++i) {
    a1_msgs__msg__Cartesian__fini(&msg->eeforce[i]);
  }
  // position
  a1_msgs__msg__Cartesian__fini(&msg->position);
  // velocity
  a1_msgs__msg__Cartesian__fini(&msg->velocity);
  // velocity_w
  a1_msgs__msg__Cartesian__fini(&msg->velocity_w);
}

a1_msgs__msg__LowState *
a1_msgs__msg__LowState__create()
{
  a1_msgs__msg__LowState * msg = (a1_msgs__msg__LowState *)malloc(sizeof(a1_msgs__msg__LowState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(a1_msgs__msg__LowState));
  bool success = a1_msgs__msg__LowState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
a1_msgs__msg__LowState__destroy(a1_msgs__msg__LowState * msg)
{
  if (msg) {
    a1_msgs__msg__LowState__fini(msg);
  }
  free(msg);
}


bool
a1_msgs__msg__LowState__Sequence__init(a1_msgs__msg__LowState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  a1_msgs__msg__LowState * data = NULL;
  if (size) {
    data = (a1_msgs__msg__LowState *)calloc(size, sizeof(a1_msgs__msg__LowState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = a1_msgs__msg__LowState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        a1_msgs__msg__LowState__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
a1_msgs__msg__LowState__Sequence__fini(a1_msgs__msg__LowState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      a1_msgs__msg__LowState__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

a1_msgs__msg__LowState__Sequence *
a1_msgs__msg__LowState__Sequence__create(size_t size)
{
  a1_msgs__msg__LowState__Sequence * array = (a1_msgs__msg__LowState__Sequence *)malloc(sizeof(a1_msgs__msg__LowState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = a1_msgs__msg__LowState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
a1_msgs__msg__LowState__Sequence__destroy(a1_msgs__msg__LowState__Sequence * array)
{
  if (array) {
    a1_msgs__msg__LowState__Sequence__fini(array);
  }
  free(array);
}
