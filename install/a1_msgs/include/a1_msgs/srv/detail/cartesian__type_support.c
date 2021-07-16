// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from a1_msgs:srv/Cartesian.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "a1_msgs/srv/detail/cartesian__rosidl_typesupport_introspection_c.h"
#include "a1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "a1_msgs/srv/detail/cartesian__functions.h"
#include "a1_msgs/srv/detail/cartesian__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Cartesian_Request__rosidl_typesupport_introspection_c__Cartesian_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  a1_msgs__srv__Cartesian_Request__init(message_memory);
}

void Cartesian_Request__rosidl_typesupport_introspection_c__Cartesian_Request_fini_function(void * message_memory)
{
  a1_msgs__srv__Cartesian_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Cartesian_Request__rosidl_typesupport_introspection_c__Cartesian_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__Cartesian_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Cartesian_Request__rosidl_typesupport_introspection_c__Cartesian_Request_message_members = {
  "a1_msgs__srv",  // message namespace
  "Cartesian_Request",  // message name
  1,  // number of fields
  sizeof(a1_msgs__srv__Cartesian_Request),
  Cartesian_Request__rosidl_typesupport_introspection_c__Cartesian_Request_message_member_array,  // message members
  Cartesian_Request__rosidl_typesupport_introspection_c__Cartesian_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Cartesian_Request__rosidl_typesupport_introspection_c__Cartesian_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Cartesian_Request__rosidl_typesupport_introspection_c__Cartesian_Request_message_type_support_handle = {
  0,
  &Cartesian_Request__rosidl_typesupport_introspection_c__Cartesian_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_a1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, Cartesian_Request)() {
  if (!Cartesian_Request__rosidl_typesupport_introspection_c__Cartesian_Request_message_type_support_handle.typesupport_identifier) {
    Cartesian_Request__rosidl_typesupport_introspection_c__Cartesian_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Cartesian_Request__rosidl_typesupport_introspection_c__Cartesian_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "a1_msgs/srv/detail/cartesian__rosidl_typesupport_introspection_c.h"
// already included above
// #include "a1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "a1_msgs/srv/detail/cartesian__functions.h"
// already included above
// #include "a1_msgs/srv/detail/cartesian__struct.h"


// Include directives for member types
// Member `footposition2body`
// Member `footspeed2body`
#include "a1_msgs/msg/cartesian.h"
// Member `footposition2body`
// Member `footspeed2body`
#include "a1_msgs/msg/detail/cartesian__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Cartesian_Response__rosidl_typesupport_introspection_c__Cartesian_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  a1_msgs__srv__Cartesian_Response__init(message_memory);
}

void Cartesian_Response__rosidl_typesupport_introspection_c__Cartesian_Response_fini_function(void * message_memory)
{
  a1_msgs__srv__Cartesian_Response__fini(message_memory);
}

size_t Cartesian_Response__rosidl_typesupport_introspection_c__size_function__Cartesian__footposition2body(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * Cartesian_Response__rosidl_typesupport_introspection_c__get_const_function__Cartesian__footposition2body(
  const void * untyped_member, size_t index)
{
  const a1_msgs__msg__Cartesian ** member =
    (const a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

void * Cartesian_Response__rosidl_typesupport_introspection_c__get_function__Cartesian__footposition2body(
  void * untyped_member, size_t index)
{
  a1_msgs__msg__Cartesian ** member =
    (a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

size_t Cartesian_Response__rosidl_typesupport_introspection_c__size_function__Cartesian__footspeed2body(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * Cartesian_Response__rosidl_typesupport_introspection_c__get_const_function__Cartesian__footspeed2body(
  const void * untyped_member, size_t index)
{
  const a1_msgs__msg__Cartesian ** member =
    (const a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

void * Cartesian_Response__rosidl_typesupport_introspection_c__get_function__Cartesian__footspeed2body(
  void * untyped_member, size_t index)
{
  a1_msgs__msg__Cartesian ** member =
    (a1_msgs__msg__Cartesian **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember Cartesian_Response__rosidl_typesupport_introspection_c__Cartesian_Response_message_member_array[2] = {
  {
    "footposition2body",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__Cartesian_Response, footposition2body),  // bytes offset in struct
    NULL,  // default value
    Cartesian_Response__rosidl_typesupport_introspection_c__size_function__Cartesian__footposition2body,  // size() function pointer
    Cartesian_Response__rosidl_typesupport_introspection_c__get_const_function__Cartesian__footposition2body,  // get_const(index) function pointer
    Cartesian_Response__rosidl_typesupport_introspection_c__get_function__Cartesian__footposition2body,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "footspeed2body",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__Cartesian_Response, footspeed2body),  // bytes offset in struct
    NULL,  // default value
    Cartesian_Response__rosidl_typesupport_introspection_c__size_function__Cartesian__footspeed2body,  // size() function pointer
    Cartesian_Response__rosidl_typesupport_introspection_c__get_const_function__Cartesian__footspeed2body,  // get_const(index) function pointer
    Cartesian_Response__rosidl_typesupport_introspection_c__get_function__Cartesian__footspeed2body,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Cartesian_Response__rosidl_typesupport_introspection_c__Cartesian_Response_message_members = {
  "a1_msgs__srv",  // message namespace
  "Cartesian_Response",  // message name
  2,  // number of fields
  sizeof(a1_msgs__srv__Cartesian_Response),
  Cartesian_Response__rosidl_typesupport_introspection_c__Cartesian_Response_message_member_array,  // message members
  Cartesian_Response__rosidl_typesupport_introspection_c__Cartesian_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Cartesian_Response__rosidl_typesupport_introspection_c__Cartesian_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Cartesian_Response__rosidl_typesupport_introspection_c__Cartesian_Response_message_type_support_handle = {
  0,
  &Cartesian_Response__rosidl_typesupport_introspection_c__Cartesian_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_a1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, Cartesian_Response)() {
  Cartesian_Response__rosidl_typesupport_introspection_c__Cartesian_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, Cartesian)();
  Cartesian_Response__rosidl_typesupport_introspection_c__Cartesian_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, Cartesian)();
  if (!Cartesian_Response__rosidl_typesupport_introspection_c__Cartesian_Response_message_type_support_handle.typesupport_identifier) {
    Cartesian_Response__rosidl_typesupport_introspection_c__Cartesian_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Cartesian_Response__rosidl_typesupport_introspection_c__Cartesian_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "a1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "a1_msgs/srv/detail/cartesian__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers a1_msgs__srv__detail__cartesian__rosidl_typesupport_introspection_c__Cartesian_service_members = {
  "a1_msgs__srv",  // service namespace
  "Cartesian",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // a1_msgs__srv__detail__cartesian__rosidl_typesupport_introspection_c__Cartesian_Request_message_type_support_handle,
  NULL  // response message
  // a1_msgs__srv__detail__cartesian__rosidl_typesupport_introspection_c__Cartesian_Response_message_type_support_handle
};

static rosidl_service_type_support_t a1_msgs__srv__detail__cartesian__rosidl_typesupport_introspection_c__Cartesian_service_type_support_handle = {
  0,
  &a1_msgs__srv__detail__cartesian__rosidl_typesupport_introspection_c__Cartesian_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, Cartesian_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, Cartesian_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_a1_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, Cartesian)() {
  if (!a1_msgs__srv__detail__cartesian__rosidl_typesupport_introspection_c__Cartesian_service_type_support_handle.typesupport_identifier) {
    a1_msgs__srv__detail__cartesian__rosidl_typesupport_introspection_c__Cartesian_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)a1_msgs__srv__detail__cartesian__rosidl_typesupport_introspection_c__Cartesian_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, Cartesian_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, Cartesian_Response)()->data;
  }

  return &a1_msgs__srv__detail__cartesian__rosidl_typesupport_introspection_c__Cartesian_service_type_support_handle;
}
