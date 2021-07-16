// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from a1_msgs:srv/LowState.idl
// generated code does not contain a copyright notice
#include "a1_msgs/srv/detail/low_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "a1_msgs/srv/detail/low_state__struct.hpp"

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
  const a1_msgs::srv::LowState_Request & ros_message,
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
  a1_msgs::srv::LowState_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
get_serialized_size(
  const a1_msgs::srv::LowState_Request & ros_message,
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
max_serialized_size_LowState_Request(
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

static bool _LowState_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const a1_msgs::srv::LowState_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LowState_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<a1_msgs::srv::LowState_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LowState_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const a1_msgs::srv::LowState_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LowState_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LowState_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _LowState_Request__callbacks = {
  "a1_msgs::srv",
  "LowState_Request",
  _LowState_Request__cdr_serialize,
  _LowState_Request__cdr_deserialize,
  _LowState_Request__get_serialized_size,
  _LowState_Request__max_serialized_size
};

static rosidl_message_type_support_t _LowState_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LowState_Request__callbacks,
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
get_message_type_support_handle<a1_msgs::srv::LowState_Request>()
{
  return &a1_msgs::srv::typesupport_fastrtps_cpp::_LowState_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, a1_msgs, srv, LowState_Request)() {
  return &a1_msgs::srv::typesupport_fastrtps_cpp::_LowState_Request__handle;
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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
cdr_serialize(
  const a1_msgs::srv::LowState_Response & ros_message,
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
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  a1_msgs::srv::LowState_Response & ros_message)
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

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
get_serialized_size(
  const a1_msgs::srv::LowState_Response & ros_message,
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

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
max_serialized_size_LowState_Response(
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

  return current_alignment - initial_alignment;
}

static bool _LowState_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const a1_msgs::srv::LowState_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LowState_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<a1_msgs::srv::LowState_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LowState_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const a1_msgs::srv::LowState_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LowState_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LowState_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _LowState_Response__callbacks = {
  "a1_msgs::srv",
  "LowState_Response",
  _LowState_Response__cdr_serialize,
  _LowState_Response__cdr_deserialize,
  _LowState_Response__get_serialized_size,
  _LowState_Response__max_serialized_size
};

static rosidl_message_type_support_t _LowState_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LowState_Response__callbacks,
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
get_message_type_support_handle<a1_msgs::srv::LowState_Response>()
{
  return &a1_msgs::srv::typesupport_fastrtps_cpp::_LowState_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, a1_msgs, srv, LowState_Response)() {
  return &a1_msgs::srv::typesupport_fastrtps_cpp::_LowState_Response__handle;
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

static service_type_support_callbacks_t _LowState__callbacks = {
  "a1_msgs::srv",
  "LowState",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, a1_msgs, srv, LowState_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, a1_msgs, srv, LowState_Response)(),
};

static rosidl_service_type_support_t _LowState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LowState__callbacks,
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
get_service_type_support_handle<a1_msgs::srv::LowState>()
{
  return &a1_msgs::srv::typesupport_fastrtps_cpp::_LowState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, a1_msgs, srv, LowState)() {
  return &a1_msgs::srv::typesupport_fastrtps_cpp::_LowState__handle;
}

#ifdef __cplusplus
}
#endif
