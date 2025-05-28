// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from act_mov_pkg:action/Navigate.idl
// generated code does not contain a copyright notice
#include "act_mov_pkg/action/detail/navigate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `goal_point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
act_mov_pkg__action__Navigate_Goal__init(act_mov_pkg__action__Navigate_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal_point
  if (!geometry_msgs__msg__Point__init(&msg->goal_point)) {
    act_mov_pkg__action__Navigate_Goal__fini(msg);
    return false;
  }
  return true;
}

void
act_mov_pkg__action__Navigate_Goal__fini(act_mov_pkg__action__Navigate_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal_point
  geometry_msgs__msg__Point__fini(&msg->goal_point);
}

bool
act_mov_pkg__action__Navigate_Goal__are_equal(const act_mov_pkg__action__Navigate_Goal * lhs, const act_mov_pkg__action__Navigate_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->goal_point), &(rhs->goal_point)))
  {
    return false;
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_Goal__copy(
  const act_mov_pkg__action__Navigate_Goal * input,
  act_mov_pkg__action__Navigate_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->goal_point), &(output->goal_point)))
  {
    return false;
  }
  return true;
}

act_mov_pkg__action__Navigate_Goal *
act_mov_pkg__action__Navigate_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_Goal * msg = (act_mov_pkg__action__Navigate_Goal *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(act_mov_pkg__action__Navigate_Goal));
  bool success = act_mov_pkg__action__Navigate_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
act_mov_pkg__action__Navigate_Goal__destroy(act_mov_pkg__action__Navigate_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    act_mov_pkg__action__Navigate_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
act_mov_pkg__action__Navigate_Goal__Sequence__init(act_mov_pkg__action__Navigate_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_Goal * data = NULL;

  if (size) {
    data = (act_mov_pkg__action__Navigate_Goal *)allocator.zero_allocate(size, sizeof(act_mov_pkg__action__Navigate_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = act_mov_pkg__action__Navigate_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        act_mov_pkg__action__Navigate_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
act_mov_pkg__action__Navigate_Goal__Sequence__fini(act_mov_pkg__action__Navigate_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      act_mov_pkg__action__Navigate_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

act_mov_pkg__action__Navigate_Goal__Sequence *
act_mov_pkg__action__Navigate_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_Goal__Sequence * array = (act_mov_pkg__action__Navigate_Goal__Sequence *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = act_mov_pkg__action__Navigate_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
act_mov_pkg__action__Navigate_Goal__Sequence__destroy(act_mov_pkg__action__Navigate_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    act_mov_pkg__action__Navigate_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
act_mov_pkg__action__Navigate_Goal__Sequence__are_equal(const act_mov_pkg__action__Navigate_Goal__Sequence * lhs, const act_mov_pkg__action__Navigate_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!act_mov_pkg__action__Navigate_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_Goal__Sequence__copy(
  const act_mov_pkg__action__Navigate_Goal__Sequence * input,
  act_mov_pkg__action__Navigate_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(act_mov_pkg__action__Navigate_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    act_mov_pkg__action__Navigate_Goal * data =
      (act_mov_pkg__action__Navigate_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!act_mov_pkg__action__Navigate_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          act_mov_pkg__action__Navigate_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!act_mov_pkg__action__Navigate_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
act_mov_pkg__action__Navigate_Result__init(act_mov_pkg__action__Navigate_Result * msg)
{
  if (!msg) {
    return false;
  }
  // elpased_time
  return true;
}

void
act_mov_pkg__action__Navigate_Result__fini(act_mov_pkg__action__Navigate_Result * msg)
{
  if (!msg) {
    return;
  }
  // elpased_time
}

bool
act_mov_pkg__action__Navigate_Result__are_equal(const act_mov_pkg__action__Navigate_Result * lhs, const act_mov_pkg__action__Navigate_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // elpased_time
  if (lhs->elpased_time != rhs->elpased_time) {
    return false;
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_Result__copy(
  const act_mov_pkg__action__Navigate_Result * input,
  act_mov_pkg__action__Navigate_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // elpased_time
  output->elpased_time = input->elpased_time;
  return true;
}

act_mov_pkg__action__Navigate_Result *
act_mov_pkg__action__Navigate_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_Result * msg = (act_mov_pkg__action__Navigate_Result *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(act_mov_pkg__action__Navigate_Result));
  bool success = act_mov_pkg__action__Navigate_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
act_mov_pkg__action__Navigate_Result__destroy(act_mov_pkg__action__Navigate_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    act_mov_pkg__action__Navigate_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
act_mov_pkg__action__Navigate_Result__Sequence__init(act_mov_pkg__action__Navigate_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_Result * data = NULL;

  if (size) {
    data = (act_mov_pkg__action__Navigate_Result *)allocator.zero_allocate(size, sizeof(act_mov_pkg__action__Navigate_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = act_mov_pkg__action__Navigate_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        act_mov_pkg__action__Navigate_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
act_mov_pkg__action__Navigate_Result__Sequence__fini(act_mov_pkg__action__Navigate_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      act_mov_pkg__action__Navigate_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

act_mov_pkg__action__Navigate_Result__Sequence *
act_mov_pkg__action__Navigate_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_Result__Sequence * array = (act_mov_pkg__action__Navigate_Result__Sequence *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = act_mov_pkg__action__Navigate_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
act_mov_pkg__action__Navigate_Result__Sequence__destroy(act_mov_pkg__action__Navigate_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    act_mov_pkg__action__Navigate_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
act_mov_pkg__action__Navigate_Result__Sequence__are_equal(const act_mov_pkg__action__Navigate_Result__Sequence * lhs, const act_mov_pkg__action__Navigate_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!act_mov_pkg__action__Navigate_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_Result__Sequence__copy(
  const act_mov_pkg__action__Navigate_Result__Sequence * input,
  act_mov_pkg__action__Navigate_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(act_mov_pkg__action__Navigate_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    act_mov_pkg__action__Navigate_Result * data =
      (act_mov_pkg__action__Navigate_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!act_mov_pkg__action__Navigate_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          act_mov_pkg__action__Navigate_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!act_mov_pkg__action__Navigate_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
act_mov_pkg__action__Navigate_Feedback__init(act_mov_pkg__action__Navigate_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // distance_to_point
  return true;
}

void
act_mov_pkg__action__Navigate_Feedback__fini(act_mov_pkg__action__Navigate_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // distance_to_point
}

bool
act_mov_pkg__action__Navigate_Feedback__are_equal(const act_mov_pkg__action__Navigate_Feedback * lhs, const act_mov_pkg__action__Navigate_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance_to_point
  if (lhs->distance_to_point != rhs->distance_to_point) {
    return false;
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_Feedback__copy(
  const act_mov_pkg__action__Navigate_Feedback * input,
  act_mov_pkg__action__Navigate_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // distance_to_point
  output->distance_to_point = input->distance_to_point;
  return true;
}

act_mov_pkg__action__Navigate_Feedback *
act_mov_pkg__action__Navigate_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_Feedback * msg = (act_mov_pkg__action__Navigate_Feedback *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(act_mov_pkg__action__Navigate_Feedback));
  bool success = act_mov_pkg__action__Navigate_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
act_mov_pkg__action__Navigate_Feedback__destroy(act_mov_pkg__action__Navigate_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    act_mov_pkg__action__Navigate_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
act_mov_pkg__action__Navigate_Feedback__Sequence__init(act_mov_pkg__action__Navigate_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_Feedback * data = NULL;

  if (size) {
    data = (act_mov_pkg__action__Navigate_Feedback *)allocator.zero_allocate(size, sizeof(act_mov_pkg__action__Navigate_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = act_mov_pkg__action__Navigate_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        act_mov_pkg__action__Navigate_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
act_mov_pkg__action__Navigate_Feedback__Sequence__fini(act_mov_pkg__action__Navigate_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      act_mov_pkg__action__Navigate_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

act_mov_pkg__action__Navigate_Feedback__Sequence *
act_mov_pkg__action__Navigate_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_Feedback__Sequence * array = (act_mov_pkg__action__Navigate_Feedback__Sequence *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = act_mov_pkg__action__Navigate_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
act_mov_pkg__action__Navigate_Feedback__Sequence__destroy(act_mov_pkg__action__Navigate_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    act_mov_pkg__action__Navigate_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
act_mov_pkg__action__Navigate_Feedback__Sequence__are_equal(const act_mov_pkg__action__Navigate_Feedback__Sequence * lhs, const act_mov_pkg__action__Navigate_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!act_mov_pkg__action__Navigate_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_Feedback__Sequence__copy(
  const act_mov_pkg__action__Navigate_Feedback__Sequence * input,
  act_mov_pkg__action__Navigate_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(act_mov_pkg__action__Navigate_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    act_mov_pkg__action__Navigate_Feedback * data =
      (act_mov_pkg__action__Navigate_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!act_mov_pkg__action__Navigate_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          act_mov_pkg__action__Navigate_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!act_mov_pkg__action__Navigate_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "act_mov_pkg/action/detail/navigate__functions.h"

bool
act_mov_pkg__action__Navigate_SendGoal_Request__init(act_mov_pkg__action__Navigate_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    act_mov_pkg__action__Navigate_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!act_mov_pkg__action__Navigate_Goal__init(&msg->goal)) {
    act_mov_pkg__action__Navigate_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
act_mov_pkg__action__Navigate_SendGoal_Request__fini(act_mov_pkg__action__Navigate_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  act_mov_pkg__action__Navigate_Goal__fini(&msg->goal);
}

bool
act_mov_pkg__action__Navigate_SendGoal_Request__are_equal(const act_mov_pkg__action__Navigate_SendGoal_Request * lhs, const act_mov_pkg__action__Navigate_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!act_mov_pkg__action__Navigate_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_SendGoal_Request__copy(
  const act_mov_pkg__action__Navigate_SendGoal_Request * input,
  act_mov_pkg__action__Navigate_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!act_mov_pkg__action__Navigate_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

act_mov_pkg__action__Navigate_SendGoal_Request *
act_mov_pkg__action__Navigate_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_SendGoal_Request * msg = (act_mov_pkg__action__Navigate_SendGoal_Request *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(act_mov_pkg__action__Navigate_SendGoal_Request));
  bool success = act_mov_pkg__action__Navigate_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
act_mov_pkg__action__Navigate_SendGoal_Request__destroy(act_mov_pkg__action__Navigate_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    act_mov_pkg__action__Navigate_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
act_mov_pkg__action__Navigate_SendGoal_Request__Sequence__init(act_mov_pkg__action__Navigate_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_SendGoal_Request * data = NULL;

  if (size) {
    data = (act_mov_pkg__action__Navigate_SendGoal_Request *)allocator.zero_allocate(size, sizeof(act_mov_pkg__action__Navigate_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = act_mov_pkg__action__Navigate_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        act_mov_pkg__action__Navigate_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
act_mov_pkg__action__Navigate_SendGoal_Request__Sequence__fini(act_mov_pkg__action__Navigate_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      act_mov_pkg__action__Navigate_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

act_mov_pkg__action__Navigate_SendGoal_Request__Sequence *
act_mov_pkg__action__Navigate_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_SendGoal_Request__Sequence * array = (act_mov_pkg__action__Navigate_SendGoal_Request__Sequence *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = act_mov_pkg__action__Navigate_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
act_mov_pkg__action__Navigate_SendGoal_Request__Sequence__destroy(act_mov_pkg__action__Navigate_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    act_mov_pkg__action__Navigate_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
act_mov_pkg__action__Navigate_SendGoal_Request__Sequence__are_equal(const act_mov_pkg__action__Navigate_SendGoal_Request__Sequence * lhs, const act_mov_pkg__action__Navigate_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!act_mov_pkg__action__Navigate_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_SendGoal_Request__Sequence__copy(
  const act_mov_pkg__action__Navigate_SendGoal_Request__Sequence * input,
  act_mov_pkg__action__Navigate_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(act_mov_pkg__action__Navigate_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    act_mov_pkg__action__Navigate_SendGoal_Request * data =
      (act_mov_pkg__action__Navigate_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!act_mov_pkg__action__Navigate_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          act_mov_pkg__action__Navigate_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!act_mov_pkg__action__Navigate_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
act_mov_pkg__action__Navigate_SendGoal_Response__init(act_mov_pkg__action__Navigate_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    act_mov_pkg__action__Navigate_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
act_mov_pkg__action__Navigate_SendGoal_Response__fini(act_mov_pkg__action__Navigate_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
act_mov_pkg__action__Navigate_SendGoal_Response__are_equal(const act_mov_pkg__action__Navigate_SendGoal_Response * lhs, const act_mov_pkg__action__Navigate_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_SendGoal_Response__copy(
  const act_mov_pkg__action__Navigate_SendGoal_Response * input,
  act_mov_pkg__action__Navigate_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

act_mov_pkg__action__Navigate_SendGoal_Response *
act_mov_pkg__action__Navigate_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_SendGoal_Response * msg = (act_mov_pkg__action__Navigate_SendGoal_Response *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(act_mov_pkg__action__Navigate_SendGoal_Response));
  bool success = act_mov_pkg__action__Navigate_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
act_mov_pkg__action__Navigate_SendGoal_Response__destroy(act_mov_pkg__action__Navigate_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    act_mov_pkg__action__Navigate_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
act_mov_pkg__action__Navigate_SendGoal_Response__Sequence__init(act_mov_pkg__action__Navigate_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_SendGoal_Response * data = NULL;

  if (size) {
    data = (act_mov_pkg__action__Navigate_SendGoal_Response *)allocator.zero_allocate(size, sizeof(act_mov_pkg__action__Navigate_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = act_mov_pkg__action__Navigate_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        act_mov_pkg__action__Navigate_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
act_mov_pkg__action__Navigate_SendGoal_Response__Sequence__fini(act_mov_pkg__action__Navigate_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      act_mov_pkg__action__Navigate_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

act_mov_pkg__action__Navigate_SendGoal_Response__Sequence *
act_mov_pkg__action__Navigate_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_SendGoal_Response__Sequence * array = (act_mov_pkg__action__Navigate_SendGoal_Response__Sequence *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = act_mov_pkg__action__Navigate_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
act_mov_pkg__action__Navigate_SendGoal_Response__Sequence__destroy(act_mov_pkg__action__Navigate_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    act_mov_pkg__action__Navigate_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
act_mov_pkg__action__Navigate_SendGoal_Response__Sequence__are_equal(const act_mov_pkg__action__Navigate_SendGoal_Response__Sequence * lhs, const act_mov_pkg__action__Navigate_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!act_mov_pkg__action__Navigate_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_SendGoal_Response__Sequence__copy(
  const act_mov_pkg__action__Navigate_SendGoal_Response__Sequence * input,
  act_mov_pkg__action__Navigate_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(act_mov_pkg__action__Navigate_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    act_mov_pkg__action__Navigate_SendGoal_Response * data =
      (act_mov_pkg__action__Navigate_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!act_mov_pkg__action__Navigate_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          act_mov_pkg__action__Navigate_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!act_mov_pkg__action__Navigate_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "act_mov_pkg/action/detail/navigate__functions.h"

bool
act_mov_pkg__action__Navigate_SendGoal_Event__init(act_mov_pkg__action__Navigate_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    act_mov_pkg__action__Navigate_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!act_mov_pkg__action__Navigate_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    act_mov_pkg__action__Navigate_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!act_mov_pkg__action__Navigate_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    act_mov_pkg__action__Navigate_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
act_mov_pkg__action__Navigate_SendGoal_Event__fini(act_mov_pkg__action__Navigate_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  act_mov_pkg__action__Navigate_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  act_mov_pkg__action__Navigate_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
act_mov_pkg__action__Navigate_SendGoal_Event__are_equal(const act_mov_pkg__action__Navigate_SendGoal_Event * lhs, const act_mov_pkg__action__Navigate_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!act_mov_pkg__action__Navigate_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!act_mov_pkg__action__Navigate_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_SendGoal_Event__copy(
  const act_mov_pkg__action__Navigate_SendGoal_Event * input,
  act_mov_pkg__action__Navigate_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!act_mov_pkg__action__Navigate_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!act_mov_pkg__action__Navigate_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

act_mov_pkg__action__Navigate_SendGoal_Event *
act_mov_pkg__action__Navigate_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_SendGoal_Event * msg = (act_mov_pkg__action__Navigate_SendGoal_Event *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(act_mov_pkg__action__Navigate_SendGoal_Event));
  bool success = act_mov_pkg__action__Navigate_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
act_mov_pkg__action__Navigate_SendGoal_Event__destroy(act_mov_pkg__action__Navigate_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    act_mov_pkg__action__Navigate_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
act_mov_pkg__action__Navigate_SendGoal_Event__Sequence__init(act_mov_pkg__action__Navigate_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_SendGoal_Event * data = NULL;

  if (size) {
    data = (act_mov_pkg__action__Navigate_SendGoal_Event *)allocator.zero_allocate(size, sizeof(act_mov_pkg__action__Navigate_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = act_mov_pkg__action__Navigate_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        act_mov_pkg__action__Navigate_SendGoal_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
act_mov_pkg__action__Navigate_SendGoal_Event__Sequence__fini(act_mov_pkg__action__Navigate_SendGoal_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      act_mov_pkg__action__Navigate_SendGoal_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

act_mov_pkg__action__Navigate_SendGoal_Event__Sequence *
act_mov_pkg__action__Navigate_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_SendGoal_Event__Sequence * array = (act_mov_pkg__action__Navigate_SendGoal_Event__Sequence *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = act_mov_pkg__action__Navigate_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
act_mov_pkg__action__Navigate_SendGoal_Event__Sequence__destroy(act_mov_pkg__action__Navigate_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    act_mov_pkg__action__Navigate_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
act_mov_pkg__action__Navigate_SendGoal_Event__Sequence__are_equal(const act_mov_pkg__action__Navigate_SendGoal_Event__Sequence * lhs, const act_mov_pkg__action__Navigate_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!act_mov_pkg__action__Navigate_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_SendGoal_Event__Sequence__copy(
  const act_mov_pkg__action__Navigate_SendGoal_Event__Sequence * input,
  act_mov_pkg__action__Navigate_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(act_mov_pkg__action__Navigate_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    act_mov_pkg__action__Navigate_SendGoal_Event * data =
      (act_mov_pkg__action__Navigate_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!act_mov_pkg__action__Navigate_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          act_mov_pkg__action__Navigate_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!act_mov_pkg__action__Navigate_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
act_mov_pkg__action__Navigate_GetResult_Request__init(act_mov_pkg__action__Navigate_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    act_mov_pkg__action__Navigate_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
act_mov_pkg__action__Navigate_GetResult_Request__fini(act_mov_pkg__action__Navigate_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
act_mov_pkg__action__Navigate_GetResult_Request__are_equal(const act_mov_pkg__action__Navigate_GetResult_Request * lhs, const act_mov_pkg__action__Navigate_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_GetResult_Request__copy(
  const act_mov_pkg__action__Navigate_GetResult_Request * input,
  act_mov_pkg__action__Navigate_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

act_mov_pkg__action__Navigate_GetResult_Request *
act_mov_pkg__action__Navigate_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_GetResult_Request * msg = (act_mov_pkg__action__Navigate_GetResult_Request *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(act_mov_pkg__action__Navigate_GetResult_Request));
  bool success = act_mov_pkg__action__Navigate_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
act_mov_pkg__action__Navigate_GetResult_Request__destroy(act_mov_pkg__action__Navigate_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    act_mov_pkg__action__Navigate_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
act_mov_pkg__action__Navigate_GetResult_Request__Sequence__init(act_mov_pkg__action__Navigate_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_GetResult_Request * data = NULL;

  if (size) {
    data = (act_mov_pkg__action__Navigate_GetResult_Request *)allocator.zero_allocate(size, sizeof(act_mov_pkg__action__Navigate_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = act_mov_pkg__action__Navigate_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        act_mov_pkg__action__Navigate_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
act_mov_pkg__action__Navigate_GetResult_Request__Sequence__fini(act_mov_pkg__action__Navigate_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      act_mov_pkg__action__Navigate_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

act_mov_pkg__action__Navigate_GetResult_Request__Sequence *
act_mov_pkg__action__Navigate_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_GetResult_Request__Sequence * array = (act_mov_pkg__action__Navigate_GetResult_Request__Sequence *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = act_mov_pkg__action__Navigate_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
act_mov_pkg__action__Navigate_GetResult_Request__Sequence__destroy(act_mov_pkg__action__Navigate_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    act_mov_pkg__action__Navigate_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
act_mov_pkg__action__Navigate_GetResult_Request__Sequence__are_equal(const act_mov_pkg__action__Navigate_GetResult_Request__Sequence * lhs, const act_mov_pkg__action__Navigate_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!act_mov_pkg__action__Navigate_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_GetResult_Request__Sequence__copy(
  const act_mov_pkg__action__Navigate_GetResult_Request__Sequence * input,
  act_mov_pkg__action__Navigate_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(act_mov_pkg__action__Navigate_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    act_mov_pkg__action__Navigate_GetResult_Request * data =
      (act_mov_pkg__action__Navigate_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!act_mov_pkg__action__Navigate_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          act_mov_pkg__action__Navigate_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!act_mov_pkg__action__Navigate_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "act_mov_pkg/action/detail/navigate__functions.h"

bool
act_mov_pkg__action__Navigate_GetResult_Response__init(act_mov_pkg__action__Navigate_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!act_mov_pkg__action__Navigate_Result__init(&msg->result)) {
    act_mov_pkg__action__Navigate_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
act_mov_pkg__action__Navigate_GetResult_Response__fini(act_mov_pkg__action__Navigate_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  act_mov_pkg__action__Navigate_Result__fini(&msg->result);
}

bool
act_mov_pkg__action__Navigate_GetResult_Response__are_equal(const act_mov_pkg__action__Navigate_GetResult_Response * lhs, const act_mov_pkg__action__Navigate_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!act_mov_pkg__action__Navigate_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_GetResult_Response__copy(
  const act_mov_pkg__action__Navigate_GetResult_Response * input,
  act_mov_pkg__action__Navigate_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!act_mov_pkg__action__Navigate_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

act_mov_pkg__action__Navigate_GetResult_Response *
act_mov_pkg__action__Navigate_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_GetResult_Response * msg = (act_mov_pkg__action__Navigate_GetResult_Response *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(act_mov_pkg__action__Navigate_GetResult_Response));
  bool success = act_mov_pkg__action__Navigate_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
act_mov_pkg__action__Navigate_GetResult_Response__destroy(act_mov_pkg__action__Navigate_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    act_mov_pkg__action__Navigate_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
act_mov_pkg__action__Navigate_GetResult_Response__Sequence__init(act_mov_pkg__action__Navigate_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_GetResult_Response * data = NULL;

  if (size) {
    data = (act_mov_pkg__action__Navigate_GetResult_Response *)allocator.zero_allocate(size, sizeof(act_mov_pkg__action__Navigate_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = act_mov_pkg__action__Navigate_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        act_mov_pkg__action__Navigate_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
act_mov_pkg__action__Navigate_GetResult_Response__Sequence__fini(act_mov_pkg__action__Navigate_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      act_mov_pkg__action__Navigate_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

act_mov_pkg__action__Navigate_GetResult_Response__Sequence *
act_mov_pkg__action__Navigate_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_GetResult_Response__Sequence * array = (act_mov_pkg__action__Navigate_GetResult_Response__Sequence *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = act_mov_pkg__action__Navigate_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
act_mov_pkg__action__Navigate_GetResult_Response__Sequence__destroy(act_mov_pkg__action__Navigate_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    act_mov_pkg__action__Navigate_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
act_mov_pkg__action__Navigate_GetResult_Response__Sequence__are_equal(const act_mov_pkg__action__Navigate_GetResult_Response__Sequence * lhs, const act_mov_pkg__action__Navigate_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!act_mov_pkg__action__Navigate_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_GetResult_Response__Sequence__copy(
  const act_mov_pkg__action__Navigate_GetResult_Response__Sequence * input,
  act_mov_pkg__action__Navigate_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(act_mov_pkg__action__Navigate_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    act_mov_pkg__action__Navigate_GetResult_Response * data =
      (act_mov_pkg__action__Navigate_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!act_mov_pkg__action__Navigate_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          act_mov_pkg__action__Navigate_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!act_mov_pkg__action__Navigate_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "act_mov_pkg/action/detail/navigate__functions.h"

bool
act_mov_pkg__action__Navigate_GetResult_Event__init(act_mov_pkg__action__Navigate_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    act_mov_pkg__action__Navigate_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!act_mov_pkg__action__Navigate_GetResult_Request__Sequence__init(&msg->request, 0)) {
    act_mov_pkg__action__Navigate_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!act_mov_pkg__action__Navigate_GetResult_Response__Sequence__init(&msg->response, 0)) {
    act_mov_pkg__action__Navigate_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
act_mov_pkg__action__Navigate_GetResult_Event__fini(act_mov_pkg__action__Navigate_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  act_mov_pkg__action__Navigate_GetResult_Request__Sequence__fini(&msg->request);
  // response
  act_mov_pkg__action__Navigate_GetResult_Response__Sequence__fini(&msg->response);
}

bool
act_mov_pkg__action__Navigate_GetResult_Event__are_equal(const act_mov_pkg__action__Navigate_GetResult_Event * lhs, const act_mov_pkg__action__Navigate_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!act_mov_pkg__action__Navigate_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!act_mov_pkg__action__Navigate_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_GetResult_Event__copy(
  const act_mov_pkg__action__Navigate_GetResult_Event * input,
  act_mov_pkg__action__Navigate_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!act_mov_pkg__action__Navigate_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!act_mov_pkg__action__Navigate_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

act_mov_pkg__action__Navigate_GetResult_Event *
act_mov_pkg__action__Navigate_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_GetResult_Event * msg = (act_mov_pkg__action__Navigate_GetResult_Event *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(act_mov_pkg__action__Navigate_GetResult_Event));
  bool success = act_mov_pkg__action__Navigate_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
act_mov_pkg__action__Navigate_GetResult_Event__destroy(act_mov_pkg__action__Navigate_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    act_mov_pkg__action__Navigate_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
act_mov_pkg__action__Navigate_GetResult_Event__Sequence__init(act_mov_pkg__action__Navigate_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_GetResult_Event * data = NULL;

  if (size) {
    data = (act_mov_pkg__action__Navigate_GetResult_Event *)allocator.zero_allocate(size, sizeof(act_mov_pkg__action__Navigate_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = act_mov_pkg__action__Navigate_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        act_mov_pkg__action__Navigate_GetResult_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
act_mov_pkg__action__Navigate_GetResult_Event__Sequence__fini(act_mov_pkg__action__Navigate_GetResult_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      act_mov_pkg__action__Navigate_GetResult_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

act_mov_pkg__action__Navigate_GetResult_Event__Sequence *
act_mov_pkg__action__Navigate_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_GetResult_Event__Sequence * array = (act_mov_pkg__action__Navigate_GetResult_Event__Sequence *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = act_mov_pkg__action__Navigate_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
act_mov_pkg__action__Navigate_GetResult_Event__Sequence__destroy(act_mov_pkg__action__Navigate_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    act_mov_pkg__action__Navigate_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
act_mov_pkg__action__Navigate_GetResult_Event__Sequence__are_equal(const act_mov_pkg__action__Navigate_GetResult_Event__Sequence * lhs, const act_mov_pkg__action__Navigate_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!act_mov_pkg__action__Navigate_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_GetResult_Event__Sequence__copy(
  const act_mov_pkg__action__Navigate_GetResult_Event__Sequence * input,
  act_mov_pkg__action__Navigate_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(act_mov_pkg__action__Navigate_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    act_mov_pkg__action__Navigate_GetResult_Event * data =
      (act_mov_pkg__action__Navigate_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!act_mov_pkg__action__Navigate_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          act_mov_pkg__action__Navigate_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!act_mov_pkg__action__Navigate_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "act_mov_pkg/action/detail/navigate__functions.h"

bool
act_mov_pkg__action__Navigate_FeedbackMessage__init(act_mov_pkg__action__Navigate_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    act_mov_pkg__action__Navigate_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!act_mov_pkg__action__Navigate_Feedback__init(&msg->feedback)) {
    act_mov_pkg__action__Navigate_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
act_mov_pkg__action__Navigate_FeedbackMessage__fini(act_mov_pkg__action__Navigate_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  act_mov_pkg__action__Navigate_Feedback__fini(&msg->feedback);
}

bool
act_mov_pkg__action__Navigate_FeedbackMessage__are_equal(const act_mov_pkg__action__Navigate_FeedbackMessage * lhs, const act_mov_pkg__action__Navigate_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!act_mov_pkg__action__Navigate_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_FeedbackMessage__copy(
  const act_mov_pkg__action__Navigate_FeedbackMessage * input,
  act_mov_pkg__action__Navigate_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!act_mov_pkg__action__Navigate_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

act_mov_pkg__action__Navigate_FeedbackMessage *
act_mov_pkg__action__Navigate_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_FeedbackMessage * msg = (act_mov_pkg__action__Navigate_FeedbackMessage *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(act_mov_pkg__action__Navigate_FeedbackMessage));
  bool success = act_mov_pkg__action__Navigate_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
act_mov_pkg__action__Navigate_FeedbackMessage__destroy(act_mov_pkg__action__Navigate_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    act_mov_pkg__action__Navigate_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
act_mov_pkg__action__Navigate_FeedbackMessage__Sequence__init(act_mov_pkg__action__Navigate_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_FeedbackMessage * data = NULL;

  if (size) {
    data = (act_mov_pkg__action__Navigate_FeedbackMessage *)allocator.zero_allocate(size, sizeof(act_mov_pkg__action__Navigate_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = act_mov_pkg__action__Navigate_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        act_mov_pkg__action__Navigate_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
act_mov_pkg__action__Navigate_FeedbackMessage__Sequence__fini(act_mov_pkg__action__Navigate_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      act_mov_pkg__action__Navigate_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

act_mov_pkg__action__Navigate_FeedbackMessage__Sequence *
act_mov_pkg__action__Navigate_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  act_mov_pkg__action__Navigate_FeedbackMessage__Sequence * array = (act_mov_pkg__action__Navigate_FeedbackMessage__Sequence *)allocator.allocate(sizeof(act_mov_pkg__action__Navigate_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = act_mov_pkg__action__Navigate_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
act_mov_pkg__action__Navigate_FeedbackMessage__Sequence__destroy(act_mov_pkg__action__Navigate_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    act_mov_pkg__action__Navigate_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
act_mov_pkg__action__Navigate_FeedbackMessage__Sequence__are_equal(const act_mov_pkg__action__Navigate_FeedbackMessage__Sequence * lhs, const act_mov_pkg__action__Navigate_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!act_mov_pkg__action__Navigate_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
act_mov_pkg__action__Navigate_FeedbackMessage__Sequence__copy(
  const act_mov_pkg__action__Navigate_FeedbackMessage__Sequence * input,
  act_mov_pkg__action__Navigate_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(act_mov_pkg__action__Navigate_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    act_mov_pkg__action__Navigate_FeedbackMessage * data =
      (act_mov_pkg__action__Navigate_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!act_mov_pkg__action__Navigate_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          act_mov_pkg__action__Navigate_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!act_mov_pkg__action__Navigate_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
