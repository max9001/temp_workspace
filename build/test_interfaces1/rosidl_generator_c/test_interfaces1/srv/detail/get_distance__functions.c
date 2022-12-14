// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_interfaces1:srv/GetDistance.idl
// generated code does not contain a copyright notice
#include "test_interfaces1/srv/detail/get_distance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
test_interfaces1__srv__GetDistance_Request__init(test_interfaces1__srv__GetDistance_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
test_interfaces1__srv__GetDistance_Request__fini(test_interfaces1__srv__GetDistance_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

test_interfaces1__srv__GetDistance_Request *
test_interfaces1__srv__GetDistance_Request__create()
{
  test_interfaces1__srv__GetDistance_Request * msg = (test_interfaces1__srv__GetDistance_Request *)malloc(sizeof(test_interfaces1__srv__GetDistance_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_interfaces1__srv__GetDistance_Request));
  bool success = test_interfaces1__srv__GetDistance_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_interfaces1__srv__GetDistance_Request__destroy(test_interfaces1__srv__GetDistance_Request * msg)
{
  if (msg) {
    test_interfaces1__srv__GetDistance_Request__fini(msg);
  }
  free(msg);
}


bool
test_interfaces1__srv__GetDistance_Request__Sequence__init(test_interfaces1__srv__GetDistance_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_interfaces1__srv__GetDistance_Request * data = NULL;
  if (size) {
    data = (test_interfaces1__srv__GetDistance_Request *)calloc(size, sizeof(test_interfaces1__srv__GetDistance_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_interfaces1__srv__GetDistance_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_interfaces1__srv__GetDistance_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
test_interfaces1__srv__GetDistance_Request__Sequence__fini(test_interfaces1__srv__GetDistance_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_interfaces1__srv__GetDistance_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

test_interfaces1__srv__GetDistance_Request__Sequence *
test_interfaces1__srv__GetDistance_Request__Sequence__create(size_t size)
{
  test_interfaces1__srv__GetDistance_Request__Sequence * array = (test_interfaces1__srv__GetDistance_Request__Sequence *)malloc(sizeof(test_interfaces1__srv__GetDistance_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_interfaces1__srv__GetDistance_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_interfaces1__srv__GetDistance_Request__Sequence__destroy(test_interfaces1__srv__GetDistance_Request__Sequence * array)
{
  if (array) {
    test_interfaces1__srv__GetDistance_Request__Sequence__fini(array);
  }
  free(array);
}


bool
test_interfaces1__srv__GetDistance_Response__init(test_interfaces1__srv__GetDistance_Response * msg)
{
  if (!msg) {
    return false;
  }
  // distance
  return true;
}

void
test_interfaces1__srv__GetDistance_Response__fini(test_interfaces1__srv__GetDistance_Response * msg)
{
  if (!msg) {
    return;
  }
  // distance
}

test_interfaces1__srv__GetDistance_Response *
test_interfaces1__srv__GetDistance_Response__create()
{
  test_interfaces1__srv__GetDistance_Response * msg = (test_interfaces1__srv__GetDistance_Response *)malloc(sizeof(test_interfaces1__srv__GetDistance_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_interfaces1__srv__GetDistance_Response));
  bool success = test_interfaces1__srv__GetDistance_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_interfaces1__srv__GetDistance_Response__destroy(test_interfaces1__srv__GetDistance_Response * msg)
{
  if (msg) {
    test_interfaces1__srv__GetDistance_Response__fini(msg);
  }
  free(msg);
}


bool
test_interfaces1__srv__GetDistance_Response__Sequence__init(test_interfaces1__srv__GetDistance_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_interfaces1__srv__GetDistance_Response * data = NULL;
  if (size) {
    data = (test_interfaces1__srv__GetDistance_Response *)calloc(size, sizeof(test_interfaces1__srv__GetDistance_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_interfaces1__srv__GetDistance_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_interfaces1__srv__GetDistance_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
test_interfaces1__srv__GetDistance_Response__Sequence__fini(test_interfaces1__srv__GetDistance_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_interfaces1__srv__GetDistance_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

test_interfaces1__srv__GetDistance_Response__Sequence *
test_interfaces1__srv__GetDistance_Response__Sequence__create(size_t size)
{
  test_interfaces1__srv__GetDistance_Response__Sequence * array = (test_interfaces1__srv__GetDistance_Response__Sequence *)malloc(sizeof(test_interfaces1__srv__GetDistance_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_interfaces1__srv__GetDistance_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_interfaces1__srv__GetDistance_Response__Sequence__destroy(test_interfaces1__srv__GetDistance_Response__Sequence * array)
{
  if (array) {
    test_interfaces1__srv__GetDistance_Response__Sequence__fini(array);
  }
  free(array);
}
