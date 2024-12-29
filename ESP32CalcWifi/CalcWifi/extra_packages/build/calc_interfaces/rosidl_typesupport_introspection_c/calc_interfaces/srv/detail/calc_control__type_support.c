// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from calc_interfaces:srv/CalcControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "calc_interfaces/srv/detail/calc_control__rosidl_typesupport_introspection_c.h"
#include "calc_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "calc_interfaces/srv/detail/calc_control__functions.h"
#include "calc_interfaces/srv/detail/calc_control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void calc_interfaces__srv__CalcControl_Request__rosidl_typesupport_introspection_c__CalcControl_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  calc_interfaces__srv__CalcControl_Request__init(message_memory);
}

void calc_interfaces__srv__CalcControl_Request__rosidl_typesupport_introspection_c__CalcControl_Request_fini_function(void * message_memory)
{
  calc_interfaces__srv__CalcControl_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember calc_interfaces__srv__CalcControl_Request__rosidl_typesupport_introspection_c__CalcControl_Request_message_member_array[3] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calc_interfaces__srv__CalcControl_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calc_interfaces__srv__CalcControl_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calc_interfaces__srv__CalcControl_Request, c),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers calc_interfaces__srv__CalcControl_Request__rosidl_typesupport_introspection_c__CalcControl_Request_message_members = {
  "calc_interfaces__srv",  // message namespace
  "CalcControl_Request",  // message name
  3,  // number of fields
  sizeof(calc_interfaces__srv__CalcControl_Request),
  calc_interfaces__srv__CalcControl_Request__rosidl_typesupport_introspection_c__CalcControl_Request_message_member_array,  // message members
  calc_interfaces__srv__CalcControl_Request__rosidl_typesupport_introspection_c__CalcControl_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  calc_interfaces__srv__CalcControl_Request__rosidl_typesupport_introspection_c__CalcControl_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t calc_interfaces__srv__CalcControl_Request__rosidl_typesupport_introspection_c__CalcControl_Request_message_type_support_handle = {
  0,
  &calc_interfaces__srv__CalcControl_Request__rosidl_typesupport_introspection_c__CalcControl_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calc_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calc_interfaces, srv, CalcControl_Request)() {
  if (!calc_interfaces__srv__CalcControl_Request__rosidl_typesupport_introspection_c__CalcControl_Request_message_type_support_handle.typesupport_identifier) {
    calc_interfaces__srv__CalcControl_Request__rosidl_typesupport_introspection_c__CalcControl_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &calc_interfaces__srv__CalcControl_Request__rosidl_typesupport_introspection_c__CalcControl_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "calc_interfaces/srv/detail/calc_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "calc_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "calc_interfaces/srv/detail/calc_control__functions.h"
// already included above
// #include "calc_interfaces/srv/detail/calc_control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void calc_interfaces__srv__CalcControl_Response__rosidl_typesupport_introspection_c__CalcControl_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  calc_interfaces__srv__CalcControl_Response__init(message_memory);
}

void calc_interfaces__srv__CalcControl_Response__rosidl_typesupport_introspection_c__CalcControl_Response_fini_function(void * message_memory)
{
  calc_interfaces__srv__CalcControl_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember calc_interfaces__srv__CalcControl_Response__rosidl_typesupport_introspection_c__CalcControl_Response_message_member_array[2] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calc_interfaces__srv__CalcControl_Response, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "prod",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calc_interfaces__srv__CalcControl_Response, prod),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers calc_interfaces__srv__CalcControl_Response__rosidl_typesupport_introspection_c__CalcControl_Response_message_members = {
  "calc_interfaces__srv",  // message namespace
  "CalcControl_Response",  // message name
  2,  // number of fields
  sizeof(calc_interfaces__srv__CalcControl_Response),
  calc_interfaces__srv__CalcControl_Response__rosidl_typesupport_introspection_c__CalcControl_Response_message_member_array,  // message members
  calc_interfaces__srv__CalcControl_Response__rosidl_typesupport_introspection_c__CalcControl_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  calc_interfaces__srv__CalcControl_Response__rosidl_typesupport_introspection_c__CalcControl_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t calc_interfaces__srv__CalcControl_Response__rosidl_typesupport_introspection_c__CalcControl_Response_message_type_support_handle = {
  0,
  &calc_interfaces__srv__CalcControl_Response__rosidl_typesupport_introspection_c__CalcControl_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calc_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calc_interfaces, srv, CalcControl_Response)() {
  if (!calc_interfaces__srv__CalcControl_Response__rosidl_typesupport_introspection_c__CalcControl_Response_message_type_support_handle.typesupport_identifier) {
    calc_interfaces__srv__CalcControl_Response__rosidl_typesupport_introspection_c__CalcControl_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &calc_interfaces__srv__CalcControl_Response__rosidl_typesupport_introspection_c__CalcControl_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "calc_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "calc_interfaces/srv/detail/calc_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers calc_interfaces__srv__detail__calc_control__rosidl_typesupport_introspection_c__CalcControl_service_members = {
  "calc_interfaces__srv",  // service namespace
  "CalcControl",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // calc_interfaces__srv__detail__calc_control__rosidl_typesupport_introspection_c__CalcControl_Request_message_type_support_handle,
  NULL  // response message
  // calc_interfaces__srv__detail__calc_control__rosidl_typesupport_introspection_c__CalcControl_Response_message_type_support_handle
};

static rosidl_service_type_support_t calc_interfaces__srv__detail__calc_control__rosidl_typesupport_introspection_c__CalcControl_service_type_support_handle = {
  0,
  &calc_interfaces__srv__detail__calc_control__rosidl_typesupport_introspection_c__CalcControl_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calc_interfaces, srv, CalcControl_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calc_interfaces, srv, CalcControl_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calc_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calc_interfaces, srv, CalcControl)() {
  if (!calc_interfaces__srv__detail__calc_control__rosidl_typesupport_introspection_c__CalcControl_service_type_support_handle.typesupport_identifier) {
    calc_interfaces__srv__detail__calc_control__rosidl_typesupport_introspection_c__CalcControl_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)calc_interfaces__srv__detail__calc_control__rosidl_typesupport_introspection_c__CalcControl_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calc_interfaces, srv, CalcControl_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calc_interfaces, srv, CalcControl_Response)()->data;
  }

  return &calc_interfaces__srv__detail__calc_control__rosidl_typesupport_introspection_c__CalcControl_service_type_support_handle;
}
