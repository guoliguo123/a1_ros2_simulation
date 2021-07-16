// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from a1_msgs:srv/LowState.idl
// generated code does not contain a copyright notice
#include "a1_msgs/srv/detail/low_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "a1_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "a1_msgs/srv/detail/low_state__struct.h"
#include "a1_msgs/srv/detail/low_state__functions.h"
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


using _LowState_Request__ros_msg_type = a1_msgs__srv__LowState_Request;

static bool _LowState_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LowState_Request__ros_msg_type * ros_message = static_cast<const _LowState_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _LowState_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LowState_Request__ros_msg_type * ros_message = static_cast<_LowState_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_a1_msgs
size_t get_serialized_size_a1_msgs__srv__LowState_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LowState_Request__ros_msg_type * ros_message = static_cast<const _LowState_Request__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _LowState_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_a1_msgs__srv__LowState_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_a1_msgs
size_t max_serialized_size_a1_msgs__srv__LowState_Request(
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

static size_t _LowState_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_a1_msgs__srv__LowState_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LowState_Request = {
  "a1_msgs::srv",
  "LowState_Request",
  _LowState_Request__cdr_serialize,
  _LowState_Request__cdr_deserialize,
  _LowState_Request__get_serialized_size,
  _LowState_Request__max_serialized_size
};

static rosidl_message_type_support_t _LowState_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LowState_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, srv, LowState_Request)() {
  return &_LowState_Request__type_support;
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
// #include "a1_msgs/srv/detail/low_state__struct.h"
// already included above
// #include "a1_msgs/srv/detail/low_state__functions.h"
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

#include "a1_msgs/msg/detail/imu__functions.h"  // imu
#include "a1_msgs/msg/detail/motor_state__functions.h"  // motorstate

// forward declare type support functions
size_t get_serialized_size_a1_msgs__msg__IMU(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_a1_msgs__msg__IMU(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, msg, IMU)();
size_t get_serialized_size_a1_msgs__msg__MotorState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_a1_msgs__msg__MotorState(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, msg, MotorState)();


using _LowState_Response__ros_msg_type = a1_msgs__srv__LowState_Response;

static bool _LowState_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LowState_Response__ros_msg_type * ros_message = static_cast<const _LowState_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: levelflag
  {
    cdr << ros_message->levelflag;
  }

  // Field name: commversion
  {
    cdr << ros_message->commversion;
  }

  // Field name: robotid
  {
    cdr << ros_message->robotid;
  }

  // Field name: sn
  {
    cdr << ros_message->sn;
  }

  // Field name: bandwidth
  {
    cdr << ros_message->bandwidth;
  }

  // Field name: imu
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, IMU
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->imu, cdr))
    {
      return false;
    }
  }

  // Field name: motorstate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, MotorState
      )()->data);
    size_t size = 20;
    auto array_ptr = ros_message->motorstate;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: footforce
  {
    size_t size = 4;
    auto array_ptr = ros_message->footforce;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: footforceest
  {
    size_t size = 4;
    auto array_ptr = ros_message->footforceest;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tick
  {
    cdr << ros_message->tick;
  }

  // Field name: wirelessremote
  {
    size_t size = 40;
    auto array_ptr = ros_message->wirelessremote;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: reserve
  {
    cdr << ros_message->reserve;
  }

  // Field name: crc
  {
    cdr << ros_message->crc;
  }

  return true;
}

static bool _LowState_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LowState_Response__ros_msg_type * ros_message = static_cast<_LowState_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: levelflag
  {
    cdr >> ros_message->levelflag;
  }

  // Field name: commversion
  {
    cdr >> ros_message->commversion;
  }

  // Field name: robotid
  {
    cdr >> ros_message->robotid;
  }

  // Field name: sn
  {
    cdr >> ros_message->sn;
  }

  // Field name: bandwidth
  {
    cdr >> ros_message->bandwidth;
  }

  // Field name: imu
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, IMU
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->imu))
    {
      return false;
    }
  }

  // Field name: motorstate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, MotorState
      )()->data);
    size_t size = 20;
    auto array_ptr = ros_message->motorstate;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: footforce
  {
    size_t size = 4;
    auto array_ptr = ros_message->footforce;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: footforceest
  {
    size_t size = 4;
    auto array_ptr = ros_message->footforceest;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tick
  {
    cdr >> ros_message->tick;
  }

  // Field name: wirelessremote
  {
    size_t size = 40;
    auto array_ptr = ros_message->wirelessremote;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: reserve
  {
    cdr >> ros_message->reserve;
  }

  // Field name: crc
  {
    cdr >> ros_message->crc;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_a1_msgs
size_t get_serialized_size_a1_msgs__srv__LowState_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LowState_Response__ros_msg_type * ros_message = static_cast<const _LowState_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name levelflag
  {
    size_t item_size = sizeof(ros_message->levelflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name commversion
  {
    size_t item_size = sizeof(ros_message->commversion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robotid
  {
    size_t item_size = sizeof(ros_message->robotid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sn
  {
    size_t item_size = sizeof(ros_message->sn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bandwidth
  {
    size_t item_size = sizeof(ros_message->bandwidth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu

  current_alignment += get_serialized_size_a1_msgs__msg__IMU(
    &(ros_message->imu), current_alignment);
  // field.name motorstate
  {
    size_t array_size = 20;
    auto array_ptr = ros_message->motorstate;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_a1_msgs__msg__MotorState(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name footforce
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->footforce;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name footforceest
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->footforceest;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tick
  {
    size_t item_size = sizeof(ros_message->tick);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wirelessremote
  {
    size_t array_size = 40;
    auto array_ptr = ros_message->wirelessremote;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserve
  {
    size_t item_size = sizeof(ros_message->reserve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crc
  {
    size_t item_size = sizeof(ros_message->crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LowState_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_a1_msgs__srv__LowState_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_a1_msgs
size_t max_serialized_size_a1_msgs__srv__LowState_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: levelflag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: commversion
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: robotid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: sn
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bandwidth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: imu
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_a1_msgs__msg__IMU(
        full_bounded, current_alignment);
    }
  }
  // member: motorstate
  {
    size_t array_size = 20;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_a1_msgs__msg__MotorState(
        full_bounded, current_alignment);
    }
  }
  // member: footforce
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: footforceest
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: tick
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wirelessremote
  {
    size_t array_size = 40;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserve
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: crc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _LowState_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_a1_msgs__srv__LowState_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LowState_Response = {
  "a1_msgs::srv",
  "LowState_Response",
  _LowState_Response__cdr_serialize,
  _LowState_Response__cdr_deserialize,
  _LowState_Response__get_serialized_size,
  _LowState_Response__max_serialized_size
};

static rosidl_message_type_support_t _LowState_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LowState_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, srv, LowState_Response)() {
  return &_LowState_Response__type_support;
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
#include "a1_msgs/srv/low_state.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t LowState__callbacks = {
  "a1_msgs::srv",
  "LowState",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, srv, LowState_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, srv, LowState_Response)(),
};

static rosidl_service_type_support_t LowState__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &LowState__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, srv, LowState)() {
  return &LowState__handle;
}

#if defined(__cplusplus)
}
#endif
