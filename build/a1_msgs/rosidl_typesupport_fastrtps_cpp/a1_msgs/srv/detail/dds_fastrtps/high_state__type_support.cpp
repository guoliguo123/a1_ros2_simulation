// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from a1_msgs:srv/HighState.idl
// generated code does not contain a copyright notice
#include "a1_msgs/srv/detail/high_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "a1_msgs/srv/detail/high_state__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
cdr_serialize(
  const a1_msgs::srv::HighState_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  a1_msgs::srv::HighState_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
get_serialized_size(
  const a1_msgs::srv::HighState_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
max_serialized_size_HighState_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _HighState_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const a1_msgs::srv::HighState_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HighState_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<a1_msgs::srv::HighState_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HighState_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const a1_msgs::srv::HighState_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HighState_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_HighState_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _HighState_Request__callbacks = {
  "a1_msgs::srv",
  "HighState_Request",
  _HighState_Request__cdr_serialize,
  _HighState_Request__cdr_deserialize,
  _HighState_Request__get_serialized_size,
  _HighState_Request__max_serialized_size
};

static rosidl_message_type_support_t _HighState_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HighState_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace a1_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_a1_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<a1_msgs::srv::HighState_Request>()
{
  return &a1_msgs::srv::typesupport_fastrtps_cpp::_HighState_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, a1_msgs, srv, HighState_Request)() {
  return &a1_msgs::srv::typesupport_fastrtps_cpp::_HighState_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
cdr_serialize(
  const a1_msgs::srv::HighState_Response & ros_message,
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
  // Member: imu
  a1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.imu,
    cdr);
  // Member: forwardspeed
  cdr << ros_message.forwardspeed;
  // Member: sidespeed
  cdr << ros_message.sidespeed;
  // Member: rotatespeed
  cdr << ros_message.rotatespeed;
  // Member: bodyheight
  cdr << ros_message.bodyheight;
  // Member: updownspeed
  cdr << ros_message.updownspeed;
  // Member: forwardposition
  cdr << ros_message.forwardposition;
  // Member: sideposition
  cdr << ros_message.sideposition;
  // Member: footposition2body
  {
    for (size_t i = 0; i < 4; i++) {
      a1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.footposition2body[i],
        cdr);
    }
  }
  // Member: footspeed2body
  {
    for (size_t i = 0; i < 4; i++) {
      a1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.footspeed2body[i],
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
  // Member: eeforce
  {
    for (size_t i = 0; i < 4; i++) {
      a1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.eeforce[i],
        cdr);
    }
  }
  // Member: jointp
  {
    cdr << ros_message.jointp;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  a1_msgs::srv::HighState_Response & ros_message)
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

  // Member: imu
  a1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.imu);

  // Member: forwardspeed
  cdr >> ros_message.forwardspeed;

  // Member: sidespeed
  cdr >> ros_message.sidespeed;

  // Member: rotatespeed
  cdr >> ros_message.rotatespeed;

  // Member: bodyheight
  cdr >> ros_message.bodyheight;

  // Member: updownspeed
  cdr >> ros_message.updownspeed;

  // Member: forwardposition
  cdr >> ros_message.forwardposition;

  // Member: sideposition
  cdr >> ros_message.sideposition;

  // Member: footposition2body
  {
    for (size_t i = 0; i < 4; i++) {
      a1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.footposition2body[i]);
    }
  }

  // Member: footspeed2body
  {
    for (size_t i = 0; i < 4; i++) {
      a1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.footspeed2body[i]);
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

  // Member: eeforce
  {
    for (size_t i = 0; i < 4; i++) {
      a1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.eeforce[i]);
    }
  }

  // Member: jointp
  {
    cdr >> ros_message.jointp;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
get_serialized_size(
  const a1_msgs::srv::HighState_Response & ros_message,
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
  // Member: imu

  current_alignment +=
    a1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.imu, current_alignment);
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
  // Member: updownspeed
  {
    size_t item_size = sizeof(ros_message.updownspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: forwardposition
  {
    size_t item_size = sizeof(ros_message.forwardposition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sideposition
  {
    size_t item_size = sizeof(ros_message.sideposition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: footposition2body
  {
    size_t array_size = 4;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.footposition2body[index], current_alignment);
    }
  }
  // Member: footspeed2body
  {
    size_t array_size = 4;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.footspeed2body[index], current_alignment);
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
  // Member: eeforce
  {
    size_t array_size = 4;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.eeforce[index], current_alignment);
    }
  }
  // Member: jointp
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.jointp[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
max_serialized_size_HighState_Response(
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

  // Member: imu
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_IMU(
        full_bounded, current_alignment);
    }
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

  // Member: updownspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: forwardposition
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sideposition
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: footposition2body
  {
    size_t array_size = 4;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Cartesian(
        full_bounded, current_alignment);
    }
  }

  // Member: footspeed2body
  {
    size_t array_size = 4;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Cartesian(
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

  // Member: eeforce
  {
    size_t array_size = 4;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        a1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Cartesian(
        full_bounded, current_alignment);
    }
  }

  // Member: jointp
  {
    size_t array_size = 12;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _HighState_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const a1_msgs::srv::HighState_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HighState_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<a1_msgs::srv::HighState_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HighState_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const a1_msgs::srv::HighState_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HighState_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_HighState_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _HighState_Response__callbacks = {
  "a1_msgs::srv",
  "HighState_Response",
  _HighState_Response__cdr_serialize,
  _HighState_Response__cdr_deserialize,
  _HighState_Response__get_serialized_size,
  _HighState_Response__max_serialized_size
};

static rosidl_message_type_support_t _HighState_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HighState_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace a1_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_a1_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<a1_msgs::srv::HighState_Response>()
{
  return &a1_msgs::srv::typesupport_fastrtps_cpp::_HighState_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, a1_msgs, srv, HighState_Response)() {
  return &a1_msgs::srv::typesupport_fastrtps_cpp::_HighState_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace a1_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _HighState__callbacks = {
  "a1_msgs::srv",
  "HighState",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, a1_msgs, srv, HighState_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, a1_msgs, srv, HighState_Response)(),
};

static rosidl_service_type_support_t _HighState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HighState__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace a1_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_a1_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<a1_msgs::srv::HighState>()
{
  return &a1_msgs::srv::typesupport_fastrtps_cpp::_HighState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, a1_msgs, srv, HighState)() {
  return &a1_msgs::srv::typesupport_fastrtps_cpp::_HighState__handle;
}

#ifdef __cplusplus
}
#endif
