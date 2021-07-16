// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from a1_msgs:srv/Mode.idl
// generated code does not contain a copyright notice
#include "a1_msgs/srv/detail/mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
a1_msgs__srv__Mode_Request__init(a1_msgs__srv__Mode_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  return true;
}

void
a1_msgs__srv__Mode_Request__fini(a1_msgs__srv__Mode_Request * msg)
{
  if (!msg) {
    return;
  }
  // mode
}

a1_msgs__srv__Mode_Request *
a1_msgs__srv__Mode_Request__create()
{
  a1_msgs__srv__Mode_Request * msg = (a1_msgs__srv__Mode_Request *)malloc(sizeof(a1_msgs__srv__Mode_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(a1_msgs__srv__Mode_Request));
  bool success = a1_msgs__srv__Mode_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
a1_msgs__srv__Mode_Request__destroy(a1_msgs__srv__Mode_Request * msg)
{
  if (msg) {
    a1_msgs__srv__Mode_Request__fini(msg);
  }
  free(msg);
}


bool
a1_msgs__srv__Mode_Request__Sequence__init(a1_msgs__srv__Mode_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  a1_msgs__srv__Mode_Request * data = NULL;
  if (size) {
    data = (a1_msgs__srv__Mode_Request *)calloc(size, sizeof(a1_msgs__srv__Mode_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = a1_msgs__srv__Mode_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        a1_msgs__srv__Mode_Request__fini(&data[i - 1]);
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
a1_msgs__srv__Mode_Request__Sequence__fini(a1_msgs__srv__Mode_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      a1_msgs__srv__Mode_Request__fini(&array->data[i]);
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

a1_msgs__srv__Mode_Request__Sequence *
a1_msgs__srv__Mode_Request__Sequence__create(size_t size)
{
  a1_msgs__srv__Mode_Request__Sequence * array = (a1_msgs__srv__Mode_Request__Sequence *)malloc(sizeof(a1_msgs__srv__Mode_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = a1_msgs__srv__Mode_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
a1_msgs__srv__Mode_Request__Sequence__destroy(a1_msgs__srv__Mode_Request__Sequence * array)
{
  if (array) {
    a1_msgs__srv__Mode_Request__Sequence__fini(array);
  }
  free(array);
}


bool
a1_msgs__srv__Mode_Response__init(a1_msgs__srv__Mode_Response * msg)
{
  if (!msg) {
    return false;
  }
  // value
  return true;
}

void
a1_msgs__srv__Mode_Response__fini(a1_msgs__srv__Mode_Response * msg)
{
  if (!msg) {
    return;
  }
  // value
}

a1_msgs__srv__Mode_Response *
a1_msgs__srv__Mode_Response__create()
{
  a1_msgs__srv__Mode_Response * msg = (a1_msgs__srv__Mode_Response *)malloc(sizeof(a1_msgs__srv__Mode_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(a1_msgs__srv__Mode_Response));
  bool success = a1_msgs__srv__Mode_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
a1_msgs__srv__Mode_Response__destroy(a1_msgs__srv__Mode_Response * msg)
{
  if (msg) {
    a1_msgs__srv__Mode_Response__fini(msg);
  }
  free(msg);
}


bool
a1_msgs__srv__Mode_Response__Sequence__init(a1_msgs__srv__Mode_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  a1_msgs__srv__Mode_Response * data = NULL;
  if (size) {
    data = (a1_msgs__srv__Mode_Response *)calloc(size, sizeof(a1_msgs__srv__Mode_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = a1_msgs__srv__Mode_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        a1_msgs__srv__Mode_Response__fini(&data[i - 1]);
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
a1_msgs__srv__Mode_Response__Sequence__fini(a1_msgs__srv__Mode_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      a1_msgs__srv__Mode_Response__fini(&array->data[i]);
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

a1_msgs__srv__Mode_Response__Sequence *
a1_msgs__srv__Mode_Response__Sequence__create(size_t size)
{
  a1_msgs__srv__Mode_Response__Sequence * array = (a1_msgs__srv__Mode_Response__Sequence *)malloc(sizeof(a1_msgs__srv__Mode_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = a1_msgs__srv__Mode_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
a1_msgs__srv__Mode_Response__Sequence__destroy(a1_msgs__srv__Mode_Response__Sequence * array)
{
  if (array) {
    a1_msgs__srv__Mode_Response__Sequence__fini(array);
  }
  free(array);
}
