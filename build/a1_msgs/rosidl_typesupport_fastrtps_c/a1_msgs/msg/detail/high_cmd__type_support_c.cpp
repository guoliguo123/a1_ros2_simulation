// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from a1_msgs:msg/HighCmd.idl
// generated code does not contain a copyright notice
#include "a1_msgs/msg/detail/high_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "a1_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "a1_msgs/msg/detail/high_cmd__struct.h"
#include "a1_msgs/msg/detail/high_cmd__functions.h"
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

#include "a1_msgs/msg/detail/led__functions.h"  // led

// forward declare type support functions
size_t get_serialized_size_a1_msgs__msg__LED(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_a1_msgs__msg__LED(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, msg, LED)();


using _HighCmd__ros_msg_type = a1_msgs__msg__HighCmd;

static bool _HighCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HighCmd__ros_msg_type * ros_message = static_cast<const _HighCmd__ros_msg_type *>(untyped_ros_message);
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

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: forwardspeed
  {
    cdr << ros_message->forwardspeed;
  }

  // Field name: sidespeed
  {
    cdr << ros_message->sidespeed;
  }

  // Field name: rotatespeed
  {
    cdr << ros_message->rotatespeed;
  }

  // Field name: bodyheight
  {
    cdr << ros_message->bodyheight;
  }

  // Field name: footraiseheight
  {
    cdr << ros_message->footraiseheight;
  }

  // Field name: yaw
  {
    cdr << ros_message->yaw;
  }

  // Field name: pitch
  {
    cdr << ros_message->pitch;
  }

  // Field name: roll
  {
    cdr << ros_message->roll;
  }

  // Field name: led
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, LED
      )()->data);
    size_t size = 4;
    auto array_ptr = ros_message->led;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: wirelessremote
  {
    size_t size = 40;
    auto array_ptr = ros_message->wirelessremote;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: appremote
  {
    size_t size = 40;
    auto array_ptr = ros_message->appremote;
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

static bool _HighCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HighCmd__ros_msg_type * ros_message = static_cast<_HighCmd__ros_msg_type *>(untyped_ros_message);
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

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: forwardspeed
  {
    cdr >> ros_message->forwardspeed;
  }

  // Field name: sidespeed
  {
    cdr >> ros_message->sidespeed;
  }

  // Field name: rotatespeed
  {
    cdr >> ros_message->rotatespeed;
  }

  // Field name: bodyheight
  {
    cdr >> ros_message->bodyheight;
  }

  // Field name: footraiseheight
  {
    cdr >> ros_message->footraiseheight;
  }

  // Field name: yaw
  {
    cdr >> ros_message->yaw;
  }

  // Field name: pitch
  {
    cdr >> ros_message->pitch;
  }

  // Field name: roll
  {
    cdr >> ros_message->roll;
  }

  // Field name: led
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, a1_msgs, msg, LED
      )()->data);
    size_t size = 4;
    auto array_ptr = ros_message->led;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: wirelessremote
  {
    size_t size = 40;
    auto array_ptr = ros_message->wirelessremote;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: appremote
  {
    size_t size = 40;
    auto array_ptr = ros_message->appremote;
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
size_t get_serialized_size_a1_msgs__msg__HighCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HighCmd__ros_msg_type * ros_message = static_cast<const _HighCmd__ros_msg_type *>(untyped_ros_message);
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
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name forwardspeed
  {
    size_t item_size = sizeof(ros_message->forwardspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sidespeed
  {
    size_t item_size = sizeof(ros_message->sidespeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotatespeed
  {
    size_t item_size = sizeof(ros_message->rotatespeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bodyheight
  {
    size_t item_size = sizeof(ros_message->bodyheight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name footraiseheight
  {
    size_t item_size = sizeof(ros_message->footraiseheight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw
  {
    size_t item_size = sizeof(ros_message->yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch
  {
    size_t item_size = sizeof(ros_message->pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll
  {
    size_t item_size = sizeof(ros_message->roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name led
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->led;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_a1_msgs__msg__LED(
        &array_ptr[index], current_alignment);
    }
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
  // field.name appremote
  {
    size_t array_size = 40;
    auto array_ptr = ros_message->appremote;
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

static uint32_t _HighCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_a1_msgs__msg__HighCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_a1_msgs
size_t max_serialized_size_a1_msgs__msg__HighCmd(
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
  // member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: forwardspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sidespeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rotatespeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bodyheight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: footraiseheight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: led
  {
    size_t array_size = 4;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_a1_msgs__msg__LED(
        full_bounded, current_alignment);
    }
  }
  // member: wirelessremote
  {
    size_t array_size = 40;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: appremote
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

static size_t _HighCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_a1_msgs__msg__HighCmd(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_HighCmd = {
  "a1_msgs::msg",
  "HighCmd",
  _HighCmd__cdr_serialize,
  _HighCmd__cdr_deserialize,
  _HighCmd__get_serialized_size,
  _HighCmd__max_serialized_size
};

static rosidl_message_type_support_t _HighCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HighCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, a1_msgs, msg, HighCmd)() {
  return &_HighCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
