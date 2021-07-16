// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from a1_msgs:msg/LowState.idl
// generated code does not contain a copyright notice
#include "a1_msgs/msg/detail/low_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "a1_msgs/msg/detail/low_state__struct.hpp"

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
  const a1_msgs::msg::IMU &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  a1_msgs::msg::IMU &);
size_t get_serialized_size(
  const a1_msgs::msg::IMU &,
  size_t current_alignment);
size_t
max_serialized_size_IMU(
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
bool cdr_serialize(
  const a1_msgs::msg::MotorState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  a1_msgs::msg::MotorState &);
size_t get_serialized_size(
  const a1_msgs::msg::MotorState &,
  size_t current_alignment);
size_t
max_serialized_size_MotorState(
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
bool cdr_serialize(
  const a1_msgs::msg::Cartesian &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  a1_msgs::msg::Cartesian &);
size_t get_serialized_size(
  const a1_msgs::msg::Cartesian &,
  size_t current_alignment);
size_t
max_serialized_size_Cartesian(
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
bool cdr_serialize(
  const a1_msgs::msg::Cartesian &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  a1_msgs::msg::Cartesian &);
size_t get_serialized_size(
  const a1_msgs::msg::Cartesian &,
  size_t current_alignment);
size_t
max_serialized_size_Cartesian(
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
bool cdr_serialize(
  const a1_msgs::msg::Cartesian &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  a1_msgs::msg::Cartesian &);
size_t get_serialized_size(
  const a1_msgs::msg::Cartesian &,
  size_t current_alignment);
size_t
max_serialized_size_Cartesian(
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
bool cdr_serialize(
  const a1_msgs::msg::Cartesian &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  a1_msgs::msg::Cartesian &);
size_t get_serialized_size(
  const a1_msgs::msg::Cartesian &,
  size_t current_alignment);
size_t
max_serialized_size_Cartesian(
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
bool cdr_serialize(
  const a1_msgs::msg::Cartesian &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  a1_msgs::msg::Cartesian &);
size_t get_serialized_size(
  const a1_msgs::msg::Cartesian &,
  size_t current_alignment);
size_t
max_serialized_size_Cartesian(
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
  const a1_msgs::msg::LowState & ros_message,
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
  // Member: imu
  a1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.imu,
    cdr);
  // Member: motorstate
  {
    for (size_t i = 0; i < 20; i++) {
      a1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.motorstate[i],
        cdr);
    }
  }
  // Member: footforce
  {
    cdr << ros_message.footforce;
  }
  // Member: footforceest
  {
    cdr << ros_message.footforceest;
  }
  // Member: tick
  cdr << ros_message.tick;
  // Member: wirelessremote
  {
    cdr << ros_message.wirelessremote;
  }
  // Member: reserve
  cdr << ros_message.reserve;
  // Member: crc
  cdr << ros_message.crc;
  // Member: eeforceraw
  {
    for (size_t i = 0; i < 4; i++) {
      a1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.eeforceraw[i],
        cdr);
    }
  }
  // Member: eeforce
  {
    for (size_t i = 0; i < 4; i++) {
      a1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.eeforce[i],
        cdr);
    }
  }
  // Member: position
  a1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.position,
    cdr);
  // Member: velocity
  a1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.velocity,
    cdr);
  // Member: velocity_w
  a1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.velocity_w,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  a1_msgs::msg::LowState & ros_message)
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

  // Member: imu
  a1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.imu);

  // Member: motorstate
  {
    for (size_t i = 0; i < 20; i++) {
      a1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.motorstate[i]);
    }
  }

  // Member: footforce
  {
    cdr >> ros_message.footforce;
  }

  // Member: footforceest
  {
    cdr >> ros_message.footforceest;
  }

  // Member: tick
  cdr >> ros_message.tick;

  // Member: wirelessremote
  {
    cdr >> ros_message.wirelessremote;
  }

  // Member: reserve
  cdr >> ros_message.reserve;

  // Member: crc
  cdr >> ros_message.crc;

  // Member: eeforceraw
  {
    for (size_t i = 0; i < 4; i++) {
      a1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.eeforceraw[i]);
    }
  }

  // Member: eeforce
  {
    for (size_t i = 0; i < 4; i++) {
      a1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.eeforce[i]);
    }
  }

  // Member: position
  a1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.position);

  // Member: velocity
  a1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.velocity);

  // Member: velocity_w
  a1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.velocity_w);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
get_serialized_size(
  const a1_msgs::msg::LowState & ros_message,
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
  // Member: imu

  current_alignment +=
    a1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.imu, current_alignment);
  // Member: motorstate
  {
    size_t array_size = 20;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.motorstate[index], current_alignment);
    }
  }
  // Member: footforce
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.footforce[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: footforceest
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.footforceest[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tick
  {
    size_t item_size = sizeof(ros_message.tick);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wirelessremote
  {
    size_t array_size = 40;
    size_t item_size = sizeof(ros_message.wirelessremote[0]);
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
  // Member: eeforceraw
  {
    size_t array_size = 4;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.eeforceraw[index], current_alignment);
    }
  }
  // Member: eeforce
  {
    size_t array_size = 4;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.eeforce[index], current_alignment);
    }
  }
  // Member: position

  current_alignment +=
    a1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.position, current_alignment);
  // Member: velocity

  current_alignment +=
    a1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.velocity, current_alignment);
  // Member: velocity_w

  current_alignment +=
    a1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.velocity_w, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
max_serialized_size_LowState(
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

  // Member: imu
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_IMU(
        full_bounded, current_alignment);
    }
  }

  // Member: motorstate
  {
    size_t array_size = 20;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MotorState(
        full_bounded, current_alignment);
    }
  }

  // Member: footforce
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: footforceest
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: tick
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wirelessremote
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

  // Member: eeforceraw
  {
    size_t array_size = 4;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Cartesian(
        full_bounded, current_alignment);
    }
  }

  // Member: eeforce
  {
    size_t array_size = 4;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Cartesian(
        full_bounded, current_alignment);
    }
  }

  // Member: position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Cartesian(
        full_bounded, current_alignment);
    }
  }

  // Member: velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Cartesian(
        full_bounded, current_alignment);
    }
  }

  // Member: velocity_w
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Cartesian(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _LowState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const a1_msgs::msg::LowState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LowState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<a1_msgs::msg::LowState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LowState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const a1_msgs::msg::LowState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LowState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LowState(full_bounded, 0);
}

static message_type_support_callbacks_t _LowState__callbacks = {
  "a1_msgs::msg",
  "LowState",
  _LowState__cdr_serialize,
  _LowState__cdr_deserialize,
  _LowState__get_serialized_size,
  _LowState__max_serialized_size
};

static rosidl_message_type_support_t _LowState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LowState__callbacks,
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
get_message_type_support_handle<a1_msgs::msg::LowState>()
{
  return &a1_msgs::msg::typesupport_fastrtps_cpp::_LowState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, a1_msgs, msg, LowState)() {
  return &a1_msgs::msg::typesupport_fastrtps_cpp::_LowState__handle;
}

#ifdef __cplusplus
}
#endif
