// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from a1_msgs:srv/HighState.idl
// generated code does not contain a copyright notice
#include "a1_msgs/srv/detail/high_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
a1_msgs__srv__HighState_Request__init(a1_msgs__srv__HighState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
a1_msgs__srv__HighState_Request__fini(a1_msgs__srv__HighState_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

a1_msgs__srv__HighState_Request *
a1_msgs__srv__HighState_Request__create()
{
  a1_msgs__srv__HighState_Request * msg = (a1_msgs__srv__HighState_Request *)malloc(sizeof(a1_msgs__srv__HighState_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(a1_msgs__srv__HighState_Request));
  bool success = a1_msgs__srv__HighState_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
a1_msgs__srv__HighState_Request__destroy(a1_msgs__srv__HighState_Request * msg)
{
  if (msg) {
    a1_msgs__srv__HighState_Request__fini(msg);
  }
  free(msg);
}


bool
a1_msgs__srv__HighState_Request__Sequence__init(a1_msgs__srv__HighState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  a1_msgs__srv__HighState_Request * data = NULL;
  if (size) {
    data = (a1_msgs__srv__HighState_Request *)calloc(size, sizeof(a1_msgs__srv__HighState_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = a1_msgs__srv__HighState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        a1_msgs__srv__HighState_Request__fini(&data[i - 1]);
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
a1_msgs__srv__HighState_Request__Sequence__fini(a1_msgs__srv__HighState_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      a1_msgs__srv__HighState_Request__fini(&array->data[i]);
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

a1_msgs__srv__HighState_Request__Sequence *
a1_msgs__srv__HighState_Request__Sequence__create(size_t size)
{
  a1_msgs__srv__HighState_Request__Sequence * array = (a1_msgs__srv__HighState_Request__Sequence *)malloc(sizeof(a1_msgs__srv__HighState_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = a1_msgs__srv__HighState_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
a1_msgs__srv__HighState_Request__Sequence__destroy(a1_msgs__srv__HighState_Request__Sequence * array)
{
  if (array) {
    a1_msgs__srv__HighState_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `imu`
#include "a1_msgs/msg/detail/imu__functions.h"
// Member `footposition2body`
// Member `footspeed2body`
// Member `eeforce`
#include "a1_msgs/msg/detail/cartesian__functions.h"

bool
a1_msgs__srv__HighState_Response__init(a1_msgs__srv__HighState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // levelflag
  // commversion
  // robotid
  // sn
  // bandwidth
  // mode
  // imu
  if (!a1_msgs__msg__IMU__init(&msg->imu)) {
    a1_msgs__srv__HighState_Response__fini(msg);
    return false;
  }
  // forwardspeed
  // sidespeed
  // rotatespeed
  // bodyheight
  // updownspeed
  // forwardposition
  // sideposition
  // footposition2body
  for (size_t i = 0; i < 4; ++i) {
    if (!a1_msgs__msg__Cartesian__init(&msg->footposition2body[i])) {
      a1_msgs__srv__HighState_Response__fini(msg);
      return false;
    }
  }
  // footspeed2body
  for (size_t i = 0; i < 4; ++i) {
    if (!a1_msgs__msg__Cartesian__init(&msg->footspeed2body[i])) {
      a1_msgs__srv__HighState_Response__fini(msg);
      return false;
    }
  }
  // footforce
  // footforceest
  // tick
  // wirelessremote
  // reserve
  // crc
  // eeforce
  for (size_t i = 0; i < 4; ++i) {
    if (!a1_msgs__msg__Cartesian__init(&msg->eeforce[i])) {
      a1_msgs__srv__HighState_Response__fini(msg);
      return false;
    }
  }
  // jointp
  return true;
}

void
a1_msgs__srv__HighState_Response__fini(a1_msgs__srv__HighState_Response * msg)
{
  if (!msg) {
    return;
  }
  // levelflag
  // commversion
  // robotid
  // sn
  // bandwidth
  // mode
  // imu
  a1_msgs__msg__IMU__fini(&msg->imu);
  // forwardspeed
  // sidespeed
  // rotatespeed
  // bodyheight
  // updownspeed
  // forwardposition
  // sideposition
  // footposition2body
  for (size_t i = 0; i < 4; ++i) {
    a1_msgs__msg__Cartesian__fini(&msg->footposition2body[i]);
  }
  // footspeed2body
  for (size_t i = 0; i < 4; ++i) {
    a1_msgs__msg__Cartesian__fini(&msg->footspeed2body[i]);
  }
  // footforce
  // footforceest
  // tick
  // wirelessremote
  // reserve
  // crc
  // eeforce
  for (size_t i = 0; i < 4; ++i) {
    a1_msgs__msg__Cartesian__fini(&msg->eeforce[i]);
  }
  // jointp
}

a1_msgs__srv__HighState_Response *
a1_msgs__srv__HighState_Response__create()
{
  a1_msgs__srv__HighState_Response * msg = (a1_msgs__srv__HighState_Response *)malloc(sizeof(a1_msgs__srv__HighState_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(a1_msgs__srv__HighState_Response));
  bool success = a1_msgs__srv__HighState_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
a1_msgs__srv__HighState_Response__destroy(a1_msgs__srv__HighState_Response * msg)
{
  if (msg) {
    a1_msgs__srv__HighState_Response__fini(msg);
  }
  free(msg);
}


bool
a1_msgs__srv__HighState_Response__Sequence__init(a1_msgs__srv__HighState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  a1_msgs__srv__HighState_Response * data = NULL;
  if (size) {
    data = (a1_msgs__srv__HighState_Response *)calloc(size, sizeof(a1_msgs__srv__HighState_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = a1_msgs__srv__HighState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        a1_msgs__srv__HighState_Response__fini(&data[i - 1]);
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
a1_msgs__srv__HighState_Response__Sequence__fini(a1_msgs__srv__HighState_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      a1_msgs__srv__HighState_Response__fini(&array->data[i]);
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

a1_msgs__srv__HighState_Response__Sequence *
a1_msgs__srv__HighState_Response__Sequence__create(size_t size)
{
  a1_msgs__srv__HighState_Response__Sequence * array = (a1_msgs__srv__HighState_Response__Sequence *)malloc(sizeof(a1_msgs__srv__HighState_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = a1_msgs__srv__HighState_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
a1_msgs__srv__HighState_Response__Sequence__destroy(a1_msgs__srv__HighState_Response__Sequence * array)
{
  if (array) {
    a1_msgs__srv__HighState_Response__Sequence__fini(array);
  }
  free(array);
}
