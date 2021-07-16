// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from a1_msgs:srv/Imu.idl
// generated code does not contain a copyright notice
#include "a1_msgs/srv/detail/imu__rosidl_typesupport_fastrtps_cpp.hpp"
#include "a1_msgs/srv/detail/imu__struct.hpp"

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
  const a1_msgs::srv::Imu_Request & ros_message,
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
  a1_msgs::srv::Imu_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
get_serialized_size(
  const a1_msgs::srv::Imu_Request & ros_message,
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
max_serialized_size_Imu_Request(
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

static bool _Imu_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const a1_msgs::srv::Imu_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Imu_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<a1_msgs::srv::Imu_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Imu_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const a1_msgs::srv::Imu_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Imu_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Imu_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Imu_Request__callbacks = {
  "a1_msgs::srv",
  "Imu_Request",
  _Imu_Request__cdr_serialize,
  _Imu_Request__cdr_deserialize,
  _Imu_Request__get_serialized_size,
  _Imu_Request__max_serialized_size
};

static rosidl_message_type_support_t _Imu_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Imu_Request__callbacks,
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
get_message_type_support_handle<a1_msgs::srv::Imu_Request>()
{
  return &a1_msgs::srv::typesupport_fastrtps_cpp::_Imu_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, a1_msgs, srv, Imu_Request)() {
  return &a1_msgs::srv::typesupport_fastrtps_cpp::_Imu_Request__handle;
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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
cdr_serialize(
  const a1_msgs::srv::Imu_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: quaternion
  {
    cdr << ros_message.quaternion;
  }
  // Member: gyroscope
  {
    cdr << ros_message.gyroscope;
  }
  // Member: accelerometer
  {
    cdr << ros_message.accelerometer;
  }
  // Member: temperature
  cdr << ros_message.temperature;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  a1_msgs::srv::Imu_Response & ros_message)
{
  // Member: quaternion
  {
    cdr >> ros_message.quaternion;
  }

  // Member: gyroscope
  {
    cdr >> ros_message.gyroscope;
  }

  // Member: accelerometer
  {
    cdr >> ros_message.accelerometer;
  }

  // Member: temperature
  cdr >> ros_message.temperature;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
get_serialized_size(
  const a1_msgs::srv::Imu_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: quaternion
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.quaternion[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyroscope
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.gyroscope[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accelerometer
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.accelerometer[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_a1_msgs
max_serialized_size_Imu_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: quaternion
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyroscope
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accelerometer
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Imu_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const a1_msgs::srv::Imu_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Imu_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<a1_msgs::srv::Imu_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Imu_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const a1_msgs::srv::Imu_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Imu_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Imu_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Imu_Response__callbacks = {
  "a1_msgs::srv",
  "Imu_Response",
  _Imu_Response__cdr_serialize,
  _Imu_Response__cdr_deserialize,
  _Imu_Response__get_serialized_size,
  _Imu_Response__max_serialized_size
};

static rosidl_message_type_support_t _Imu_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Imu_Response__callbacks,
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
get_message_type_support_handle<a1_msgs::srv::Imu_Response>()
{
  return &a1_msgs::srv::typesupport_fastrtps_cpp::_Imu_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, a1_msgs, srv, Imu_Response)() {
  return &a1_msgs::srv::typesupport_fastrtps_cpp::_Imu_Response__handle;
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

static service_type_support_callbacks_t _Imu__callbacks = {
  "a1_msgs::srv",
  "Imu",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, a1_msgs, srv, Imu_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, a1_msgs, srv, Imu_Response)(),
};

static rosidl_service_type_support_t _Imu__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Imu__callbacks,
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
get_service_type_support_handle<a1_msgs::srv::Imu>()
{
  return &a1_msgs::srv::typesupport_fastrtps_cpp::_Imu__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, a1_msgs, srv, Imu)() {
  return &a1_msgs::srv::typesupport_fastrtps_cpp::_Imu__handle;
}

#ifdef __cplusplus
}
#endif
