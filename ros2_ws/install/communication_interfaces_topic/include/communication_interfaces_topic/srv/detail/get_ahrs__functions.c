// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication_interfaces_topic:srv/GetAHRS.idl
// generated code does not contain a copyright notice
#include "communication_interfaces_topic/srv/detail/get_ahrs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
communication_interfaces_topic__srv__GetAHRS_Request__init(communication_interfaces_topic__srv__GetAHRS_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
communication_interfaces_topic__srv__GetAHRS_Request__fini(communication_interfaces_topic__srv__GetAHRS_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
communication_interfaces_topic__srv__GetAHRS_Request__are_equal(const communication_interfaces_topic__srv__GetAHRS_Request * lhs, const communication_interfaces_topic__srv__GetAHRS_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
communication_interfaces_topic__srv__GetAHRS_Request__copy(
  const communication_interfaces_topic__srv__GetAHRS_Request * input,
  communication_interfaces_topic__srv__GetAHRS_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

communication_interfaces_topic__srv__GetAHRS_Request *
communication_interfaces_topic__srv__GetAHRS_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces_topic__srv__GetAHRS_Request * msg = (communication_interfaces_topic__srv__GetAHRS_Request *)allocator.allocate(sizeof(communication_interfaces_topic__srv__GetAHRS_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_interfaces_topic__srv__GetAHRS_Request));
  bool success = communication_interfaces_topic__srv__GetAHRS_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication_interfaces_topic__srv__GetAHRS_Request__destroy(communication_interfaces_topic__srv__GetAHRS_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication_interfaces_topic__srv__GetAHRS_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication_interfaces_topic__srv__GetAHRS_Request__Sequence__init(communication_interfaces_topic__srv__GetAHRS_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces_topic__srv__GetAHRS_Request * data = NULL;

  if (size) {
    data = (communication_interfaces_topic__srv__GetAHRS_Request *)allocator.zero_allocate(size, sizeof(communication_interfaces_topic__srv__GetAHRS_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_interfaces_topic__srv__GetAHRS_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_interfaces_topic__srv__GetAHRS_Request__fini(&data[i - 1]);
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
communication_interfaces_topic__srv__GetAHRS_Request__Sequence__fini(communication_interfaces_topic__srv__GetAHRS_Request__Sequence * array)
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
      communication_interfaces_topic__srv__GetAHRS_Request__fini(&array->data[i]);
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

communication_interfaces_topic__srv__GetAHRS_Request__Sequence *
communication_interfaces_topic__srv__GetAHRS_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces_topic__srv__GetAHRS_Request__Sequence * array = (communication_interfaces_topic__srv__GetAHRS_Request__Sequence *)allocator.allocate(sizeof(communication_interfaces_topic__srv__GetAHRS_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication_interfaces_topic__srv__GetAHRS_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication_interfaces_topic__srv__GetAHRS_Request__Sequence__destroy(communication_interfaces_topic__srv__GetAHRS_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication_interfaces_topic__srv__GetAHRS_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication_interfaces_topic__srv__GetAHRS_Request__Sequence__are_equal(const communication_interfaces_topic__srv__GetAHRS_Request__Sequence * lhs, const communication_interfaces_topic__srv__GetAHRS_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication_interfaces_topic__srv__GetAHRS_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication_interfaces_topic__srv__GetAHRS_Request__Sequence__copy(
  const communication_interfaces_topic__srv__GetAHRS_Request__Sequence * input,
  communication_interfaces_topic__srv__GetAHRS_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication_interfaces_topic__srv__GetAHRS_Request);
    communication_interfaces_topic__srv__GetAHRS_Request * data =
      (communication_interfaces_topic__srv__GetAHRS_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication_interfaces_topic__srv__GetAHRS_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          communication_interfaces_topic__srv__GetAHRS_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication_interfaces_topic__srv__GetAHRS_Request__copy(
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
// Member `ahrs_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
communication_interfaces_topic__srv__GetAHRS_Response__init(communication_interfaces_topic__srv__GetAHRS_Response * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    communication_interfaces_topic__srv__GetAHRS_Response__fini(msg);
    return false;
  }
  // ahrs_data
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ahrs_data, 0)) {
    communication_interfaces_topic__srv__GetAHRS_Response__fini(msg);
    return false;
  }
  return true;
}

void
communication_interfaces_topic__srv__GetAHRS_Response__fini(communication_interfaces_topic__srv__GetAHRS_Response * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // ahrs_data
  rosidl_runtime_c__float__Sequence__fini(&msg->ahrs_data);
}

bool
communication_interfaces_topic__srv__GetAHRS_Response__are_equal(const communication_interfaces_topic__srv__GetAHRS_Response * lhs, const communication_interfaces_topic__srv__GetAHRS_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // ahrs_data
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->ahrs_data), &(rhs->ahrs_data)))
  {
    return false;
  }
  return true;
}

bool
communication_interfaces_topic__srv__GetAHRS_Response__copy(
  const communication_interfaces_topic__srv__GetAHRS_Response * input,
  communication_interfaces_topic__srv__GetAHRS_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // ahrs_data
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->ahrs_data), &(output->ahrs_data)))
  {
    return false;
  }
  return true;
}

communication_interfaces_topic__srv__GetAHRS_Response *
communication_interfaces_topic__srv__GetAHRS_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces_topic__srv__GetAHRS_Response * msg = (communication_interfaces_topic__srv__GetAHRS_Response *)allocator.allocate(sizeof(communication_interfaces_topic__srv__GetAHRS_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_interfaces_topic__srv__GetAHRS_Response));
  bool success = communication_interfaces_topic__srv__GetAHRS_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication_interfaces_topic__srv__GetAHRS_Response__destroy(communication_interfaces_topic__srv__GetAHRS_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication_interfaces_topic__srv__GetAHRS_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication_interfaces_topic__srv__GetAHRS_Response__Sequence__init(communication_interfaces_topic__srv__GetAHRS_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces_topic__srv__GetAHRS_Response * data = NULL;

  if (size) {
    data = (communication_interfaces_topic__srv__GetAHRS_Response *)allocator.zero_allocate(size, sizeof(communication_interfaces_topic__srv__GetAHRS_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_interfaces_topic__srv__GetAHRS_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_interfaces_topic__srv__GetAHRS_Response__fini(&data[i - 1]);
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
communication_interfaces_topic__srv__GetAHRS_Response__Sequence__fini(communication_interfaces_topic__srv__GetAHRS_Response__Sequence * array)
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
      communication_interfaces_topic__srv__GetAHRS_Response__fini(&array->data[i]);
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

communication_interfaces_topic__srv__GetAHRS_Response__Sequence *
communication_interfaces_topic__srv__GetAHRS_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces_topic__srv__GetAHRS_Response__Sequence * array = (communication_interfaces_topic__srv__GetAHRS_Response__Sequence *)allocator.allocate(sizeof(communication_interfaces_topic__srv__GetAHRS_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication_interfaces_topic__srv__GetAHRS_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication_interfaces_topic__srv__GetAHRS_Response__Sequence__destroy(communication_interfaces_topic__srv__GetAHRS_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication_interfaces_topic__srv__GetAHRS_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication_interfaces_topic__srv__GetAHRS_Response__Sequence__are_equal(const communication_interfaces_topic__srv__GetAHRS_Response__Sequence * lhs, const communication_interfaces_topic__srv__GetAHRS_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication_interfaces_topic__srv__GetAHRS_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication_interfaces_topic__srv__GetAHRS_Response__Sequence__copy(
  const communication_interfaces_topic__srv__GetAHRS_Response__Sequence * input,
  communication_interfaces_topic__srv__GetAHRS_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication_interfaces_topic__srv__GetAHRS_Response);
    communication_interfaces_topic__srv__GetAHRS_Response * data =
      (communication_interfaces_topic__srv__GetAHRS_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication_interfaces_topic__srv__GetAHRS_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          communication_interfaces_topic__srv__GetAHRS_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication_interfaces_topic__srv__GetAHRS_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
