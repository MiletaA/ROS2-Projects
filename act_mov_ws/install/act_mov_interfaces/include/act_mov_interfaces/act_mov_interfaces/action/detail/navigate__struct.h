// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from act_mov_interfaces:action/Navigate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "act_mov_interfaces/action/navigate.h"


#ifndef ACT_MOV_INTERFACES__ACTION__DETAIL__NAVIGATE__STRUCT_H_
#define ACT_MOV_INTERFACES__ACTION__DETAIL__NAVIGATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal_point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/Navigate in the package act_mov_interfaces.
typedef struct act_mov_interfaces__action__Navigate_Goal
{
  /// x, y, z
  geometry_msgs__msg__Point goal_point;
} act_mov_interfaces__action__Navigate_Goal;

// Struct for a sequence of act_mov_interfaces__action__Navigate_Goal.
typedef struct act_mov_interfaces__action__Navigate_Goal__Sequence
{
  act_mov_interfaces__action__Navigate_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} act_mov_interfaces__action__Navigate_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/Navigate in the package act_mov_interfaces.
typedef struct act_mov_interfaces__action__Navigate_Result
{
  /// in seconds
  float elpased_time;
} act_mov_interfaces__action__Navigate_Result;

// Struct for a sequence of act_mov_interfaces__action__Navigate_Result.
typedef struct act_mov_interfaces__action__Navigate_Result__Sequence
{
  act_mov_interfaces__action__Navigate_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} act_mov_interfaces__action__Navigate_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/Navigate in the package act_mov_interfaces.
typedef struct act_mov_interfaces__action__Navigate_Feedback
{
  /// in meters
  float distance_to_point;
} act_mov_interfaces__action__Navigate_Feedback;

// Struct for a sequence of act_mov_interfaces__action__Navigate_Feedback.
typedef struct act_mov_interfaces__action__Navigate_Feedback__Sequence
{
  act_mov_interfaces__action__Navigate_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} act_mov_interfaces__action__Navigate_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "act_mov_interfaces/action/detail/navigate__struct.h"

/// Struct defined in action/Navigate in the package act_mov_interfaces.
typedef struct act_mov_interfaces__action__Navigate_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  act_mov_interfaces__action__Navigate_Goal goal;
} act_mov_interfaces__action__Navigate_SendGoal_Request;

// Struct for a sequence of act_mov_interfaces__action__Navigate_SendGoal_Request.
typedef struct act_mov_interfaces__action__Navigate_SendGoal_Request__Sequence
{
  act_mov_interfaces__action__Navigate_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} act_mov_interfaces__action__Navigate_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Navigate in the package act_mov_interfaces.
typedef struct act_mov_interfaces__action__Navigate_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} act_mov_interfaces__action__Navigate_SendGoal_Response;

// Struct for a sequence of act_mov_interfaces__action__Navigate_SendGoal_Response.
typedef struct act_mov_interfaces__action__Navigate_SendGoal_Response__Sequence
{
  act_mov_interfaces__action__Navigate_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} act_mov_interfaces__action__Navigate_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  act_mov_interfaces__action__Navigate_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  act_mov_interfaces__action__Navigate_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Navigate in the package act_mov_interfaces.
typedef struct act_mov_interfaces__action__Navigate_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  act_mov_interfaces__action__Navigate_SendGoal_Request__Sequence request;
  act_mov_interfaces__action__Navigate_SendGoal_Response__Sequence response;
} act_mov_interfaces__action__Navigate_SendGoal_Event;

// Struct for a sequence of act_mov_interfaces__action__Navigate_SendGoal_Event.
typedef struct act_mov_interfaces__action__Navigate_SendGoal_Event__Sequence
{
  act_mov_interfaces__action__Navigate_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} act_mov_interfaces__action__Navigate_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Navigate in the package act_mov_interfaces.
typedef struct act_mov_interfaces__action__Navigate_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} act_mov_interfaces__action__Navigate_GetResult_Request;

// Struct for a sequence of act_mov_interfaces__action__Navigate_GetResult_Request.
typedef struct act_mov_interfaces__action__Navigate_GetResult_Request__Sequence
{
  act_mov_interfaces__action__Navigate_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} act_mov_interfaces__action__Navigate_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "act_mov_interfaces/action/detail/navigate__struct.h"

/// Struct defined in action/Navigate in the package act_mov_interfaces.
typedef struct act_mov_interfaces__action__Navigate_GetResult_Response
{
  int8_t status;
  act_mov_interfaces__action__Navigate_Result result;
} act_mov_interfaces__action__Navigate_GetResult_Response;

// Struct for a sequence of act_mov_interfaces__action__Navigate_GetResult_Response.
typedef struct act_mov_interfaces__action__Navigate_GetResult_Response__Sequence
{
  act_mov_interfaces__action__Navigate_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} act_mov_interfaces__action__Navigate_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  act_mov_interfaces__action__Navigate_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  act_mov_interfaces__action__Navigate_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Navigate in the package act_mov_interfaces.
typedef struct act_mov_interfaces__action__Navigate_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  act_mov_interfaces__action__Navigate_GetResult_Request__Sequence request;
  act_mov_interfaces__action__Navigate_GetResult_Response__Sequence response;
} act_mov_interfaces__action__Navigate_GetResult_Event;

// Struct for a sequence of act_mov_interfaces__action__Navigate_GetResult_Event.
typedef struct act_mov_interfaces__action__Navigate_GetResult_Event__Sequence
{
  act_mov_interfaces__action__Navigate_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} act_mov_interfaces__action__Navigate_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "act_mov_interfaces/action/detail/navigate__struct.h"

/// Struct defined in action/Navigate in the package act_mov_interfaces.
typedef struct act_mov_interfaces__action__Navigate_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  act_mov_interfaces__action__Navigate_Feedback feedback;
} act_mov_interfaces__action__Navigate_FeedbackMessage;

// Struct for a sequence of act_mov_interfaces__action__Navigate_FeedbackMessage.
typedef struct act_mov_interfaces__action__Navigate_FeedbackMessage__Sequence
{
  act_mov_interfaces__action__Navigate_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} act_mov_interfaces__action__Navigate_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACT_MOV_INTERFACES__ACTION__DETAIL__NAVIGATE__STRUCT_H_
