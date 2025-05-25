// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from service_camera_pkg:srv/TurnCamera.idl
// generated code does not contain a copyright notice
#include "service_camera_pkg/srv/detail/turn_camera__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
service_camera_pkg__srv__TurnCamera_Request__init(service_camera_pkg__srv__TurnCamera_Request * msg)
{
  if (!msg) {
    return false;
  }
  // degree_turn
  return true;
}

void
service_camera_pkg__srv__TurnCamera_Request__fini(service_camera_pkg__srv__TurnCamera_Request * msg)
{
  if (!msg) {
    return;
  }
  // degree_turn
}

bool
service_camera_pkg__srv__TurnCamera_Request__are_equal(const service_camera_pkg__srv__TurnCamera_Request * lhs, const service_camera_pkg__srv__TurnCamera_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // degree_turn
  if (lhs->degree_turn != rhs->degree_turn) {
    return false;
  }
  return true;
}

bool
service_camera_pkg__srv__TurnCamera_Request__copy(
  const service_camera_pkg__srv__TurnCamera_Request * input,
  service_camera_pkg__srv__TurnCamera_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // degree_turn
  output->degree_turn = input->degree_turn;
  return true;
}

service_camera_pkg__srv__TurnCamera_Request *
service_camera_pkg__srv__TurnCamera_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  service_camera_pkg__srv__TurnCamera_Request * msg = (service_camera_pkg__srv__TurnCamera_Request *)allocator.allocate(sizeof(service_camera_pkg__srv__TurnCamera_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(service_camera_pkg__srv__TurnCamera_Request));
  bool success = service_camera_pkg__srv__TurnCamera_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
service_camera_pkg__srv__TurnCamera_Request__destroy(service_camera_pkg__srv__TurnCamera_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    service_camera_pkg__srv__TurnCamera_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
service_camera_pkg__srv__TurnCamera_Request__Sequence__init(service_camera_pkg__srv__TurnCamera_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  service_camera_pkg__srv__TurnCamera_Request * data = NULL;

  if (size) {
    data = (service_camera_pkg__srv__TurnCamera_Request *)allocator.zero_allocate(size, sizeof(service_camera_pkg__srv__TurnCamera_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = service_camera_pkg__srv__TurnCamera_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        service_camera_pkg__srv__TurnCamera_Request__fini(&data[i - 1]);
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
service_camera_pkg__srv__TurnCamera_Request__Sequence__fini(service_camera_pkg__srv__TurnCamera_Request__Sequence * array)
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
      service_camera_pkg__srv__TurnCamera_Request__fini(&array->data[i]);
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

service_camera_pkg__srv__TurnCamera_Request__Sequence *
service_camera_pkg__srv__TurnCamera_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  service_camera_pkg__srv__TurnCamera_Request__Sequence * array = (service_camera_pkg__srv__TurnCamera_Request__Sequence *)allocator.allocate(sizeof(service_camera_pkg__srv__TurnCamera_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = service_camera_pkg__srv__TurnCamera_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
service_camera_pkg__srv__TurnCamera_Request__Sequence__destroy(service_camera_pkg__srv__TurnCamera_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    service_camera_pkg__srv__TurnCamera_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
service_camera_pkg__srv__TurnCamera_Request__Sequence__are_equal(const service_camera_pkg__srv__TurnCamera_Request__Sequence * lhs, const service_camera_pkg__srv__TurnCamera_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!service_camera_pkg__srv__TurnCamera_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
service_camera_pkg__srv__TurnCamera_Request__Sequence__copy(
  const service_camera_pkg__srv__TurnCamera_Request__Sequence * input,
  service_camera_pkg__srv__TurnCamera_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(service_camera_pkg__srv__TurnCamera_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    service_camera_pkg__srv__TurnCamera_Request * data =
      (service_camera_pkg__srv__TurnCamera_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!service_camera_pkg__srv__TurnCamera_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          service_camera_pkg__srv__TurnCamera_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!service_camera_pkg__srv__TurnCamera_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `camera_image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
service_camera_pkg__srv__TurnCamera_Response__init(service_camera_pkg__srv__TurnCamera_Response * msg)
{
  if (!msg) {
    return false;
  }
  // camera_image
  if (!sensor_msgs__msg__Image__init(&msg->camera_image)) {
    service_camera_pkg__srv__TurnCamera_Response__fini(msg);
    return false;
  }
  return true;
}

void
service_camera_pkg__srv__TurnCamera_Response__fini(service_camera_pkg__srv__TurnCamera_Response * msg)
{
  if (!msg) {
    return;
  }
  // camera_image
  sensor_msgs__msg__Image__fini(&msg->camera_image);
}

bool
service_camera_pkg__srv__TurnCamera_Response__are_equal(const service_camera_pkg__srv__TurnCamera_Response * lhs, const service_camera_pkg__srv__TurnCamera_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // camera_image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->camera_image), &(rhs->camera_image)))
  {
    return false;
  }
  return true;
}

bool
service_camera_pkg__srv__TurnCamera_Response__copy(
  const service_camera_pkg__srv__TurnCamera_Response * input,
  service_camera_pkg__srv__TurnCamera_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // camera_image
  if (!sensor_msgs__msg__Image__copy(
      &(input->camera_image), &(output->camera_image)))
  {
    return false;
  }
  return true;
}

service_camera_pkg__srv__TurnCamera_Response *
service_camera_pkg__srv__TurnCamera_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  service_camera_pkg__srv__TurnCamera_Response * msg = (service_camera_pkg__srv__TurnCamera_Response *)allocator.allocate(sizeof(service_camera_pkg__srv__TurnCamera_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(service_camera_pkg__srv__TurnCamera_Response));
  bool success = service_camera_pkg__srv__TurnCamera_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
service_camera_pkg__srv__TurnCamera_Response__destroy(service_camera_pkg__srv__TurnCamera_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    service_camera_pkg__srv__TurnCamera_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
service_camera_pkg__srv__TurnCamera_Response__Sequence__init(service_camera_pkg__srv__TurnCamera_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  service_camera_pkg__srv__TurnCamera_Response * data = NULL;

  if (size) {
    data = (service_camera_pkg__srv__TurnCamera_Response *)allocator.zero_allocate(size, sizeof(service_camera_pkg__srv__TurnCamera_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = service_camera_pkg__srv__TurnCamera_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        service_camera_pkg__srv__TurnCamera_Response__fini(&data[i - 1]);
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
service_camera_pkg__srv__TurnCamera_Response__Sequence__fini(service_camera_pkg__srv__TurnCamera_Response__Sequence * array)
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
      service_camera_pkg__srv__TurnCamera_Response__fini(&array->data[i]);
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

service_camera_pkg__srv__TurnCamera_Response__Sequence *
service_camera_pkg__srv__TurnCamera_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  service_camera_pkg__srv__TurnCamera_Response__Sequence * array = (service_camera_pkg__srv__TurnCamera_Response__Sequence *)allocator.allocate(sizeof(service_camera_pkg__srv__TurnCamera_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = service_camera_pkg__srv__TurnCamera_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
service_camera_pkg__srv__TurnCamera_Response__Sequence__destroy(service_camera_pkg__srv__TurnCamera_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    service_camera_pkg__srv__TurnCamera_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
service_camera_pkg__srv__TurnCamera_Response__Sequence__are_equal(const service_camera_pkg__srv__TurnCamera_Response__Sequence * lhs, const service_camera_pkg__srv__TurnCamera_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!service_camera_pkg__srv__TurnCamera_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
service_camera_pkg__srv__TurnCamera_Response__Sequence__copy(
  const service_camera_pkg__srv__TurnCamera_Response__Sequence * input,
  service_camera_pkg__srv__TurnCamera_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(service_camera_pkg__srv__TurnCamera_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    service_camera_pkg__srv__TurnCamera_Response * data =
      (service_camera_pkg__srv__TurnCamera_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!service_camera_pkg__srv__TurnCamera_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          service_camera_pkg__srv__TurnCamera_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!service_camera_pkg__srv__TurnCamera_Response__copy(
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
// #include "service_camera_pkg/srv/detail/turn_camera__functions.h"

bool
service_camera_pkg__srv__TurnCamera_Event__init(service_camera_pkg__srv__TurnCamera_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    service_camera_pkg__srv__TurnCamera_Event__fini(msg);
    return false;
  }
  // request
  if (!service_camera_pkg__srv__TurnCamera_Request__Sequence__init(&msg->request, 0)) {
    service_camera_pkg__srv__TurnCamera_Event__fini(msg);
    return false;
  }
  // response
  if (!service_camera_pkg__srv__TurnCamera_Response__Sequence__init(&msg->response, 0)) {
    service_camera_pkg__srv__TurnCamera_Event__fini(msg);
    return false;
  }
  return true;
}

void
service_camera_pkg__srv__TurnCamera_Event__fini(service_camera_pkg__srv__TurnCamera_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  service_camera_pkg__srv__TurnCamera_Request__Sequence__fini(&msg->request);
  // response
  service_camera_pkg__srv__TurnCamera_Response__Sequence__fini(&msg->response);
}

bool
service_camera_pkg__srv__TurnCamera_Event__are_equal(const service_camera_pkg__srv__TurnCamera_Event * lhs, const service_camera_pkg__srv__TurnCamera_Event * rhs)
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
  if (!service_camera_pkg__srv__TurnCamera_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!service_camera_pkg__srv__TurnCamera_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
service_camera_pkg__srv__TurnCamera_Event__copy(
  const service_camera_pkg__srv__TurnCamera_Event * input,
  service_camera_pkg__srv__TurnCamera_Event * output)
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
  if (!service_camera_pkg__srv__TurnCamera_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!service_camera_pkg__srv__TurnCamera_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

service_camera_pkg__srv__TurnCamera_Event *
service_camera_pkg__srv__TurnCamera_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  service_camera_pkg__srv__TurnCamera_Event * msg = (service_camera_pkg__srv__TurnCamera_Event *)allocator.allocate(sizeof(service_camera_pkg__srv__TurnCamera_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(service_camera_pkg__srv__TurnCamera_Event));
  bool success = service_camera_pkg__srv__TurnCamera_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
service_camera_pkg__srv__TurnCamera_Event__destroy(service_camera_pkg__srv__TurnCamera_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    service_camera_pkg__srv__TurnCamera_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
service_camera_pkg__srv__TurnCamera_Event__Sequence__init(service_camera_pkg__srv__TurnCamera_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  service_camera_pkg__srv__TurnCamera_Event * data = NULL;

  if (size) {
    data = (service_camera_pkg__srv__TurnCamera_Event *)allocator.zero_allocate(size, sizeof(service_camera_pkg__srv__TurnCamera_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = service_camera_pkg__srv__TurnCamera_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        service_camera_pkg__srv__TurnCamera_Event__fini(&data[i - 1]);
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
service_camera_pkg__srv__TurnCamera_Event__Sequence__fini(service_camera_pkg__srv__TurnCamera_Event__Sequence * array)
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
      service_camera_pkg__srv__TurnCamera_Event__fini(&array->data[i]);
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

service_camera_pkg__srv__TurnCamera_Event__Sequence *
service_camera_pkg__srv__TurnCamera_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  service_camera_pkg__srv__TurnCamera_Event__Sequence * array = (service_camera_pkg__srv__TurnCamera_Event__Sequence *)allocator.allocate(sizeof(service_camera_pkg__srv__TurnCamera_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = service_camera_pkg__srv__TurnCamera_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
service_camera_pkg__srv__TurnCamera_Event__Sequence__destroy(service_camera_pkg__srv__TurnCamera_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    service_camera_pkg__srv__TurnCamera_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
service_camera_pkg__srv__TurnCamera_Event__Sequence__are_equal(const service_camera_pkg__srv__TurnCamera_Event__Sequence * lhs, const service_camera_pkg__srv__TurnCamera_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!service_camera_pkg__srv__TurnCamera_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
service_camera_pkg__srv__TurnCamera_Event__Sequence__copy(
  const service_camera_pkg__srv__TurnCamera_Event__Sequence * input,
  service_camera_pkg__srv__TurnCamera_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(service_camera_pkg__srv__TurnCamera_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    service_camera_pkg__srv__TurnCamera_Event * data =
      (service_camera_pkg__srv__TurnCamera_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!service_camera_pkg__srv__TurnCamera_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          service_camera_pkg__srv__TurnCamera_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!service_camera_pkg__srv__TurnCamera_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
