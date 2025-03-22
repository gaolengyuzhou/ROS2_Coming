// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from communication_interfaces_topic:srv/GetAHRS.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "communication_interfaces_topic/msg/rosidl_typesupport_c__visibility_control.h"
#include "communication_interfaces_topic/srv/detail/get_ahrs__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace communication_interfaces_topic
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetAHRS_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetAHRS_Request_type_support_ids_t;

static const _GetAHRS_Request_type_support_ids_t _GetAHRS_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetAHRS_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetAHRS_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetAHRS_Request_type_support_symbol_names_t _GetAHRS_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, communication_interfaces_topic, srv, GetAHRS_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces_topic, srv, GetAHRS_Request)),
  }
};

typedef struct _GetAHRS_Request_type_support_data_t
{
  void * data[2];
} _GetAHRS_Request_type_support_data_t;

static _GetAHRS_Request_type_support_data_t _GetAHRS_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetAHRS_Request_message_typesupport_map = {
  2,
  "communication_interfaces_topic",
  &_GetAHRS_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetAHRS_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetAHRS_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetAHRS_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetAHRS_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace communication_interfaces_topic

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_communication_interfaces_topic
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, communication_interfaces_topic, srv, GetAHRS_Request)() {
  return &::communication_interfaces_topic::srv::rosidl_typesupport_c::GetAHRS_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "communication_interfaces_topic/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "communication_interfaces_topic/srv/detail/get_ahrs__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace communication_interfaces_topic
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetAHRS_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetAHRS_Response_type_support_ids_t;

static const _GetAHRS_Response_type_support_ids_t _GetAHRS_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetAHRS_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetAHRS_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetAHRS_Response_type_support_symbol_names_t _GetAHRS_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, communication_interfaces_topic, srv, GetAHRS_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces_topic, srv, GetAHRS_Response)),
  }
};

typedef struct _GetAHRS_Response_type_support_data_t
{
  void * data[2];
} _GetAHRS_Response_type_support_data_t;

static _GetAHRS_Response_type_support_data_t _GetAHRS_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetAHRS_Response_message_typesupport_map = {
  2,
  "communication_interfaces_topic",
  &_GetAHRS_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetAHRS_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetAHRS_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetAHRS_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetAHRS_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace communication_interfaces_topic

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_communication_interfaces_topic
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, communication_interfaces_topic, srv, GetAHRS_Response)() {
  return &::communication_interfaces_topic::srv::rosidl_typesupport_c::GetAHRS_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "communication_interfaces_topic/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace communication_interfaces_topic
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetAHRS_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetAHRS_type_support_ids_t;

static const _GetAHRS_type_support_ids_t _GetAHRS_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetAHRS_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetAHRS_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetAHRS_type_support_symbol_names_t _GetAHRS_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, communication_interfaces_topic, srv, GetAHRS)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces_topic, srv, GetAHRS)),
  }
};

typedef struct _GetAHRS_type_support_data_t
{
  void * data[2];
} _GetAHRS_type_support_data_t;

static _GetAHRS_type_support_data_t _GetAHRS_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetAHRS_service_typesupport_map = {
  2,
  "communication_interfaces_topic",
  &_GetAHRS_service_typesupport_ids.typesupport_identifier[0],
  &_GetAHRS_service_typesupport_symbol_names.symbol_name[0],
  &_GetAHRS_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetAHRS_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetAHRS_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace communication_interfaces_topic

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_communication_interfaces_topic
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, communication_interfaces_topic, srv, GetAHRS)() {
  return &::communication_interfaces_topic::srv::rosidl_typesupport_c::GetAHRS_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
