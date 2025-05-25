// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from service_camera_pkg:srv/TurnCamera.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "service_camera_pkg/srv/turn_camera.h"


#ifndef SERVICE_CAMERA_PKG__SRV__DETAIL__TURN_CAMERA__STRUCT_H_
#define SERVICE_CAMERA_PKG__SRV__DETAIL__TURN_CAMERA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TurnCamera in the package service_camera_pkg.
typedef struct service_camera_pkg__srv__TurnCamera_Request
{
  float degree_turn;
} service_camera_pkg__srv__TurnCamera_Request;

// Struct for a sequence of service_camera_pkg__srv__TurnCamera_Request.
typedef struct service_camera_pkg__srv__TurnCamera_Request__Sequence
{
  service_camera_pkg__srv__TurnCamera_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} service_camera_pkg__srv__TurnCamera_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'camera_image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/TurnCamera in the package service_camera_pkg.
typedef struct service_camera_pkg__srv__TurnCamera_Response
{
  sensor_msgs__msg__Image camera_image;
} service_camera_pkg__srv__TurnCamera_Response;

// Struct for a sequence of service_camera_pkg__srv__TurnCamera_Response.
typedef struct service_camera_pkg__srv__TurnCamera_Response__Sequence
{
  service_camera_pkg__srv__TurnCamera_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} service_camera_pkg__srv__TurnCamera_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  service_camera_pkg__srv__TurnCamera_Event__request__MAX_SIZE = 1
};
// response
enum
{
  service_camera_pkg__srv__TurnCamera_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/TurnCamera in the package service_camera_pkg.
typedef struct service_camera_pkg__srv__TurnCamera_Event
{
  service_msgs__msg__ServiceEventInfo info;
  service_camera_pkg__srv__TurnCamera_Request__Sequence request;
  service_camera_pkg__srv__TurnCamera_Response__Sequence response;
} service_camera_pkg__srv__TurnCamera_Event;

// Struct for a sequence of service_camera_pkg__srv__TurnCamera_Event.
typedef struct service_camera_pkg__srv__TurnCamera_Event__Sequence
{
  service_camera_pkg__srv__TurnCamera_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} service_camera_pkg__srv__TurnCamera_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVICE_CAMERA_PKG__SRV__DETAIL__TURN_CAMERA__STRUCT_H_
