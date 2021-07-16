// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from a1_msgs:msg/Cartesian.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__CARTESIAN__FUNCTIONS_H_
#define A1_MSGS__MSG__DETAIL__CARTESIAN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "a1_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "a1_msgs/msg/detail/cartesian__struct.h"

/// Initialize msg/Cartesian message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * a1_msgs__msg__Cartesian
 * )) before or use
 * a1_msgs__msg__Cartesian__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
bool
a1_msgs__msg__Cartesian__init(a1_msgs__msg__Cartesian * msg);

/// Finalize msg/Cartesian message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
void
a1_msgs__msg__Cartesian__fini(a1_msgs__msg__Cartesian * msg);

/// Create msg/Cartesian message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * a1_msgs__msg__Cartesian__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
a1_msgs__msg__Cartesian *
a1_msgs__msg__Cartesian__create();

/// Destroy msg/Cartesian message.
/**
 * It calls
 * a1_msgs__msg__Cartesian__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
void
a1_msgs__msg__Cartesian__destroy(a1_msgs__msg__Cartesian * msg);


/// Initialize array of msg/Cartesian messages.
/**
 * It allocates the memory for the number of elements and calls
 * a1_msgs__msg__Cartesian__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
bool
a1_msgs__msg__Cartesian__Sequence__init(a1_msgs__msg__Cartesian__Sequence * array, size_t size);

/// Finalize array of msg/Cartesian messages.
/**
 * It calls
 * a1_msgs__msg__Cartesian__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
void
a1_msgs__msg__Cartesian__Sequence__fini(a1_msgs__msg__Cartesian__Sequence * array);

/// Create array of msg/Cartesian messages.
/**
 * It allocates the memory for the array and calls
 * a1_msgs__msg__Cartesian__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
a1_msgs__msg__Cartesian__Sequence *
a1_msgs__msg__Cartesian__Sequence__create(size_t size);

/// Destroy array of msg/Cartesian messages.
/**
 * It calls
 * a1_msgs__msg__Cartesian__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
void
a1_msgs__msg__Cartesian__Sequence__destroy(a1_msgs__msg__Cartesian__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // A1_MSGS__MSG__DETAIL__CARTESIAN__FUNCTIONS_H_
