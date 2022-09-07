// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_interfaces1:srv/GetDistance.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES1__SRV__DETAIL__GET_DISTANCE__STRUCT_H_
#define TEST_INTERFACES1__SRV__DETAIL__GET_DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetDistance in the package test_interfaces1.
typedef struct test_interfaces1__srv__GetDistance_Request
{
  int64_t x;
  int64_t y;
} test_interfaces1__srv__GetDistance_Request;

// Struct for a sequence of test_interfaces1__srv__GetDistance_Request.
typedef struct test_interfaces1__srv__GetDistance_Request__Sequence
{
  test_interfaces1__srv__GetDistance_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_interfaces1__srv__GetDistance_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/GetDistance in the package test_interfaces1.
typedef struct test_interfaces1__srv__GetDistance_Response
{
  int64_t distance;
} test_interfaces1__srv__GetDistance_Response;

// Struct for a sequence of test_interfaces1__srv__GetDistance_Response.
typedef struct test_interfaces1__srv__GetDistance_Response__Sequence
{
  test_interfaces1__srv__GetDistance_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_interfaces1__srv__GetDistance_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_INTERFACES1__SRV__DETAIL__GET_DISTANCE__STRUCT_H_
