// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from a1_msgs:msg/HighCmd.idl
// generated code does not contain a copyright notice
#include "a1_msgs/msg/detail/high_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "a1_msgs/msg/detail/high_cmd__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace a1_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const a1_msgs::msg::LED &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  a1_msgs::msg::LED &);
size_t get_serialized_size(
  const a1_msgs::msg::LED &,
  size_t current_alignment);
size_t
max_serialized_size_LED(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace a1_msgs


namespace a1_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
cdr_serialize(
  const a1_msgs::msg::HighCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: levelflag
  cdr << ros_message.levelflag;
  // Member: commversion
  cdr << ros_message.commversion;
  // Member: robotid
  cdr << ros_message.robotid;
  // Member: sn
  cdr << ros_message.sn;
  // Member: bandwidth
  cdr << ros_message.bandwidth;
  // Member: mode
  cdr << ros_message.mode;
  // Member: forwardspeed
  cdr << ros_message.forwardspeed;
  // Member: sidespeed
  cdr << ros_message.sidespeed;
  // Member: rotatespeed
  cdr << ros_message.rotatespeed;
  // Member: bodyheight
  cdr << ros_message.bodyheight;
  // Member: footraiseheight
  cdr << ros_message.footraiseheight;
  // Member: yaw
  cdr << ros_message.yaw;
  // Member: pitch
  cdr << ros_message.pitch;
  // Member: roll
  cdr << ros_message.roll;
  // Member: led
  {
    for (size_t i = 0; i < 4; i++) {
      a1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.led[i],
        cdr);
    }
  }
  // Member: wirelessremote
  {
    cdr << ros_message.wirelessremote;
  }
  // Member: appremote
  {
    cdr << ros_message.appremote;
  }
  // Member: reserve
  cdr << ros_message.reserve;
  // Member: crc
  cdr << ros_message.crc;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  a1_msgs::msg::HighCmd & ros_message)
{
  // Member: levelflag
  cdr >> ros_message.levelflag;

  // Member: commversion
  cdr >> ros_message.commversion;

  // Member: robotid
  cdr >> ros_message.robotid;

  // Member: sn
  cdr >> ros_message.sn;

  // Member: bandwidth
  cdr >> ros_message.bandwidth;

  // Member: mode
  cdr >> ros_message.mode;

  // Member: forwardspeed
  cdr >> ros_message.forwardspeed;

  // Member: sidespeed
  cdr >> ros_message.sidespeed;

  // Member: rotatespeed
  cdr >> ros_message.rotatespeed;

  // Member: bodyheight
  cdr >> ros_message.bodyheight;

  // Member: footraiseheight
  cdr >> ros_message.footraiseheight;

  // Member: yaw
  cdr >> ros_message.yaw;

  // Member: pitch
  cdr >> ros_message.pitch;

  // Member: roll
  cdr >> ros_message.roll;

  // Member: led
  {
    for (size_t i = 0; i < 4; i++) {
      a1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.led[i]);
    }
  }

  // Member: wirelessremote
  {
    cdr >> ros_message.wirelessremote;
  }

  // Member: appremote
  {
    cdr >> ros_message.appremote;
  }

  // Member: reserve
  cdr >> ros_message.reserve;

  // Member: crc
  cdr >> ros_message.crc;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
get_serialized_size(
  const a1_msgs::msg::HighCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: levelflag
  {
    size_t item_size = sizeof(ros_message.levelflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: commversion
  {
    size_t item_size = sizeof(ros_message.commversion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robotid
  {
    size_t item_size = sizeof(ros_message.robotid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sn
  {
    size_t item_size = sizeof(ros_message.sn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bandwidth
  {
    size_t item_size = sizeof(ros_message.bandwidth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: forwardspeed
  {
    size_t item_size = sizeof(ros_message.forwardspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sidespeed
  {
    size_t item_size = sizeof(ros_message.sidespeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rotatespeed
  {
    size_t item_size = sizeof(ros_message.rotatespeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bodyheight
  {
    size_t item_size = sizeof(ros_message.bodyheight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: footraiseheight
  {
    size_t item_size = sizeof(ros_message.footraiseheight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw
  {
    size_t item_size = sizeof(ros_message.yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch
  {
    size_t item_size = sizeof(ros_message.pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll
  {
    size_t item_size = sizeof(ros_message.roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: led
  {
    size_t array_size = 4;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.led[index], current_alignment);
    }
  }
  // Member: wirelessremote
  {
    size_t array_size = 40;
    size_t item_size = sizeof(ros_message.wirelessremote[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: appremote
  {
    size_t array_size = 40;
    size_t item_size = sizeof(ros_message.appremote[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserve
  {
    size_t item_size = sizeof(ros_message.reserve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crc
  {
    size_t item_size = sizeof(ros_message.crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
max_serialized_size_HighCmd(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: levelflag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: commversion
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: robotid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: sn
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bandwidth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: forwardspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sidespeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rotatespeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bodyheight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: footraiseheight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: led
  {
    size_t array_size = 4;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LED(
        full_bounded, current_alignment);
    }
  }

  // Member: wirelessremote
  {
    size_t array_size = 40;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: appremote
  {
    size_t array_size = 40;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reserve
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: crc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _HighCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const a1_msgs::msg::HighCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HighCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<a1_msgs::msg::HighCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HighCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const a1_msgs::msg::HighCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HighCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_HighCmd(full_bounded, 0);
}

static message_type_support_callbacks_t _HighCmd__callbacks = {
  "a1_msgs::msg",
  "HighCmd",
  _HighCmd__cdr_serialize,
  _HighCmd__cdr_deserialize,
  _HighCmd__get_serialized_size,
  _HighCmd__max_serialized_size
};

static rosidl_message_type_support_t _HighCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HighCmd__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace a1_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_a1_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<a1_msgs::msg::HighCmd>()
{
  return &a1_msgs::msg::typesupport_fastrtps_cpp::_HighCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, a1_msgs, msg, HighCmd)() {
  return &a1_msgs::msg::typesupport_fastrtps_cpp::_HighCmd__handle;
}

#ifdef __cplusplus
}
#endif
