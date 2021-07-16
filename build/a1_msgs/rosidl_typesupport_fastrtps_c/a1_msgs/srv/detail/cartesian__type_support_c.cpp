// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from a1_msgs:srv/Cartesian.idl
// generated code does not contain a copyright notice
#include "a1_msgs/srv/detail/cartesian__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "a1_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "a1_msgs/srv/detail/cartesian__struct.h"
#include "a1_msgs/srv/detail/cartesian__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Cartesian_Request__ros_msg_type = a1_msgs__srv__Cartesian_Request;

static bool _Cartesian_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Cartesian_Request__ros_msg_type * ros_message = static_cast<const _Cartesian_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _Cartesian_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Cartesian_Request__ros_msg_type * ros_message = static_cast<_Cartesian_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_a1_msgs
size_t get_serialized_size_a1_msgs__srv__Cartesian_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Cartesian_Request__ros_msg_type * ros_message = static_cast<const _Cartesian_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Cartesian_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_a1_msgs__srv__Cartesian_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_a1_msgs
size_t max_serialized_size_a1_msgs__srv__Cartesian_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Cartesian_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_a1_msgs__srv__Cartesian_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Cartesian_Request = {
  "a1_msgs::srv",
  "Cartesian_Request",
  _Cartesian_Request__cdr_serialize,
  _Cartesian_Request__cdr_deserialize,
  _Cartesian_Request__get_serialized_size,
  _Cartesian_Request__max_serialized_size
};

static rosidl_message_type_support_t _Cartesian_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Cartesian_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, srv, Cartesian_Request)() {
  return &_Cartesian_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "a1_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "a1_msgs/srv/detail/cartesian__struct.h"
// already included above
// #include "a1_msgs/srv/detail/cartesian__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "a1_msgs/msg/detail/cartesian__functions.h"  // footposition2body, footspeed2body

// forward declare type support functions
size_t get_serialized_size_a1_msgs__msg__Cartesian(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_a1_msgs__msg__Cartesian(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, msg, Cartesian)();


using _Cartesian_Response__ros_msg_type = a1_msgs__srv__Cartesian_Response;

static bool _Cartesian_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Cartesian_Response__ros_msg_type * ros_message = static_cast<const _Cartesian_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: footposition2body
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, Cartesian
      )()->data);
    size_t size = 4;
    auto array_ptr = ros_message->footposition2body;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: footspeed2body
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, Cartesian
      )()->data);
    size_t size = 4;
    auto array_ptr = ros_message->footspeed2body;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _Cartesian_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Cartesian_Response__ros_msg_type * ros_message = static_cast<_Cartesian_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: footposition2body
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, Cartesian
      )()->data);
    size_t size = 4;
    auto array_ptr = ros_message->footposition2body;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: footspeed2body
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, Cartesian
      )()->data);
    size_t size = 4;
    auto array_ptr = ros_message->footspeed2body;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_a1_msgs
size_t get_serialized_size_a1_msgs__srv__Cartesian_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Cartesian_Response__ros_msg_type * ros_message = static_cast<const _Cartesian_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name footposition2body
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->footposition2body;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_a1_msgs__msg__Cartesian(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name footspeed2body
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->footspeed2body;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_a1_msgs__msg__Cartesian(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Cartesian_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_a1_msgs__srv__Cartesian_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_a1_msgs
size_t max_serialized_size_a1_msgs__srv__Cartesian_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: footposition2body
  {
    size_t array_size = 4;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_a1_msgs__msg__Cartesian(
        full_bounded, current_alignment);
    }
  }
  // member: footspeed2body
  {
    size_t array_size = 4;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_a1_msgs__msg__Cartesian(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Cartesian_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_a1_msgs__srv__Cartesian_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Cartesian_Response = {
  "a1_msgs::srv",
  "Cartesian_Response",
  _Cartesian_Response__cdr_serialize,
  _Cartesian_Response__cdr_deserialize,
  _Cartesian_Response__get_serialized_size,
  _Cartesian_Response__max_serialized_size
};

static rosidl_message_type_support_t _Cartesian_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Cartesian_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, srv, Cartesian_Response)() {
  return &_Cartesian_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "a1_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "a1_msgs/srv/cartesian.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Cartesian__callbacks = {
  "a1_msgs::srv",
  "Cartesian",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, srv, Cartesian_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, srv, Cartesian_Response)(),
};

static rosidl_service_type_support_t Cartesian__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Cartesian__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, srv, Cartesian)() {
  return &Cartesian__handle;
}

#if defined(__cplusplus)
}
#endif
