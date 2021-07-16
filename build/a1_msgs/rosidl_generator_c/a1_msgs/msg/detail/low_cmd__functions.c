// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from a1_msgs:msg/LowCmd.idl
// generated code does not contain a copyright notice
#include "a1_msgs/msg/detail/low_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `motorcmd`
#include "a1_msgs/msg/detail/motor_cmd__functions.h"
// Member `led`
#include "a1_msgs/msg/detail/led__functions.h"
// Member `ff`
#include "a1_msgs/msg/detail/cartesian__functions.h"

bool
a1_msgs__msg__LowCmd__init(a1_msgs__msg__LowCmd * msg)
{
  if (!msg) {
    return false;
  }
  // levelflag
  // commversion
  // robotid
  // sn
  // bandwidth
  // motorcmd
  for (size_t i = 0; i < 20; ++i) {
    if (!a1_msgs__msg__MotorCmd__init(&msg->motorcmd[i])) {
      a1_msgs__msg__LowCmd__fini(msg);
      return false;
    }
  }
  // led
  for (size_t i = 0; i < 4; ++i) {
    if (!a1_msgs__msg__LED__init(&msg->led[i])) {
      a1_msgs__msg__LowCmd__fini(msg);
      return false;
    }
  }
  // wirelessremote
  // reserve
  // crc
  // ff
  for (size_t i = 0; i < 4; ++i) {
    if (!a1_msgs__msg__Cartesian__init(&msg->ff[i])) {
      a1_msgs__msg__LowCmd__fini(msg);
      return false;
    }
  }
  return true;
}

void
a1_msgs__msg__LowCmd__fini(a1_msgs__msg__LowCmd * msg)
{
  if (!msg) {
    return;
  }
  // levelflag
  // commversion
  // robotid
  // sn
  // bandwidth
  // motorcmd
  for (size_t i = 0; i < 20; ++i) {
    a1_msgs__msg__MotorCmd__fini(&msg->motorcmd[i]);
  }
  // led
  for (size_t i = 0; i < 4; ++i) {
    a1_msgs__msg__LED__fini(&msg->led[i]);
  }
  // wirelessremote
  // reserve
  // crc
  // ff
  for (size_t i = 0; i < 4; ++i) {
    a1_msgs__msg__Cartesian__fini(&msg->ff[i]);
  }
}

a1_msgs__msg__LowCmd *
a1_msgs__msg__LowCmd__create()
{
  a1_msgs__msg__LowCmd * msg = (a1_msgs__msg__LowCmd *)malloc(sizeof(a1_msgs__msg__LowCmd));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(a1_msgs__msg__LowCmd));
  bool success = a1_msgs__msg__LowCmd__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
a1_msgs__msg__LowCmd__destroy(a1_msgs__msg__LowCmd * msg)
{
  if (msg) {
    a1_msgs__msg__LowCmd__fini(msg);
  }
  free(msg);
}


bool
a1_msgs__msg__LowCmd__Sequence__init(a1_msgs__msg__LowCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  a1_msgs__msg__LowCmd * data = NULL;
  if (size) {
    data = (a1_msgs__msg__LowCmd *)calloc(size, sizeof(a1_msgs__msg__LowCmd));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = a1_msgs__msg__LowCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        a1_msgs__msg__LowCmd__fini(&data[i - 1]);
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
a1_msgs__msg__LowCmd__Sequence__fini(a1_msgs__msg__LowCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      a1_msgs__msg__LowCmd__fini(&array->data[i]);
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

a1_msgs__msg__LowCmd__Sequence *
a1_msgs__msg__LowCmd__Sequence__create(size_t size)
{
  a1_msgs__msg__LowCmd__Sequence * array = (a1_msgs__msg__LowCmd__Sequence *)malloc(sizeof(a1_msgs__msg__LowCmd__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = a1_msgs__msg__LowCmd__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
a1_msgs__msg__LowCmd__Sequence__destroy(a1_msgs__msg__LowCmd__Sequence * array)
{
  if (array) {
    a1_msgs__msg__LowCmd__Sequence__fini(array);
  }
  free(array);
}
