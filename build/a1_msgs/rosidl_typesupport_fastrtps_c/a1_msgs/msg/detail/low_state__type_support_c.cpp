// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from a1_msgs:msg/LowState.idl
// generated code does not contain a copyright notice
#include "a1_msgs/msg/detail/low_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "a1_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "a1_msgs/msg/detail/low_state__struct.h"
#include "a1_msgs/msg/detail/low_state__functions.h"
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

#include "a1_msgs/msg/detail/cartesian__functions.h"  // eeforce, eeforceraw, position, velocity, velocity_w
#include "a1_msgs/msg/detail/imu__functions.h"  // imu
#include "a1_msgs/msg/detail/motor_state__functions.h"  // motorstate

// forward declare type support functions
size_t get_serialized_size_a1_msgs__msg__Cartesian(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_a1_msgs__msg__Cartesian(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, msg, Cartesian)();
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


using _LowState__ros_msg_type = a1_msgs__msg__LowState;

static bool _LowState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LowState__ros_msg_type * ros_message = static_cast<const _LowState__ros_msg_type *>(untyped_ros_message);
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

  // Field name: eeforceraw
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, Cartesian
      )()->data);
    size_t size = 4;
    auto array_ptr = ros_message->eeforceraw;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: eeforce
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, Cartesian
      )()->data);
    size_t size = 4;
    auto array_ptr = ros_message->eeforce;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, Cartesian
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->position, cdr))
    {
      return false;
    }
  }

  // Field name: velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, Cartesian
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->velocity, cdr))
    {
      return false;
    }
  }

  // Field name: velocity_w
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, Cartesian
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->velocity_w, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _LowState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LowState__ros_msg_type * ros_message = static_cast<_LowState__ros_msg_type *>(untyped_ros_message);
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

  // Field name: eeforceraw
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, Cartesian
      )()->data);
    size_t size = 4;
    auto array_ptr = ros_message->eeforceraw;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: eeforce
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, Cartesian
      )()->data);
    size_t size = 4;
    auto array_ptr = ros_message->eeforce;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, Cartesian
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->position))
    {
      return false;
    }
  }

  // Field name: velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, Cartesian
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->velocity))
    {
      return false;
    }
  }

  // Field name: velocity_w
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, Cartesian
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->velocity_w))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_a1_msgs
size_t get_serialized_size_a1_msgs__msg__LowState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LowState__ros_msg_type * ros_message = static_cast<const _LowState__ros_msg_type *>(untyped_ros_message);
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
  // field.name eeforceraw
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->eeforceraw;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_a1_msgs__msg__Cartesian(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name eeforce
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->eeforce;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_a1_msgs__msg__Cartesian(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name position

  current_alignment += get_serialized_size_a1_msgs__msg__Cartesian(
    &(ros_message->position), current_alignment);
  // field.name velocity

  current_alignment += get_serialized_size_a1_msgs__msg__Cartesian(
    &(ros_message->velocity), current_alignment);
  // field.name velocity_w

  current_alignment += get_serialized_size_a1_msgs__msg__Cartesian(
    &(ros_message->velocity_w), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _LowState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_a1_msgs__msg__LowState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_a1_msgs
size_t max_serialized_size_a1_msgs__msg__LowState(
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
  // member: eeforceraw
  {
    size_t array_size = 4;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_a1_msgs__msg__Cartesian(
        full_bounded, current_alignment);
    }
  }
  // member: eeforce
  {
    size_t array_size = 4;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_a1_msgs__msg__Cartesian(
        full_bounded, current_alignment);
    }
  }
  // member: position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_a1_msgs__msg__Cartesian(
        full_bounded, current_alignment);
    }
  }
  // member: velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_a1_msgs__msg__Cartesian(
        full_bounded, current_alignment);
    }
  }
  // member: velocity_w
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_a1_msgs__msg__Cartesian(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _LowState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_a1_msgs__msg__LowState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LowState = {
  "a1_msgs::msg",
  "LowState",
  _LowState__cdr_serialize,
  _LowState__cdr_deserialize,
  _LowState__get_serialized_size,
  _LowState__max_serialized_size
};

static rosidl_message_type_support_t _LowState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LowState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, msg, LowState)() {
  return &_LowState__type_support;
}

#if defined(__cplusplus)
}
#endif
