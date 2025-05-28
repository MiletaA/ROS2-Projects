// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from act_mov_interfaces:action/Navigate.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "act_mov_interfaces/action/detail/navigate__struct.h"
#include "act_mov_interfaces/action/detail/navigate__type_support.h"
#include "act_mov_interfaces/action/detail/navigate__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace act_mov_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Navigate_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_Goal_type_support_ids_t;

static const _Navigate_Goal_type_support_ids_t _Navigate_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Navigate_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Navigate_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Navigate_Goal_type_support_symbol_names_t _Navigate_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, act_mov_interfaces, action, Navigate_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, act_mov_interfaces, action, Navigate_Goal)),
  }
};

typedef struct _Navigate_Goal_type_support_data_t
{
  void * data[2];
} _Navigate_Goal_type_support_data_t;

static _Navigate_Goal_type_support_data_t _Navigate_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Navigate_Goal_message_typesupport_map = {
  2,
  "act_mov_interfaces",
  &_Navigate_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &act_mov_interfaces__action__Navigate_Goal__get_type_hash,
  &act_mov_interfaces__action__Navigate_Goal__get_type_description,
  &act_mov_interfaces__action__Navigate_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace act_mov_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, act_mov_interfaces, action, Navigate_Goal)() {
  return &::act_mov_interfaces::action::rosidl_typesupport_c::Navigate_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__type_support.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__functions.h"
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

namespace act_mov_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Navigate_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_Result_type_support_ids_t;

static const _Navigate_Result_type_support_ids_t _Navigate_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Navigate_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Navigate_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Navigate_Result_type_support_symbol_names_t _Navigate_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, act_mov_interfaces, action, Navigate_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, act_mov_interfaces, action, Navigate_Result)),
  }
};

typedef struct _Navigate_Result_type_support_data_t
{
  void * data[2];
} _Navigate_Result_type_support_data_t;

static _Navigate_Result_type_support_data_t _Navigate_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Navigate_Result_message_typesupport_map = {
  2,
  "act_mov_interfaces",
  &_Navigate_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &act_mov_interfaces__action__Navigate_Result__get_type_hash,
  &act_mov_interfaces__action__Navigate_Result__get_type_description,
  &act_mov_interfaces__action__Navigate_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace act_mov_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, act_mov_interfaces, action, Navigate_Result)() {
  return &::act_mov_interfaces::action::rosidl_typesupport_c::Navigate_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__type_support.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__functions.h"
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

namespace act_mov_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Navigate_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_Feedback_type_support_ids_t;

static const _Navigate_Feedback_type_support_ids_t _Navigate_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Navigate_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Navigate_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Navigate_Feedback_type_support_symbol_names_t _Navigate_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, act_mov_interfaces, action, Navigate_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, act_mov_interfaces, action, Navigate_Feedback)),
  }
};

typedef struct _Navigate_Feedback_type_support_data_t
{
  void * data[2];
} _Navigate_Feedback_type_support_data_t;

static _Navigate_Feedback_type_support_data_t _Navigate_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Navigate_Feedback_message_typesupport_map = {
  2,
  "act_mov_interfaces",
  &_Navigate_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &act_mov_interfaces__action__Navigate_Feedback__get_type_hash,
  &act_mov_interfaces__action__Navigate_Feedback__get_type_description,
  &act_mov_interfaces__action__Navigate_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace act_mov_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, act_mov_interfaces, action, Navigate_Feedback)() {
  return &::act_mov_interfaces::action::rosidl_typesupport_c::Navigate_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__type_support.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__functions.h"
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

namespace act_mov_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Navigate_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_SendGoal_Request_type_support_ids_t;

static const _Navigate_SendGoal_Request_type_support_ids_t _Navigate_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Navigate_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Navigate_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Navigate_SendGoal_Request_type_support_symbol_names_t _Navigate_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, act_mov_interfaces, action, Navigate_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, act_mov_interfaces, action, Navigate_SendGoal_Request)),
  }
};

typedef struct _Navigate_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Navigate_SendGoal_Request_type_support_data_t;

static _Navigate_SendGoal_Request_type_support_data_t _Navigate_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Navigate_SendGoal_Request_message_typesupport_map = {
  2,
  "act_mov_interfaces",
  &_Navigate_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &act_mov_interfaces__action__Navigate_SendGoal_Request__get_type_hash,
  &act_mov_interfaces__action__Navigate_SendGoal_Request__get_type_description,
  &act_mov_interfaces__action__Navigate_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace act_mov_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, act_mov_interfaces, action, Navigate_SendGoal_Request)() {
  return &::act_mov_interfaces::action::rosidl_typesupport_c::Navigate_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__type_support.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__functions.h"
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

namespace act_mov_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Navigate_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_SendGoal_Response_type_support_ids_t;

static const _Navigate_SendGoal_Response_type_support_ids_t _Navigate_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Navigate_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Navigate_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Navigate_SendGoal_Response_type_support_symbol_names_t _Navigate_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, act_mov_interfaces, action, Navigate_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, act_mov_interfaces, action, Navigate_SendGoal_Response)),
  }
};

typedef struct _Navigate_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Navigate_SendGoal_Response_type_support_data_t;

static _Navigate_SendGoal_Response_type_support_data_t _Navigate_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Navigate_SendGoal_Response_message_typesupport_map = {
  2,
  "act_mov_interfaces",
  &_Navigate_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &act_mov_interfaces__action__Navigate_SendGoal_Response__get_type_hash,
  &act_mov_interfaces__action__Navigate_SendGoal_Response__get_type_description,
  &act_mov_interfaces__action__Navigate_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace act_mov_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, act_mov_interfaces, action, Navigate_SendGoal_Response)() {
  return &::act_mov_interfaces::action::rosidl_typesupport_c::Navigate_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__type_support.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__functions.h"
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

namespace act_mov_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Navigate_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_SendGoal_Event_type_support_ids_t;

static const _Navigate_SendGoal_Event_type_support_ids_t _Navigate_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Navigate_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Navigate_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Navigate_SendGoal_Event_type_support_symbol_names_t _Navigate_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, act_mov_interfaces, action, Navigate_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, act_mov_interfaces, action, Navigate_SendGoal_Event)),
  }
};

typedef struct _Navigate_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _Navigate_SendGoal_Event_type_support_data_t;

static _Navigate_SendGoal_Event_type_support_data_t _Navigate_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Navigate_SendGoal_Event_message_typesupport_map = {
  2,
  "act_mov_interfaces",
  &_Navigate_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &act_mov_interfaces__action__Navigate_SendGoal_Event__get_type_hash,
  &act_mov_interfaces__action__Navigate_SendGoal_Event__get_type_description,
  &act_mov_interfaces__action__Navigate_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace act_mov_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, act_mov_interfaces, action, Navigate_SendGoal_Event)() {
  return &::act_mov_interfaces::action::rosidl_typesupport_c::Navigate_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace act_mov_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _Navigate_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_SendGoal_type_support_ids_t;

static const _Navigate_SendGoal_type_support_ids_t _Navigate_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Navigate_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Navigate_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Navigate_SendGoal_type_support_symbol_names_t _Navigate_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, act_mov_interfaces, action, Navigate_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, act_mov_interfaces, action, Navigate_SendGoal)),
  }
};

typedef struct _Navigate_SendGoal_type_support_data_t
{
  void * data[2];
} _Navigate_SendGoal_type_support_data_t;

static _Navigate_SendGoal_type_support_data_t _Navigate_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Navigate_SendGoal_service_typesupport_map = {
  2,
  "act_mov_interfaces",
  &_Navigate_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Navigate_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Navigate_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Navigate_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Navigate_SendGoal_Request_message_type_support_handle,
  &Navigate_SendGoal_Response_message_type_support_handle,
  &Navigate_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    act_mov_interfaces,
    action,
    Navigate_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    act_mov_interfaces,
    action,
    Navigate_SendGoal
  ),
  &act_mov_interfaces__action__Navigate_SendGoal__get_type_hash,
  &act_mov_interfaces__action__Navigate_SendGoal__get_type_description,
  &act_mov_interfaces__action__Navigate_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace act_mov_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, act_mov_interfaces, action, Navigate_SendGoal)() {
  return &::act_mov_interfaces::action::rosidl_typesupport_c::Navigate_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__type_support.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__functions.h"
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

namespace act_mov_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Navigate_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_GetResult_Request_type_support_ids_t;

static const _Navigate_GetResult_Request_type_support_ids_t _Navigate_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Navigate_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Navigate_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Navigate_GetResult_Request_type_support_symbol_names_t _Navigate_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, act_mov_interfaces, action, Navigate_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, act_mov_interfaces, action, Navigate_GetResult_Request)),
  }
};

typedef struct _Navigate_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Navigate_GetResult_Request_type_support_data_t;

static _Navigate_GetResult_Request_type_support_data_t _Navigate_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Navigate_GetResult_Request_message_typesupport_map = {
  2,
  "act_mov_interfaces",
  &_Navigate_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &act_mov_interfaces__action__Navigate_GetResult_Request__get_type_hash,
  &act_mov_interfaces__action__Navigate_GetResult_Request__get_type_description,
  &act_mov_interfaces__action__Navigate_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace act_mov_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, act_mov_interfaces, action, Navigate_GetResult_Request)() {
  return &::act_mov_interfaces::action::rosidl_typesupport_c::Navigate_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__type_support.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__functions.h"
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

namespace act_mov_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Navigate_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_GetResult_Response_type_support_ids_t;

static const _Navigate_GetResult_Response_type_support_ids_t _Navigate_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Navigate_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Navigate_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Navigate_GetResult_Response_type_support_symbol_names_t _Navigate_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, act_mov_interfaces, action, Navigate_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, act_mov_interfaces, action, Navigate_GetResult_Response)),
  }
};

typedef struct _Navigate_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Navigate_GetResult_Response_type_support_data_t;

static _Navigate_GetResult_Response_type_support_data_t _Navigate_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Navigate_GetResult_Response_message_typesupport_map = {
  2,
  "act_mov_interfaces",
  &_Navigate_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &act_mov_interfaces__action__Navigate_GetResult_Response__get_type_hash,
  &act_mov_interfaces__action__Navigate_GetResult_Response__get_type_description,
  &act_mov_interfaces__action__Navigate_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace act_mov_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, act_mov_interfaces, action, Navigate_GetResult_Response)() {
  return &::act_mov_interfaces::action::rosidl_typesupport_c::Navigate_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__type_support.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__functions.h"
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

namespace act_mov_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Navigate_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_GetResult_Event_type_support_ids_t;

static const _Navigate_GetResult_Event_type_support_ids_t _Navigate_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Navigate_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Navigate_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Navigate_GetResult_Event_type_support_symbol_names_t _Navigate_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, act_mov_interfaces, action, Navigate_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, act_mov_interfaces, action, Navigate_GetResult_Event)),
  }
};

typedef struct _Navigate_GetResult_Event_type_support_data_t
{
  void * data[2];
} _Navigate_GetResult_Event_type_support_data_t;

static _Navigate_GetResult_Event_type_support_data_t _Navigate_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Navigate_GetResult_Event_message_typesupport_map = {
  2,
  "act_mov_interfaces",
  &_Navigate_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &act_mov_interfaces__action__Navigate_GetResult_Event__get_type_hash,
  &act_mov_interfaces__action__Navigate_GetResult_Event__get_type_description,
  &act_mov_interfaces__action__Navigate_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace act_mov_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, act_mov_interfaces, action, Navigate_GetResult_Event)() {
  return &::act_mov_interfaces::action::rosidl_typesupport_c::Navigate_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace act_mov_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _Navigate_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_GetResult_type_support_ids_t;

static const _Navigate_GetResult_type_support_ids_t _Navigate_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Navigate_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Navigate_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Navigate_GetResult_type_support_symbol_names_t _Navigate_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, act_mov_interfaces, action, Navigate_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, act_mov_interfaces, action, Navigate_GetResult)),
  }
};

typedef struct _Navigate_GetResult_type_support_data_t
{
  void * data[2];
} _Navigate_GetResult_type_support_data_t;

static _Navigate_GetResult_type_support_data_t _Navigate_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Navigate_GetResult_service_typesupport_map = {
  2,
  "act_mov_interfaces",
  &_Navigate_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Navigate_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Navigate_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Navigate_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Navigate_GetResult_Request_message_type_support_handle,
  &Navigate_GetResult_Response_message_type_support_handle,
  &Navigate_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    act_mov_interfaces,
    action,
    Navigate_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    act_mov_interfaces,
    action,
    Navigate_GetResult
  ),
  &act_mov_interfaces__action__Navigate_GetResult__get_type_hash,
  &act_mov_interfaces__action__Navigate_GetResult__get_type_description,
  &act_mov_interfaces__action__Navigate_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace act_mov_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, act_mov_interfaces, action, Navigate_GetResult)() {
  return &::act_mov_interfaces::action::rosidl_typesupport_c::Navigate_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__struct.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__type_support.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__functions.h"
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

namespace act_mov_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Navigate_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_FeedbackMessage_type_support_ids_t;

static const _Navigate_FeedbackMessage_type_support_ids_t _Navigate_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Navigate_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Navigate_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Navigate_FeedbackMessage_type_support_symbol_names_t _Navigate_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, act_mov_interfaces, action, Navigate_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, act_mov_interfaces, action, Navigate_FeedbackMessage)),
  }
};

typedef struct _Navigate_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Navigate_FeedbackMessage_type_support_data_t;

static _Navigate_FeedbackMessage_type_support_data_t _Navigate_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Navigate_FeedbackMessage_message_typesupport_map = {
  2,
  "act_mov_interfaces",
  &_Navigate_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &act_mov_interfaces__action__Navigate_FeedbackMessage__get_type_hash,
  &act_mov_interfaces__action__Navigate_FeedbackMessage__get_type_description,
  &act_mov_interfaces__action__Navigate_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace act_mov_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, act_mov_interfaces, action, Navigate_FeedbackMessage)() {
  return &::act_mov_interfaces::action::rosidl_typesupport_c::Navigate_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "act_mov_interfaces/action/navigate.h"
// already included above
// #include "act_mov_interfaces/action/detail/navigate__type_support.h"

static rosidl_action_type_support_t _act_mov_interfaces__action__Navigate__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &act_mov_interfaces__action__Navigate__get_type_hash,
  &act_mov_interfaces__action__Navigate__get_type_description,
  &act_mov_interfaces__action__Navigate__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, act_mov_interfaces, action, Navigate)()
{
  // Thread-safe by always writing the same values to the static struct
  _act_mov_interfaces__action__Navigate__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, act_mov_interfaces, action, Navigate_SendGoal)();
  _act_mov_interfaces__action__Navigate__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, act_mov_interfaces, action, Navigate_GetResult)();
  _act_mov_interfaces__action__Navigate__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _act_mov_interfaces__action__Navigate__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, act_mov_interfaces, action, Navigate_FeedbackMessage)();
  _act_mov_interfaces__action__Navigate__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_act_mov_interfaces__action__Navigate__typesupport_c;
}

#ifdef __cplusplus
}
#endif
