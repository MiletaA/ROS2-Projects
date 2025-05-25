// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from service_camera_pkg:srv/TurnCamera.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "service_camera_pkg/srv/detail/turn_camera__rosidl_typesupport_introspection_c.h"
#include "service_camera_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "service_camera_pkg/srv/detail/turn_camera__functions.h"
#include "service_camera_pkg/srv/detail/turn_camera__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void service_camera_pkg__srv__TurnCamera_Request__rosidl_typesupport_introspection_c__TurnCamera_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  service_camera_pkg__srv__TurnCamera_Request__init(message_memory);
}

void service_camera_pkg__srv__TurnCamera_Request__rosidl_typesupport_introspection_c__TurnCamera_Request_fini_function(void * message_memory)
{
  service_camera_pkg__srv__TurnCamera_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember service_camera_pkg__srv__TurnCamera_Request__rosidl_typesupport_introspection_c__TurnCamera_Request_message_member_array[1] = {
  {
    "degree_turn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(service_camera_pkg__srv__TurnCamera_Request, degree_turn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers service_camera_pkg__srv__TurnCamera_Request__rosidl_typesupport_introspection_c__TurnCamera_Request_message_members = {
  "service_camera_pkg__srv",  // message namespace
  "TurnCamera_Request",  // message name
  1,  // number of fields
  sizeof(service_camera_pkg__srv__TurnCamera_Request),
  false,  // has_any_key_member_
  service_camera_pkg__srv__TurnCamera_Request__rosidl_typesupport_introspection_c__TurnCamera_Request_message_member_array,  // message members
  service_camera_pkg__srv__TurnCamera_Request__rosidl_typesupport_introspection_c__TurnCamera_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  service_camera_pkg__srv__TurnCamera_Request__rosidl_typesupport_introspection_c__TurnCamera_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t service_camera_pkg__srv__TurnCamera_Request__rosidl_typesupport_introspection_c__TurnCamera_Request_message_type_support_handle = {
  0,
  &service_camera_pkg__srv__TurnCamera_Request__rosidl_typesupport_introspection_c__TurnCamera_Request_message_members,
  get_message_typesupport_handle_function,
  &service_camera_pkg__srv__TurnCamera_Request__get_type_hash,
  &service_camera_pkg__srv__TurnCamera_Request__get_type_description,
  &service_camera_pkg__srv__TurnCamera_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_service_camera_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_camera_pkg, srv, TurnCamera_Request)() {
  if (!service_camera_pkg__srv__TurnCamera_Request__rosidl_typesupport_introspection_c__TurnCamera_Request_message_type_support_handle.typesupport_identifier) {
    service_camera_pkg__srv__TurnCamera_Request__rosidl_typesupport_introspection_c__TurnCamera_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &service_camera_pkg__srv__TurnCamera_Request__rosidl_typesupport_introspection_c__TurnCamera_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "service_camera_pkg/srv/detail/turn_camera__rosidl_typesupport_introspection_c.h"
// already included above
// #include "service_camera_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "service_camera_pkg/srv/detail/turn_camera__functions.h"
// already included above
// #include "service_camera_pkg/srv/detail/turn_camera__struct.h"


// Include directives for member types
// Member `camera_image`
#include "sensor_msgs/msg/image.h"
// Member `camera_image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void service_camera_pkg__srv__TurnCamera_Response__rosidl_typesupport_introspection_c__TurnCamera_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  service_camera_pkg__srv__TurnCamera_Response__init(message_memory);
}

void service_camera_pkg__srv__TurnCamera_Response__rosidl_typesupport_introspection_c__TurnCamera_Response_fini_function(void * message_memory)
{
  service_camera_pkg__srv__TurnCamera_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember service_camera_pkg__srv__TurnCamera_Response__rosidl_typesupport_introspection_c__TurnCamera_Response_message_member_array[1] = {
  {
    "camera_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(service_camera_pkg__srv__TurnCamera_Response, camera_image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers service_camera_pkg__srv__TurnCamera_Response__rosidl_typesupport_introspection_c__TurnCamera_Response_message_members = {
  "service_camera_pkg__srv",  // message namespace
  "TurnCamera_Response",  // message name
  1,  // number of fields
  sizeof(service_camera_pkg__srv__TurnCamera_Response),
  false,  // has_any_key_member_
  service_camera_pkg__srv__TurnCamera_Response__rosidl_typesupport_introspection_c__TurnCamera_Response_message_member_array,  // message members
  service_camera_pkg__srv__TurnCamera_Response__rosidl_typesupport_introspection_c__TurnCamera_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  service_camera_pkg__srv__TurnCamera_Response__rosidl_typesupport_introspection_c__TurnCamera_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t service_camera_pkg__srv__TurnCamera_Response__rosidl_typesupport_introspection_c__TurnCamera_Response_message_type_support_handle = {
  0,
  &service_camera_pkg__srv__TurnCamera_Response__rosidl_typesupport_introspection_c__TurnCamera_Response_message_members,
  get_message_typesupport_handle_function,
  &service_camera_pkg__srv__TurnCamera_Response__get_type_hash,
  &service_camera_pkg__srv__TurnCamera_Response__get_type_description,
  &service_camera_pkg__srv__TurnCamera_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_service_camera_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_camera_pkg, srv, TurnCamera_Response)() {
  service_camera_pkg__srv__TurnCamera_Response__rosidl_typesupport_introspection_c__TurnCamera_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!service_camera_pkg__srv__TurnCamera_Response__rosidl_typesupport_introspection_c__TurnCamera_Response_message_type_support_handle.typesupport_identifier) {
    service_camera_pkg__srv__TurnCamera_Response__rosidl_typesupport_introspection_c__TurnCamera_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &service_camera_pkg__srv__TurnCamera_Response__rosidl_typesupport_introspection_c__TurnCamera_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "service_camera_pkg/srv/detail/turn_camera__rosidl_typesupport_introspection_c.h"
// already included above
// #include "service_camera_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "service_camera_pkg/srv/detail/turn_camera__functions.h"
// already included above
// #include "service_camera_pkg/srv/detail/turn_camera__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "service_camera_pkg/srv/turn_camera.h"
// Member `request`
// Member `response`
// already included above
// #include "service_camera_pkg/srv/detail/turn_camera__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__TurnCamera_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  service_camera_pkg__srv__TurnCamera_Event__init(message_memory);
}

void service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__TurnCamera_Event_fini_function(void * message_memory)
{
  service_camera_pkg__srv__TurnCamera_Event__fini(message_memory);
}

size_t service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__size_function__TurnCamera_Event__request(
  const void * untyped_member)
{
  const service_camera_pkg__srv__TurnCamera_Request__Sequence * member =
    (const service_camera_pkg__srv__TurnCamera_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__get_const_function__TurnCamera_Event__request(
  const void * untyped_member, size_t index)
{
  const service_camera_pkg__srv__TurnCamera_Request__Sequence * member =
    (const service_camera_pkg__srv__TurnCamera_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__get_function__TurnCamera_Event__request(
  void * untyped_member, size_t index)
{
  service_camera_pkg__srv__TurnCamera_Request__Sequence * member =
    (service_camera_pkg__srv__TurnCamera_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__fetch_function__TurnCamera_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const service_camera_pkg__srv__TurnCamera_Request * item =
    ((const service_camera_pkg__srv__TurnCamera_Request *)
    service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__get_const_function__TurnCamera_Event__request(untyped_member, index));
  service_camera_pkg__srv__TurnCamera_Request * value =
    (service_camera_pkg__srv__TurnCamera_Request *)(untyped_value);
  *value = *item;
}

void service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__assign_function__TurnCamera_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  service_camera_pkg__srv__TurnCamera_Request * item =
    ((service_camera_pkg__srv__TurnCamera_Request *)
    service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__get_function__TurnCamera_Event__request(untyped_member, index));
  const service_camera_pkg__srv__TurnCamera_Request * value =
    (const service_camera_pkg__srv__TurnCamera_Request *)(untyped_value);
  *item = *value;
}

bool service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__resize_function__TurnCamera_Event__request(
  void * untyped_member, size_t size)
{
  service_camera_pkg__srv__TurnCamera_Request__Sequence * member =
    (service_camera_pkg__srv__TurnCamera_Request__Sequence *)(untyped_member);
  service_camera_pkg__srv__TurnCamera_Request__Sequence__fini(member);
  return service_camera_pkg__srv__TurnCamera_Request__Sequence__init(member, size);
}

size_t service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__size_function__TurnCamera_Event__response(
  const void * untyped_member)
{
  const service_camera_pkg__srv__TurnCamera_Response__Sequence * member =
    (const service_camera_pkg__srv__TurnCamera_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__get_const_function__TurnCamera_Event__response(
  const void * untyped_member, size_t index)
{
  const service_camera_pkg__srv__TurnCamera_Response__Sequence * member =
    (const service_camera_pkg__srv__TurnCamera_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__get_function__TurnCamera_Event__response(
  void * untyped_member, size_t index)
{
  service_camera_pkg__srv__TurnCamera_Response__Sequence * member =
    (service_camera_pkg__srv__TurnCamera_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__fetch_function__TurnCamera_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const service_camera_pkg__srv__TurnCamera_Response * item =
    ((const service_camera_pkg__srv__TurnCamera_Response *)
    service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__get_const_function__TurnCamera_Event__response(untyped_member, index));
  service_camera_pkg__srv__TurnCamera_Response * value =
    (service_camera_pkg__srv__TurnCamera_Response *)(untyped_value);
  *value = *item;
}

void service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__assign_function__TurnCamera_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  service_camera_pkg__srv__TurnCamera_Response * item =
    ((service_camera_pkg__srv__TurnCamera_Response *)
    service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__get_function__TurnCamera_Event__response(untyped_member, index));
  const service_camera_pkg__srv__TurnCamera_Response * value =
    (const service_camera_pkg__srv__TurnCamera_Response *)(untyped_value);
  *item = *value;
}

bool service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__resize_function__TurnCamera_Event__response(
  void * untyped_member, size_t size)
{
  service_camera_pkg__srv__TurnCamera_Response__Sequence * member =
    (service_camera_pkg__srv__TurnCamera_Response__Sequence *)(untyped_member);
  service_camera_pkg__srv__TurnCamera_Response__Sequence__fini(member);
  return service_camera_pkg__srv__TurnCamera_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__TurnCamera_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(service_camera_pkg__srv__TurnCamera_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(service_camera_pkg__srv__TurnCamera_Event, request),  // bytes offset in struct
    NULL,  // default value
    service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__size_function__TurnCamera_Event__request,  // size() function pointer
    service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__get_const_function__TurnCamera_Event__request,  // get_const(index) function pointer
    service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__get_function__TurnCamera_Event__request,  // get(index) function pointer
    service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__fetch_function__TurnCamera_Event__request,  // fetch(index, &value) function pointer
    service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__assign_function__TurnCamera_Event__request,  // assign(index, value) function pointer
    service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__resize_function__TurnCamera_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(service_camera_pkg__srv__TurnCamera_Event, response),  // bytes offset in struct
    NULL,  // default value
    service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__size_function__TurnCamera_Event__response,  // size() function pointer
    service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__get_const_function__TurnCamera_Event__response,  // get_const(index) function pointer
    service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__get_function__TurnCamera_Event__response,  // get(index) function pointer
    service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__fetch_function__TurnCamera_Event__response,  // fetch(index, &value) function pointer
    service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__assign_function__TurnCamera_Event__response,  // assign(index, value) function pointer
    service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__resize_function__TurnCamera_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__TurnCamera_Event_message_members = {
  "service_camera_pkg__srv",  // message namespace
  "TurnCamera_Event",  // message name
  3,  // number of fields
  sizeof(service_camera_pkg__srv__TurnCamera_Event),
  false,  // has_any_key_member_
  service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__TurnCamera_Event_message_member_array,  // message members
  service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__TurnCamera_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__TurnCamera_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__TurnCamera_Event_message_type_support_handle = {
  0,
  &service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__TurnCamera_Event_message_members,
  get_message_typesupport_handle_function,
  &service_camera_pkg__srv__TurnCamera_Event__get_type_hash,
  &service_camera_pkg__srv__TurnCamera_Event__get_type_description,
  &service_camera_pkg__srv__TurnCamera_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_service_camera_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_camera_pkg, srv, TurnCamera_Event)() {
  service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__TurnCamera_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__TurnCamera_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_camera_pkg, srv, TurnCamera_Request)();
  service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__TurnCamera_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_camera_pkg, srv, TurnCamera_Response)();
  if (!service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__TurnCamera_Event_message_type_support_handle.typesupport_identifier) {
    service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__TurnCamera_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__TurnCamera_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "service_camera_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "service_camera_pkg/srv/detail/turn_camera__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers service_camera_pkg__srv__detail__turn_camera__rosidl_typesupport_introspection_c__TurnCamera_service_members = {
  "service_camera_pkg__srv",  // service namespace
  "TurnCamera",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // service_camera_pkg__srv__detail__turn_camera__rosidl_typesupport_introspection_c__TurnCamera_Request_message_type_support_handle,
  NULL,  // response message
  // service_camera_pkg__srv__detail__turn_camera__rosidl_typesupport_introspection_c__TurnCamera_Response_message_type_support_handle
  NULL  // event_message
  // service_camera_pkg__srv__detail__turn_camera__rosidl_typesupport_introspection_c__TurnCamera_Response_message_type_support_handle
};


static rosidl_service_type_support_t service_camera_pkg__srv__detail__turn_camera__rosidl_typesupport_introspection_c__TurnCamera_service_type_support_handle = {
  0,
  &service_camera_pkg__srv__detail__turn_camera__rosidl_typesupport_introspection_c__TurnCamera_service_members,
  get_service_typesupport_handle_function,
  &service_camera_pkg__srv__TurnCamera_Request__rosidl_typesupport_introspection_c__TurnCamera_Request_message_type_support_handle,
  &service_camera_pkg__srv__TurnCamera_Response__rosidl_typesupport_introspection_c__TurnCamera_Response_message_type_support_handle,
  &service_camera_pkg__srv__TurnCamera_Event__rosidl_typesupport_introspection_c__TurnCamera_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    service_camera_pkg,
    srv,
    TurnCamera
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    service_camera_pkg,
    srv,
    TurnCamera
  ),
  &service_camera_pkg__srv__TurnCamera__get_type_hash,
  &service_camera_pkg__srv__TurnCamera__get_type_description,
  &service_camera_pkg__srv__TurnCamera__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_camera_pkg, srv, TurnCamera_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_camera_pkg, srv, TurnCamera_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_camera_pkg, srv, TurnCamera_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_service_camera_pkg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_camera_pkg, srv, TurnCamera)(void) {
  if (!service_camera_pkg__srv__detail__turn_camera__rosidl_typesupport_introspection_c__TurnCamera_service_type_support_handle.typesupport_identifier) {
    service_camera_pkg__srv__detail__turn_camera__rosidl_typesupport_introspection_c__TurnCamera_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)service_camera_pkg__srv__detail__turn_camera__rosidl_typesupport_introspection_c__TurnCamera_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_camera_pkg, srv, TurnCamera_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_camera_pkg, srv, TurnCamera_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_camera_pkg, srv, TurnCamera_Event)()->data;
  }

  return &service_camera_pkg__srv__detail__turn_camera__rosidl_typesupport_introspection_c__TurnCamera_service_type_support_handle;
}
