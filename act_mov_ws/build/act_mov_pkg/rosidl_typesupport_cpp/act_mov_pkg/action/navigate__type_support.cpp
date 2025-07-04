// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from act_mov_pkg:action/Navigate.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "act_mov_pkg/action/detail/navigate__functions.h"
#include "act_mov_pkg/action/detail/navigate__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace act_mov_pkg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Navigate_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_Goal_type_support_ids_t;

static const _Navigate_Goal_type_support_ids_t _Navigate_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, act_mov_pkg, action, Navigate_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, act_mov_pkg, action, Navigate_Goal)),
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
  "act_mov_pkg",
  &_Navigate_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &act_mov_pkg__action__Navigate_Goal__get_type_hash,
  &act_mov_pkg__action__Navigate_Goal__get_type_description,
  &act_mov_pkg__action__Navigate_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace act_mov_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<act_mov_pkg::action::Navigate_Goal>()
{
  return &::act_mov_pkg::action::rosidl_typesupport_cpp::Navigate_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, act_mov_pkg, action, Navigate_Goal)() {
  return get_message_type_support_handle<act_mov_pkg::action::Navigate_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "act_mov_pkg/action/detail/navigate__functions.h"
// already included above
// #include "act_mov_pkg/action/detail/navigate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace act_mov_pkg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Navigate_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_Result_type_support_ids_t;

static const _Navigate_Result_type_support_ids_t _Navigate_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, act_mov_pkg, action, Navigate_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, act_mov_pkg, action, Navigate_Result)),
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
  "act_mov_pkg",
  &_Navigate_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &act_mov_pkg__action__Navigate_Result__get_type_hash,
  &act_mov_pkg__action__Navigate_Result__get_type_description,
  &act_mov_pkg__action__Navigate_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace act_mov_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<act_mov_pkg::action::Navigate_Result>()
{
  return &::act_mov_pkg::action::rosidl_typesupport_cpp::Navigate_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, act_mov_pkg, action, Navigate_Result)() {
  return get_message_type_support_handle<act_mov_pkg::action::Navigate_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "act_mov_pkg/action/detail/navigate__functions.h"
// already included above
// #include "act_mov_pkg/action/detail/navigate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace act_mov_pkg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Navigate_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_Feedback_type_support_ids_t;

static const _Navigate_Feedback_type_support_ids_t _Navigate_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, act_mov_pkg, action, Navigate_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, act_mov_pkg, action, Navigate_Feedback)),
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
  "act_mov_pkg",
  &_Navigate_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &act_mov_pkg__action__Navigate_Feedback__get_type_hash,
  &act_mov_pkg__action__Navigate_Feedback__get_type_description,
  &act_mov_pkg__action__Navigate_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace act_mov_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<act_mov_pkg::action::Navigate_Feedback>()
{
  return &::act_mov_pkg::action::rosidl_typesupport_cpp::Navigate_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, act_mov_pkg, action, Navigate_Feedback)() {
  return get_message_type_support_handle<act_mov_pkg::action::Navigate_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "act_mov_pkg/action/detail/navigate__functions.h"
// already included above
// #include "act_mov_pkg/action/detail/navigate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace act_mov_pkg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Navigate_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_SendGoal_Request_type_support_ids_t;

static const _Navigate_SendGoal_Request_type_support_ids_t _Navigate_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, act_mov_pkg, action, Navigate_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, act_mov_pkg, action, Navigate_SendGoal_Request)),
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
  "act_mov_pkg",
  &_Navigate_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &act_mov_pkg__action__Navigate_SendGoal_Request__get_type_hash,
  &act_mov_pkg__action__Navigate_SendGoal_Request__get_type_description,
  &act_mov_pkg__action__Navigate_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace act_mov_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<act_mov_pkg::action::Navigate_SendGoal_Request>()
{
  return &::act_mov_pkg::action::rosidl_typesupport_cpp::Navigate_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, act_mov_pkg, action, Navigate_SendGoal_Request)() {
  return get_message_type_support_handle<act_mov_pkg::action::Navigate_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "act_mov_pkg/action/detail/navigate__functions.h"
// already included above
// #include "act_mov_pkg/action/detail/navigate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace act_mov_pkg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Navigate_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_SendGoal_Response_type_support_ids_t;

static const _Navigate_SendGoal_Response_type_support_ids_t _Navigate_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, act_mov_pkg, action, Navigate_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, act_mov_pkg, action, Navigate_SendGoal_Response)),
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
  "act_mov_pkg",
  &_Navigate_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &act_mov_pkg__action__Navigate_SendGoal_Response__get_type_hash,
  &act_mov_pkg__action__Navigate_SendGoal_Response__get_type_description,
  &act_mov_pkg__action__Navigate_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace act_mov_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<act_mov_pkg::action::Navigate_SendGoal_Response>()
{
  return &::act_mov_pkg::action::rosidl_typesupport_cpp::Navigate_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, act_mov_pkg, action, Navigate_SendGoal_Response)() {
  return get_message_type_support_handle<act_mov_pkg::action::Navigate_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "act_mov_pkg/action/detail/navigate__functions.h"
// already included above
// #include "act_mov_pkg/action/detail/navigate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace act_mov_pkg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Navigate_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_SendGoal_Event_type_support_ids_t;

static const _Navigate_SendGoal_Event_type_support_ids_t _Navigate_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, act_mov_pkg, action, Navigate_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, act_mov_pkg, action, Navigate_SendGoal_Event)),
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
  "act_mov_pkg",
  &_Navigate_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &act_mov_pkg__action__Navigate_SendGoal_Event__get_type_hash,
  &act_mov_pkg__action__Navigate_SendGoal_Event__get_type_description,
  &act_mov_pkg__action__Navigate_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace act_mov_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<act_mov_pkg::action::Navigate_SendGoal_Event>()
{
  return &::act_mov_pkg::action::rosidl_typesupport_cpp::Navigate_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, act_mov_pkg, action, Navigate_SendGoal_Event)() {
  return get_message_type_support_handle<act_mov_pkg::action::Navigate_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "act_mov_pkg/action/detail/navigate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace act_mov_pkg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Navigate_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_SendGoal_type_support_ids_t;

static const _Navigate_SendGoal_type_support_ids_t _Navigate_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, act_mov_pkg, action, Navigate_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, act_mov_pkg, action, Navigate_SendGoal)),
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
  "act_mov_pkg",
  &_Navigate_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Navigate_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Navigate_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Navigate_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<act_mov_pkg::action::Navigate_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<act_mov_pkg::action::Navigate_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<act_mov_pkg::action::Navigate_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<act_mov_pkg::action::Navigate_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<act_mov_pkg::action::Navigate_SendGoal>,
  &act_mov_pkg__action__Navigate_SendGoal__get_type_hash,
  &act_mov_pkg__action__Navigate_SendGoal__get_type_description,
  &act_mov_pkg__action__Navigate_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace act_mov_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<act_mov_pkg::action::Navigate_SendGoal>()
{
  return &::act_mov_pkg::action::rosidl_typesupport_cpp::Navigate_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, act_mov_pkg, action, Navigate_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<act_mov_pkg::action::Navigate_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "act_mov_pkg/action/detail/navigate__functions.h"
// already included above
// #include "act_mov_pkg/action/detail/navigate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace act_mov_pkg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Navigate_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_GetResult_Request_type_support_ids_t;

static const _Navigate_GetResult_Request_type_support_ids_t _Navigate_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, act_mov_pkg, action, Navigate_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, act_mov_pkg, action, Navigate_GetResult_Request)),
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
  "act_mov_pkg",
  &_Navigate_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &act_mov_pkg__action__Navigate_GetResult_Request__get_type_hash,
  &act_mov_pkg__action__Navigate_GetResult_Request__get_type_description,
  &act_mov_pkg__action__Navigate_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace act_mov_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<act_mov_pkg::action::Navigate_GetResult_Request>()
{
  return &::act_mov_pkg::action::rosidl_typesupport_cpp::Navigate_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, act_mov_pkg, action, Navigate_GetResult_Request)() {
  return get_message_type_support_handle<act_mov_pkg::action::Navigate_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "act_mov_pkg/action/detail/navigate__functions.h"
// already included above
// #include "act_mov_pkg/action/detail/navigate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace act_mov_pkg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Navigate_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_GetResult_Response_type_support_ids_t;

static const _Navigate_GetResult_Response_type_support_ids_t _Navigate_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, act_mov_pkg, action, Navigate_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, act_mov_pkg, action, Navigate_GetResult_Response)),
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
  "act_mov_pkg",
  &_Navigate_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &act_mov_pkg__action__Navigate_GetResult_Response__get_type_hash,
  &act_mov_pkg__action__Navigate_GetResult_Response__get_type_description,
  &act_mov_pkg__action__Navigate_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace act_mov_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<act_mov_pkg::action::Navigate_GetResult_Response>()
{
  return &::act_mov_pkg::action::rosidl_typesupport_cpp::Navigate_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, act_mov_pkg, action, Navigate_GetResult_Response)() {
  return get_message_type_support_handle<act_mov_pkg::action::Navigate_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "act_mov_pkg/action/detail/navigate__functions.h"
// already included above
// #include "act_mov_pkg/action/detail/navigate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace act_mov_pkg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Navigate_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_GetResult_Event_type_support_ids_t;

static const _Navigate_GetResult_Event_type_support_ids_t _Navigate_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, act_mov_pkg, action, Navigate_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, act_mov_pkg, action, Navigate_GetResult_Event)),
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
  "act_mov_pkg",
  &_Navigate_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &act_mov_pkg__action__Navigate_GetResult_Event__get_type_hash,
  &act_mov_pkg__action__Navigate_GetResult_Event__get_type_description,
  &act_mov_pkg__action__Navigate_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace act_mov_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<act_mov_pkg::action::Navigate_GetResult_Event>()
{
  return &::act_mov_pkg::action::rosidl_typesupport_cpp::Navigate_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, act_mov_pkg, action, Navigate_GetResult_Event)() {
  return get_message_type_support_handle<act_mov_pkg::action::Navigate_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "act_mov_pkg/action/detail/navigate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace act_mov_pkg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Navigate_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_GetResult_type_support_ids_t;

static const _Navigate_GetResult_type_support_ids_t _Navigate_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, act_mov_pkg, action, Navigate_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, act_mov_pkg, action, Navigate_GetResult)),
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
  "act_mov_pkg",
  &_Navigate_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Navigate_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Navigate_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Navigate_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<act_mov_pkg::action::Navigate_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<act_mov_pkg::action::Navigate_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<act_mov_pkg::action::Navigate_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<act_mov_pkg::action::Navigate_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<act_mov_pkg::action::Navigate_GetResult>,
  &act_mov_pkg__action__Navigate_GetResult__get_type_hash,
  &act_mov_pkg__action__Navigate_GetResult__get_type_description,
  &act_mov_pkg__action__Navigate_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace act_mov_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<act_mov_pkg::action::Navigate_GetResult>()
{
  return &::act_mov_pkg::action::rosidl_typesupport_cpp::Navigate_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, act_mov_pkg, action, Navigate_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<act_mov_pkg::action::Navigate_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "act_mov_pkg/action/detail/navigate__functions.h"
// already included above
// #include "act_mov_pkg/action/detail/navigate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace act_mov_pkg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Navigate_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Navigate_FeedbackMessage_type_support_ids_t;

static const _Navigate_FeedbackMessage_type_support_ids_t _Navigate_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, act_mov_pkg, action, Navigate_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, act_mov_pkg, action, Navigate_FeedbackMessage)),
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
  "act_mov_pkg",
  &_Navigate_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Navigate_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Navigate_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Navigate_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Navigate_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &act_mov_pkg__action__Navigate_FeedbackMessage__get_type_hash,
  &act_mov_pkg__action__Navigate_FeedbackMessage__get_type_description,
  &act_mov_pkg__action__Navigate_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace act_mov_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<act_mov_pkg::action::Navigate_FeedbackMessage>()
{
  return &::act_mov_pkg::action::rosidl_typesupport_cpp::Navigate_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, act_mov_pkg, action, Navigate_FeedbackMessage)() {
  return get_message_type_support_handle<act_mov_pkg::action::Navigate_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "act_mov_pkg/action/detail/navigate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace act_mov_pkg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Navigate_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &act_mov_pkg__action__Navigate__get_type_hash,
  &act_mov_pkg__action__Navigate__get_type_description,
  &act_mov_pkg__action__Navigate__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace act_mov_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<act_mov_pkg::action::Navigate>()
{
  using ::act_mov_pkg::action::rosidl_typesupport_cpp::Navigate_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Navigate_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::act_mov_pkg::action::Navigate::Impl::SendGoalService>();
  Navigate_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::act_mov_pkg::action::Navigate::Impl::GetResultService>();
  Navigate_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::act_mov_pkg::action::Navigate::Impl::CancelGoalService>();
  Navigate_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::act_mov_pkg::action::Navigate::Impl::FeedbackMessage>();
  Navigate_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::act_mov_pkg::action::Navigate::Impl::GoalStatusMessage>();
  return &Navigate_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, act_mov_pkg, action, Navigate)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<act_mov_pkg::action::Navigate>();
}

#ifdef __cplusplus
}
#endif
