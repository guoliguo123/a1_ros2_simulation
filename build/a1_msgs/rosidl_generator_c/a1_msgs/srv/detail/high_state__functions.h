// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from a1_msgs:srv/HighState.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__SRV__DETAIL__HIGH_STATE__FUNCTIONS_H_
#define A1_MSGS__SRV__DETAIL__HIGH_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "a1_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "a1_msgs/srv/detail/high_state__struct.h"

/// Initialize srv/HighState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * a1_msgs__srv__HighState_Request
 * )) before or use
 * a1_msgs__srv__HighState_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
bool
a1_msgs__srv__HighState_Request__init(a1_msgs__srv__HighState_Request * msg);

/// Finalize srv/HighState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
void
a1_msgs__srv__HighState_Request__fini(a1_msgs__srv__HighState_Request * msg);

/// Create srv/HighState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * a1_msgs__srv__HighState_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
a1_msgs__srv__HighState_Request *
a1_msgs__srv__HighState_Request__create();

/// Destroy srv/HighState message.
/**
 * It calls
 * a1_msgs__srv__HighState_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
void
a1_msgs__srv__HighState_Request__destroy(a1_msgs__srv__HighState_Request * msg);


/// Initialize array of srv/HighState messages.
/**
 * It allocates the memory for the number of elements and calls
 * a1_msgs__srv__HighState_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
bool
a1_msgs__srv__HighState_Request__Sequence__init(a1_msgs__srv__HighState_Request__Sequence * array, size_t size);

/// Finalize array of srv/HighState messages.
/**
 * It calls
 * a1_msgs__srv__HighState_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
void
a1_msgs__srv__HighState_Request__Sequence__fini(a1_msgs__srv__HighState_Request__Sequence * array);

/// Create array of srv/HighState messages.
/**
 * It allocates the memory for the array and calls
 * a1_msgs__srv__HighState_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
a1_msgs__srv__HighState_Request__Sequence *
a1_msgs__srv__HighState_Request__Sequence__create(size_t size);

/// Destroy array of srv/HighState messages.
/**
 * It calls
 * a1_msgs__srv__HighState_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
void
a1_msgs__srv__HighState_Request__Sequence__destroy(a1_msgs__srv__HighState_Request__Sequence * array);

/// Initialize srv/HighState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * a1_msgs__srv__HighState_Response
 * )) before or use
 * a1_msgs__srv__HighState_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
bool
a1_msgs__srv__HighState_Response__init(a1_msgs__srv__HighState_Response * msg);

/// Finalize srv/HighState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
void
a1_msgs__srv__HighState_Response__fini(a1_msgs__srv__HighState_Response * msg);

/// Create srv/HighState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * a1_msgs__srv__HighState_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
a1_msgs__srv__HighState_Response *
a1_msgs__srv__HighState_Response__create();

/// Destroy srv/HighState message.
/**
 * It calls
 * a1_msgs__srv__HighState_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
void
a1_msgs__srv__HighState_Response__destroy(a1_msgs__srv__HighState_Response * msg);


/// Initialize array of srv/HighState messages.
/**
 * It allocates the memory for the number of elements and calls
 * a1_msgs__srv__HighState_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
bool
a1_msgs__srv__HighState_Response__Sequence__init(a1_msgs__srv__HighState_Response__Sequence * array, size_t size);

/// Finalize array of srv/HighState messages.
/**
 * It calls
 * a1_msgs__srv__HighState_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
void
a1_msgs__srv__HighState_Response__Sequence__fini(a1_msgs__srv__HighState_Response__Sequence * array);

/// Create array of srv/HighState messages.
/**
 * It allocates the memory for the array and calls
 * a1_msgs__srv__HighState_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
a1_msgs__srv__HighState_Response__Sequence *
a1_msgs__srv__HighState_Response__Sequence__create(size_t size);

/// Destroy array of srv/HighState messages.
/**
 * It calls
 * a1_msgs__srv__HighState_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_a1_msgs
void
a1_msgs__srv__HighState_Response__Sequence__destroy(a1_msgs__srv__HighState_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // A1_MSGS__SRV__DETAIL__HIGH_STATE__FUNCTIONS_H_
