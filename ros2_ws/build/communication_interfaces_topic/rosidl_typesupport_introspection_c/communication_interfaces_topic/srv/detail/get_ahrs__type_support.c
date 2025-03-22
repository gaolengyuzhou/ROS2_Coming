// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from communication_interfaces_topic:srv/GetAHRS.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "communication_interfaces_topic/srv/detail/get_ahrs__rosidl_typesupport_introspection_c.h"
#include "communication_interfaces_topic/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "communication_interfaces_topic/srv/detail/get_ahrs__functions.h"
#include "communication_interfaces_topic/srv/detail/get_ahrs__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetAHRS_Request__rosidl_typesupport_introspection_c__GetAHRS_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication_interfaces_topic__srv__GetAHRS_Request__init(message_memory);
}

void GetAHRS_Request__rosidl_typesupport_introspection_c__GetAHRS_Request_fini_function(void * message_memory)
{
  communication_interfaces_topic__srv__GetAHRS_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetAHRS_Request__rosidl_typesupport_introspection_c__GetAHRS_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_interfaces_topic__srv__GetAHRS_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetAHRS_Request__rosidl_typesupport_introspection_c__GetAHRS_Request_message_members = {
  "communication_interfaces_topic__srv",  // message namespace
  "GetAHRS_Request",  // message name
  1,  // number of fields
  sizeof(communication_interfaces_topic__srv__GetAHRS_Request),
  GetAHRS_Request__rosidl_typesupport_introspection_c__GetAHRS_Request_message_member_array,  // message members
  GetAHRS_Request__rosidl_typesupport_introspection_c__GetAHRS_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetAHRS_Request__rosidl_typesupport_introspection_c__GetAHRS_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetAHRS_Request__rosidl_typesupport_introspection_c__GetAHRS_Request_message_type_support_handle = {
  0,
  &GetAHRS_Request__rosidl_typesupport_introspection_c__GetAHRS_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication_interfaces_topic
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces_topic, srv, GetAHRS_Request)() {
  if (!GetAHRS_Request__rosidl_typesupport_introspection_c__GetAHRS_Request_message_type_support_handle.typesupport_identifier) {
    GetAHRS_Request__rosidl_typesupport_introspection_c__GetAHRS_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetAHRS_Request__rosidl_typesupport_introspection_c__GetAHRS_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "communication_interfaces_topic/srv/detail/get_ahrs__rosidl_typesupport_introspection_c.h"
// already included above
// #include "communication_interfaces_topic/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "communication_interfaces_topic/srv/detail/get_ahrs__functions.h"
// already included above
// #include "communication_interfaces_topic/srv/detail/get_ahrs__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `ahrs_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetAHRS_Response__rosidl_typesupport_introspection_c__GetAHRS_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication_interfaces_topic__srv__GetAHRS_Response__init(message_memory);
}

void GetAHRS_Response__rosidl_typesupport_introspection_c__GetAHRS_Response_fini_function(void * message_memory)
{
  communication_interfaces_topic__srv__GetAHRS_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetAHRS_Response__rosidl_typesupport_introspection_c__GetAHRS_Response_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_interfaces_topic__srv__GetAHRS_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ahrs_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_interfaces_topic__srv__GetAHRS_Response, ahrs_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetAHRS_Response__rosidl_typesupport_introspection_c__GetAHRS_Response_message_members = {
  "communication_interfaces_topic__srv",  // message namespace
  "GetAHRS_Response",  // message name
  2,  // number of fields
  sizeof(communication_interfaces_topic__srv__GetAHRS_Response),
  GetAHRS_Response__rosidl_typesupport_introspection_c__GetAHRS_Response_message_member_array,  // message members
  GetAHRS_Response__rosidl_typesupport_introspection_c__GetAHRS_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetAHRS_Response__rosidl_typesupport_introspection_c__GetAHRS_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetAHRS_Response__rosidl_typesupport_introspection_c__GetAHRS_Response_message_type_support_handle = {
  0,
  &GetAHRS_Response__rosidl_typesupport_introspection_c__GetAHRS_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication_interfaces_topic
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces_topic, srv, GetAHRS_Response)() {
  GetAHRS_Response__rosidl_typesupport_introspection_c__GetAHRS_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!GetAHRS_Response__rosidl_typesupport_introspection_c__GetAHRS_Response_message_type_support_handle.typesupport_identifier) {
    GetAHRS_Response__rosidl_typesupport_introspection_c__GetAHRS_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetAHRS_Response__rosidl_typesupport_introspection_c__GetAHRS_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "communication_interfaces_topic/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "communication_interfaces_topic/srv/detail/get_ahrs__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers communication_interfaces_topic__srv__detail__get_ahrs__rosidl_typesupport_introspection_c__GetAHRS_service_members = {
  "communication_interfaces_topic__srv",  // service namespace
  "GetAHRS",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // communication_interfaces_topic__srv__detail__get_ahrs__rosidl_typesupport_introspection_c__GetAHRS_Request_message_type_support_handle,
  NULL  // response message
  // communication_interfaces_topic__srv__detail__get_ahrs__rosidl_typesupport_introspection_c__GetAHRS_Response_message_type_support_handle
};

static rosidl_service_type_support_t communication_interfaces_topic__srv__detail__get_ahrs__rosidl_typesupport_introspection_c__GetAHRS_service_type_support_handle = {
  0,
  &communication_interfaces_topic__srv__detail__get_ahrs__rosidl_typesupport_introspection_c__GetAHRS_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces_topic, srv, GetAHRS_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces_topic, srv, GetAHRS_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication_interfaces_topic
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces_topic, srv, GetAHRS)() {
  if (!communication_interfaces_topic__srv__detail__get_ahrs__rosidl_typesupport_introspection_c__GetAHRS_service_type_support_handle.typesupport_identifier) {
    communication_interfaces_topic__srv__detail__get_ahrs__rosidl_typesupport_introspection_c__GetAHRS_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)communication_interfaces_topic__srv__detail__get_ahrs__rosidl_typesupport_introspection_c__GetAHRS_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces_topic, srv, GetAHRS_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces_topic, srv, GetAHRS_Response)()->data;
  }

  return &communication_interfaces_topic__srv__detail__get_ahrs__rosidl_typesupport_introspection_c__GetAHRS_service_type_support_handle;
}
