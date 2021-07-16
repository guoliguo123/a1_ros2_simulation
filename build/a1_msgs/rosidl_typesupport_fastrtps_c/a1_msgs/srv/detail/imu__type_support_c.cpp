// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from a1_msgs:srv/Imu.idl
// generated code does not contain a copyright notice
#include "a1_msgs/srv/detail/imu__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "a1_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "a1_msgs/srv/detail/imu__struct.h"
#include "a1_msgs/srv/detail/imu__functions.h"
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


using _Imu_Request__ros_msg_type = a1_msgs__srv__Imu_Request;

static bool _Imu_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Imu_Request__ros_msg_type * ros_message = static_cast<const _Imu_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _Imu_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Imu_Request__ros_msg_type * ros_message = static_cast<_Imu_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_a1_msgs
size_t get_serialized_size_a1_msgs__srv__Imu_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Imu_Request__ros_msg_type * ros_message = static_cast<const _Imu_Request__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _Imu_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_a1_msgs__srv__Imu_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_a1_msgs
size_t max_serialized_size_a1_msgs__srv__Imu_Request(
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

static size_t _Imu_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_a1_msgs__srv__Imu_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Imu_Request = {
  "a1_msgs::srv",
  "Imu_Request",
  _Imu_Request__cdr_serialize,
  _Imu_Request__cdr_deserialize,
  _Imu_Request__get_serialized_size,
  _Imu_Request__max_serialized_size
};

static rosidl_message_type_support_t _Imu_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Imu_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, srv, Imu_Request)() {
  return &_Imu_Request__type_support;
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
// #include "a1_msgs/srv/detail/imu__struct.h"
// already included above
// #include "a1_msgs/srv/detail/imu__functions.h"
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


// forward declare type support functions


using _Imu_Response__ros_msg_type = a1_msgs__srv__Imu_Response;

static bool _Imu_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Imu_Response__ros_msg_type * ros_message = static_cast<const _Imu_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: quaternion
  {
    size_t size = 4;
    auto array_ptr = ros_message->quaternion;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyroscope
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyroscope;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: accelerometer
  {
    size_t size = 3;
    auto array_ptr = ros_message->accelerometer;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  return true;
}

static bool _Imu_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Imu_Response__ros_msg_type * ros_message = static_cast<_Imu_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: quaternion
  {
    size_t size = 4;
    auto array_ptr = ros_message->quaternion;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyroscope
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyroscope;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: accelerometer
  {
    size_t size = 3;
    auto array_ptr = ros_message->accelerometer;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_a1_msgs
size_t get_serialized_size_a1_msgs__srv__Imu_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Imu_Response__ros_msg_type * ros_message = static_cast<const _Imu_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name quaternion
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->quaternion;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyroscope
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->gyroscope;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accelerometer
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->accelerometer;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Imu_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_a1_msgs__srv__Imu_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_a1_msgs
size_t max_serialized_size_a1_msgs__srv__Imu_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: quaternion
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyroscope
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accelerometer
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Imu_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_a1_msgs__srv__Imu_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Imu_Response = {
  "a1_msgs::srv",
  "Imu_Response",
  _Imu_Response__cdr_serialize,
  _Imu_Response__cdr_deserialize,
  _Imu_Response__get_serialized_size,
  _Imu_Response__max_serialized_size
};

static rosidl_message_type_support_t _Imu_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Imu_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, srv, Imu_Response)() {
  return &_Imu_Response__type_support;
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
#include "a1_msgs/srv/imu.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Imu__callbacks = {
  "a1_msgs::srv",
  "Imu",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, srv, Imu_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, srv, Imu_Response)(),
};

static rosidl_service_type_support_t Imu__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Imu__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, srv, Imu)() {
  return &Imu__handle;
}

#if defined(__cplusplus)
}
#endif
