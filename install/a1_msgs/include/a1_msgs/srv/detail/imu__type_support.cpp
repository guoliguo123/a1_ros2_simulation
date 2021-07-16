// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from a1_msgs:srv/Imu.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "a1_msgs/srv/detail/imu__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace a1_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Imu_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) a1_msgs::srv::Imu_Request(_init);
}

void Imu_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<a1_msgs::srv::Imu_Request *>(message_memory);
  typed_message->~Imu_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Imu_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::srv::Imu_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Imu_Request_message_members = {
  "a1_msgs::srv",  // message namespace
  "Imu_Request",  // message name
  1,  // number of fields
  sizeof(a1_msgs::srv::Imu_Request),
  Imu_Request_message_member_array,  // message members
  Imu_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Imu_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Imu_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Imu_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace a1_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<a1_msgs::srv::Imu_Request>()
{
  return &::a1_msgs::srv::rosidl_typesupport_introspection_cpp::Imu_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, a1_msgs, srv, Imu_Request)() {
  return &::a1_msgs::srv::rosidl_typesupport_introspection_cpp::Imu_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "a1_msgs/srv/detail/imu__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace a1_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Imu_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) a1_msgs::srv::Imu_Response(_init);
}

void Imu_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<a1_msgs::srv::Imu_Response *>(message_memory);
  typed_message->~Imu_Response();
}

size_t size_function__Imu_Response__quaternion(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__Imu_Response__quaternion(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__Imu_Response__quaternion(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__Imu_Response__gyroscope(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Imu_Response__gyroscope(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Imu_Response__gyroscope(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Imu_Response__accelerometer(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Imu_Response__accelerometer(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Imu_Response__accelerometer(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Imu_Response_message_member_array[4] = {
  {
    "quaternion",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::srv::Imu_Response, quaternion),  // bytes offset in struct
    nullptr,  // default value
    size_function__Imu_Response__quaternion,  // size() function pointer
    get_const_function__Imu_Response__quaternion,  // get_const(index) function pointer
    get_function__Imu_Response__quaternion,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyroscope",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::srv::Imu_Response, gyroscope),  // bytes offset in struct
    nullptr,  // default value
    size_function__Imu_Response__gyroscope,  // size() function pointer
    get_const_function__Imu_Response__gyroscope,  // get_const(index) function pointer
    get_function__Imu_Response__gyroscope,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accelerometer",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::srv::Imu_Response, accelerometer),  // bytes offset in struct
    nullptr,  // default value
    size_function__Imu_Response__accelerometer,  // size() function pointer
    get_const_function__Imu_Response__accelerometer,  // get_const(index) function pointer
    get_function__Imu_Response__accelerometer,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs::srv::Imu_Response, temperature),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Imu_Response_message_members = {
  "a1_msgs::srv",  // message namespace
  "Imu_Response",  // message name
  4,  // number of fields
  sizeof(a1_msgs::srv::Imu_Response),
  Imu_Response_message_member_array,  // message members
  Imu_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Imu_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Imu_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Imu_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace a1_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<a1_msgs::srv::Imu_Response>()
{
  return &::a1_msgs::srv::rosidl_typesupport_introspection_cpp::Imu_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, a1_msgs, srv, Imu_Response)() {
  return &::a1_msgs::srv::rosidl_typesupport_introspection_cpp::Imu_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "a1_msgs/srv/detail/imu__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace a1_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Imu_service_members = {
  "a1_msgs::srv",  // service namespace
  "Imu",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<a1_msgs::srv::Imu>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t Imu_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Imu_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace a1_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<a1_msgs::srv::Imu>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::a1_msgs::srv::rosidl_typesupport_introspection_cpp::Imu_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::a1_msgs::srv::Imu_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::a1_msgs::srv::Imu_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, a1_msgs, srv, Imu)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<a1_msgs::srv::Imu>();
}

#ifdef __cplusplus
}
#endif
