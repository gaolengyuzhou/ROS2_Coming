// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from interfaces1:srv/Sermsg.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "interfaces1/srv/detail/sermsg__struct.h"
#include "interfaces1/srv/detail/sermsg__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace interfaces1
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Sermsg_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Sermsg_Request_type_support_ids_t;

static const _Sermsg_Request_type_support_ids_t _Sermsg_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Sermsg_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Sermsg_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Sermsg_Request_type_support_symbol_names_t _Sermsg_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces1, srv, Sermsg_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces1, srv, Sermsg_Request)),
  }
};

typedef struct _Sermsg_Request_type_support_data_t
{
  void * data[2];
} _Sermsg_Request_type_support_data_t;

static _Sermsg_Request_type_support_data_t _Sermsg_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Sermsg_Request_message_typesupport_map = {
  2,
  "interfaces1",
  &_Sermsg_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Sermsg_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Sermsg_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Sermsg_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Sermsg_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interfaces1

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interfaces1, srv, Sermsg_Request)() {
  return &::interfaces1::srv::rosidl_typesupport_c::Sermsg_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces1/srv/detail/sermsg__struct.h"
// already included above
// #include "interfaces1/srv/detail/sermsg__type_support.h"
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

namespace interfaces1
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Sermsg_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Sermsg_Response_type_support_ids_t;

static const _Sermsg_Response_type_support_ids_t _Sermsg_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Sermsg_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Sermsg_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Sermsg_Response_type_support_symbol_names_t _Sermsg_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces1, srv, Sermsg_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces1, srv, Sermsg_Response)),
  }
};

typedef struct _Sermsg_Response_type_support_data_t
{
  void * data[2];
} _Sermsg_Response_type_support_data_t;

static _Sermsg_Response_type_support_data_t _Sermsg_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Sermsg_Response_message_typesupport_map = {
  2,
  "interfaces1",
  &_Sermsg_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Sermsg_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Sermsg_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Sermsg_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Sermsg_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interfaces1

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interfaces1, srv, Sermsg_Response)() {
  return &::interfaces1::srv::rosidl_typesupport_c::Sermsg_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interfaces1/srv/detail/sermsg__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces1
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Sermsg_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Sermsg_type_support_ids_t;

static const _Sermsg_type_support_ids_t _Sermsg_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Sermsg_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Sermsg_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Sermsg_type_support_symbol_names_t _Sermsg_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces1, srv, Sermsg)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces1, srv, Sermsg)),
  }
};

typedef struct _Sermsg_type_support_data_t
{
  void * data[2];
} _Sermsg_type_support_data_t;

static _Sermsg_type_support_data_t _Sermsg_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Sermsg_service_typesupport_map = {
  2,
  "interfaces1",
  &_Sermsg_service_typesupport_ids.typesupport_identifier[0],
  &_Sermsg_service_typesupport_symbol_names.symbol_name[0],
  &_Sermsg_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Sermsg_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Sermsg_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interfaces1

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, interfaces1, srv, Sermsg)() {
  return &::interfaces1::srv::rosidl_typesupport_c::Sermsg_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
