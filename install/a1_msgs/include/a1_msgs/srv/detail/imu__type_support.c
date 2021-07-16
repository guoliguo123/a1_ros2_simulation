// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from a1_msgs:srv/Imu.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "a1_msgs/srv/detail/imu__rosidl_typesupport_introspection_c.h"
#include "a1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "a1_msgs/srv/detail/imu__functions.h"
#include "a1_msgs/srv/detail/imu__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Imu_Request__rosidl_typesupport_introspection_c__Imu_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  a1_msgs__srv__Imu_Request__init(message_memory);
}

void Imu_Request__rosidl_typesupport_introspection_c__Imu_Request_fini_function(void * message_memory)
{
  a1_msgs__srv__Imu_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Imu_Request__rosidl_typesupport_introspection_c__Imu_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__Imu_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Imu_Request__rosidl_typesupport_introspection_c__Imu_Request_message_members = {
  "a1_msgs__srv",  // message namespace
  "Imu_Request",  // message name
  1,  // number of fields
  sizeof(a1_msgs__srv__Imu_Request),
  Imu_Request__rosidl_typesupport_introspection_c__Imu_Request_message_member_array,  // message members
  Imu_Request__rosidl_typesupport_introspection_c__Imu_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Imu_Request__rosidl_typesupport_introspection_c__Imu_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Imu_Request__rosidl_typesupport_introspection_c__Imu_Request_message_type_support_handle = {
  0,
  &Imu_Request__rosidl_typesupport_introspection_c__Imu_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_a1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, Imu_Request)() {
  if (!Imu_Request__rosidl_typesupport_introspection_c__Imu_Request_message_type_support_handle.typesupport_identifier) {
    Imu_Request__rosidl_typesupport_introspection_c__Imu_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Imu_Request__rosidl_typesupport_introspection_c__Imu_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "a1_msgs/srv/detail/imu__rosidl_typesupport_introspection_c.h"
// already included above
// #include "a1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "a1_msgs/srv/detail/imu__functions.h"
// already included above
// #include "a1_msgs/srv/detail/imu__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Imu_Response__rosidl_typesupport_introspection_c__Imu_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  a1_msgs__srv__Imu_Response__init(message_memory);
}

void Imu_Response__rosidl_typesupport_introspection_c__Imu_Response_fini_function(void * message_memory)
{
  a1_msgs__srv__Imu_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Imu_Response__rosidl_typesupport_introspection_c__Imu_Response_message_member_array[4] = {
  {
    "quaternion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__Imu_Response, quaternion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyroscope",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__Imu_Response, gyroscope),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accelerometer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__Imu_Response, accelerometer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__Imu_Response, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Imu_Response__rosidl_typesupport_introspection_c__Imu_Response_message_members = {
  "a1_msgs__srv",  // message namespace
  "Imu_Response",  // message name
  4,  // number of fields
  sizeof(a1_msgs__srv__Imu_Response),
  Imu_Response__rosidl_typesupport_introspection_c__Imu_Response_message_member_array,  // message members
  Imu_Response__rosidl_typesupport_introspection_c__Imu_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Imu_Response__rosidl_typesupport_introspection_c__Imu_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Imu_Response__rosidl_typesupport_introspection_c__Imu_Response_message_type_support_handle = {
  0,
  &Imu_Response__rosidl_typesupport_introspection_c__Imu_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_a1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, Imu_Response)() {
  if (!Imu_Response__rosidl_typesupport_introspection_c__Imu_Response_message_type_support_handle.typesupport_identifier) {
    Imu_Response__rosidl_typesupport_introspection_c__Imu_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Imu_Response__rosidl_typesupport_introspection_c__Imu_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "a1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "a1_msgs/srv/detail/imu__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers a1_msgs__srv__detail__imu__rosidl_typesupport_introspection_c__Imu_service_members = {
  "a1_msgs__srv",  // service namespace
  "Imu",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // a1_msgs__srv__detail__imu__rosidl_typesupport_introspection_c__Imu_Request_message_type_support_handle,
  NULL  // response message
  // a1_msgs__srv__detail__imu__rosidl_typesupport_introspection_c__Imu_Response_message_type_support_handle
};

static rosidl_service_type_support_t a1_msgs__srv__detail__imu__rosidl_typesupport_introspection_c__Imu_service_type_support_handle = {
  0,
  &a1_msgs__srv__detail__imu__rosidl_typesupport_introspection_c__Imu_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, Imu_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, Imu_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_a1_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, Imu)() {
  if (!a1_msgs__srv__detail__imu__rosidl_typesupport_introspection_c__Imu_service_type_support_handle.typesupport_identifier) {
    a1_msgs__srv__detail__imu__rosidl_typesupport_introspection_c__Imu_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)a1_msgs__srv__detail__imu__rosidl_typesupport_introspection_c__Imu_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, Imu_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, Imu_Response)()->data;
  }

  return &a1_msgs__srv__detail__imu__rosidl_typesupport_introspection_c__Imu_service_type_support_handle;
}
