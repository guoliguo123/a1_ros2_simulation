// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from a1_msgs:msg/Cartesian.idl
// generated code does not contain a copyright notice
#include "a1_msgs/msg/detail/cartesian__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
a1_msgs__msg__Cartesian__init(a1_msgs__msg__Cartesian * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
a1_msgs__msg__Cartesian__fini(a1_msgs__msg__Cartesian * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

a1_msgs__msg__Cartesian *
a1_msgs__msg__Cartesian__create()
{
  a1_msgs__msg__Cartesian * msg = (a1_msgs__msg__Cartesian *)malloc(sizeof(a1_msgs__msg__Cartesian));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(a1_msgs__msg__Cartesian));
  bool success = a1_msgs__msg__Cartesian__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
a1_msgs__msg__Cartesian__destroy(a1_msgs__msg__Cartesian * msg)
{
  if (msg) {
    a1_msgs__msg__Cartesian__fini(msg);
  }
  free(msg);
}


bool
a1_msgs__msg__Cartesian__Sequence__init(a1_msgs__msg__Cartesian__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  a1_msgs__msg__Cartesian * data = NULL;
  if (size) {
    data = (a1_msgs__msg__Cartesian *)calloc(size, sizeof(a1_msgs__msg__Cartesian));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = a1_msgs__msg__Cartesian__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        a1_msgs__msg__Cartesian__fini(&data[i - 1]);
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
a1_msgs__msg__Cartesian__Sequence__fini(a1_msgs__msg__Cartesian__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      a1_msgs__msg__Cartesian__fini(&array->data[i]);
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

a1_msgs__msg__Cartesian__Sequence *
a1_msgs__msg__Cartesian__Sequence__create(size_t size)
{
  a1_msgs__msg__Cartesian__Sequence * array = (a1_msgs__msg__Cartesian__Sequence *)malloc(sizeof(a1_msgs__msg__Cartesian__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = a1_msgs__msg__Cartesian__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
a1_msgs__msg__Cartesian__Sequence__destroy(a1_msgs__msg__Cartesian__Sequence * array)
{
  if (array) {
    a1_msgs__msg__Cartesian__Sequence__fini(array);
  }
  free(array);
}
