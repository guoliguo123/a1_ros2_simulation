// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from a1_msgs:srv/LowState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "a1_msgs/srv/detail/low_state__rosidl_typesupport_introspection_c.h"
#include "a1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "a1_msgs/srv/detail/low_state__functions.h"
#include "a1_msgs/srv/detail/low_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void LowState_Request__rosidl_typesupport_introspection_c__LowState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  a1_msgs__srv__LowState_Request__init(message_memory);
}

void LowState_Request__rosidl_typesupport_introspection_c__LowState_Request_fini_function(void * message_memory)
{
  a1_msgs__srv__LowState_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LowState_Request__rosidl_typesupport_introspection_c__LowState_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__LowState_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LowState_Request__rosidl_typesupport_introspection_c__LowState_Request_message_members = {
  "a1_msgs__srv",  // message namespace
  "LowState_Request",  // message name
  1,  // number of fields
  sizeof(a1_msgs__srv__LowState_Request),
  LowState_Request__rosidl_typesupport_introspection_c__LowState_Request_message_member_array,  // message members
  LowState_Request__rosidl_typesupport_introspection_c__LowState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  LowState_Request__rosidl_typesupport_introspection_c__LowState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LowState_Request__rosidl_typesupport_introspection_c__LowState_Request_message_type_support_handle = {
  0,
  &LowState_Request__rosidl_typesupport_introspection_c__LowState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_a1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, LowState_Request)() {
  if (!LowState_Request__rosidl_typesupport_introspection_c__LowState_Request_message_type_support_handle.typesupport_identifier) {
    LowState_Request__rosidl_typesupport_introspection_c__LowState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LowState_Request__rosidl_typesupport_introspection_c__LowState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "a1_msgs/srv/detail/low_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "a1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "a1_msgs/srv/detail/low_state__functions.h"
// already included above
// #include "a1_msgs/srv/detail/low_state__struct.h"


// Include directives for member types
// Member `imu`
#include "a1_msgs/msg/imu.h"
// Member `imu`
#include "a1_msgs/msg/detail/imu__rosidl_typesupport_introspection_c.h"
// Member `motorstate`
#include "a1_msgs/msg/motor_state.h"
// Member `motorstate`
#include "a1_msgs/msg/detail/motor_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LowState_Response__rosidl_typesupport_introspection_c__LowState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  a1_msgs__srv__LowState_Response__init(message_memory);
}

void LowState_Response__rosidl_typesupport_introspection_c__LowState_Response_fini_function(void * message_memory)
{
  a1_msgs__srv__LowState_Response__fini(message_memory);
}

size_t LowState_Response__rosidl_typesupport_introspection_c__size_function__MotorState__motorstate(
  const void * untyped_member)
{
  (void)untyped_member;
  return 20;
}

const void * LowState_Response__rosidl_typesupport_introspection_c__get_const_function__MotorState__motorstate(
  const void * untyped_member, size_t index)
{
  const a1_msgs__msg__MotorState ** member =
    (const a1_msgs__msg__MotorState **)(untyped_member);
  return &(*member)[index];
}

void * LowState_Response__rosidl_typesupport_introspection_c__get_function__MotorState__motorstate(
  void * untyped_member, size_t index)
{
  a1_msgs__msg__MotorState ** member =
    (a1_msgs__msg__MotorState **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember LowState_Response__rosidl_typesupport_introspection_c__LowState_Response_message_member_array[13] = {
  {
    "levelflag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__LowState_Response, levelflag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commversion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__LowState_Response, commversion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robotid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__LowState_Response, robotid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__LowState_Response, sn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bandwidth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__LowState_Response, bandwidth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__LowState_Response, imu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motorstate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    20,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__LowState_Response, motorstate),  // bytes offset in struct
    NULL,  // default value
    LowState_Response__rosidl_typesupport_introspection_c__size_function__MotorState__motorstate,  // size() function pointer
    LowState_Response__rosidl_typesupport_introspection_c__get_const_function__MotorState__motorstate,  // get_const(index) function pointer
    LowState_Response__rosidl_typesupport_introspection_c__get_function__MotorState__motorstate,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "footforce",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__LowState_Response, footforce),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "footforceest",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__LowState_Response, footforceest),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tick",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__LowState_Response, tick),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wirelessremote",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    40,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__LowState_Response, wirelessremote),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserve",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__LowState_Response, reserve),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "crc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(a1_msgs__srv__LowState_Response, crc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LowState_Response__rosidl_typesupport_introspection_c__LowState_Response_message_members = {
  "a1_msgs__srv",  // message namespace
  "LowState_Response",  // message name
  13,  // number of fields
  sizeof(a1_msgs__srv__LowState_Response),
  LowState_Response__rosidl_typesupport_introspection_c__LowState_Response_message_member_array,  // message members
  LowState_Response__rosidl_typesupport_introspection_c__LowState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  LowState_Response__rosidl_typesupport_introspection_c__LowState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LowState_Response__rosidl_typesupport_introspection_c__LowState_Response_message_type_support_handle = {
  0,
  &LowState_Response__rosidl_typesupport_introspection_c__LowState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_a1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, LowState_Response)() {
  LowState_Response__rosidl_typesupport_introspection_c__LowState_Response_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, IMU)();
  LowState_Response__rosidl_typesupport_introspection_c__LowState_Response_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, msg, MotorState)();
  if (!LowState_Response__rosidl_typesupport_introspection_c__LowState_Response_message_type_support_handle.typesupport_identifier) {
    LowState_Response__rosidl_typesupport_introspection_c__LowState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LowState_Response__rosidl_typesupport_introspection_c__LowState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "a1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "a1_msgs/srv/detail/low_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers a1_msgs__srv__detail__low_state__rosidl_typesupport_introspection_c__LowState_service_members = {
  "a1_msgs__srv",  // service namespace
  "LowState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // a1_msgs__srv__detail__low_state__rosidl_typesupport_introspection_c__LowState_Request_message_type_support_handle,
  NULL  // response message
  // a1_msgs__srv__detail__low_state__rosidl_typesupport_introspection_c__LowState_Response_message_type_support_handle
};

static rosidl_service_type_support_t a1_msgs__srv__detail__low_state__rosidl_typesupport_introspection_c__LowState_service_type_support_handle = {
  0,
  &a1_msgs__srv__detail__low_state__rosidl_typesupport_introspection_c__LowState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, LowState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, LowState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_a1_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, LowState)() {
  if (!a1_msgs__srv__detail__low_state__rosidl_typesupport_introspection_c__LowState_service_type_support_handle.typesupport_identifier) {
    a1_msgs__srv__detail__low_state__rosidl_typesupport_introspection_c__LowState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)a1_msgs__srv__detail__low_state__rosidl_typesupport_introspection_c__LowState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, LowState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, a1_msgs, srv, LowState_Response)()->data;
  }

  return &a1_msgs__srv__detail__low_state__rosidl_typesupport_introspection_c__LowState_service_type_support_handle;
}
