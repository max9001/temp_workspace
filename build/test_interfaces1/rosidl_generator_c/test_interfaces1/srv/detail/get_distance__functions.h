// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from test_interfaces1:srv/GetDistance.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES1__SRV__DETAIL__GET_DISTANCE__FUNCTIONS_H_
#define TEST_INTERFACES1__SRV__DETAIL__GET_DISTANCE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "test_interfaces1/msg/rosidl_generator_c__visibility_control.h"

#include "test_interfaces1/srv/detail/get_distance__struct.h"

/// Initialize srv/GetDistance message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test_interfaces1__srv__GetDistance_Request
 * )) before or use
 * test_interfaces1__srv__GetDistance_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces1
bool
test_interfaces1__srv__GetDistance_Request__init(test_interfaces1__srv__GetDistance_Request * msg);

/// Finalize srv/GetDistance message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces1
void
test_interfaces1__srv__GetDistance_Request__fini(test_interfaces1__srv__GetDistance_Request * msg);

/// Create srv/GetDistance message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test_interfaces1__srv__GetDistance_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces1
test_interfaces1__srv__GetDistance_Request *
test_interfaces1__srv__GetDistance_Request__create();

/// Destroy srv/GetDistance message.
/**
 * It calls
 * test_interfaces1__srv__GetDistance_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces1
void
test_interfaces1__srv__GetDistance_Request__destroy(test_interfaces1__srv__GetDistance_Request * msg);


/// Initialize array of srv/GetDistance messages.
/**
 * It allocates the memory for the number of elements and calls
 * test_interfaces1__srv__GetDistance_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces1
bool
test_interfaces1__srv__GetDistance_Request__Sequence__init(test_interfaces1__srv__GetDistance_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetDistance messages.
/**
 * It calls
 * test_interfaces1__srv__GetDistance_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces1
void
test_interfaces1__srv__GetDistance_Request__Sequence__fini(test_interfaces1__srv__GetDistance_Request__Sequence * array);

/// Create array of srv/GetDistance messages.
/**
 * It allocates the memory for the array and calls
 * test_interfaces1__srv__GetDistance_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces1
test_interfaces1__srv__GetDistance_Request__Sequence *
test_interfaces1__srv__GetDistance_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetDistance messages.
/**
 * It calls
 * test_interfaces1__srv__GetDistance_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces1
void
test_interfaces1__srv__GetDistance_Request__Sequence__destroy(test_interfaces1__srv__GetDistance_Request__Sequence * array);

/// Initialize srv/GetDistance message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test_interfaces1__srv__GetDistance_Response
 * )) before or use
 * test_interfaces1__srv__GetDistance_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces1
bool
test_interfaces1__srv__GetDistance_Response__init(test_interfaces1__srv__GetDistance_Response * msg);

/// Finalize srv/GetDistance message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces1
void
test_interfaces1__srv__GetDistance_Response__fini(test_interfaces1__srv__GetDistance_Response * msg);

/// Create srv/GetDistance message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test_interfaces1__srv__GetDistance_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces1
test_interfaces1__srv__GetDistance_Response *
test_interfaces1__srv__GetDistance_Response__create();

/// Destroy srv/GetDistance message.
/**
 * It calls
 * test_interfaces1__srv__GetDistance_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces1
void
test_interfaces1__srv__GetDistance_Response__destroy(test_interfaces1__srv__GetDistance_Response * msg);


/// Initialize array of srv/GetDistance messages.
/**
 * It allocates the memory for the number of elements and calls
 * test_interfaces1__srv__GetDistance_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces1
bool
test_interfaces1__srv__GetDistance_Response__Sequence__init(test_interfaces1__srv__GetDistance_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetDistance messages.
/**
 * It calls
 * test_interfaces1__srv__GetDistance_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces1
void
test_interfaces1__srv__GetDistance_Response__Sequence__fini(test_interfaces1__srv__GetDistance_Response__Sequence * array);

/// Create array of srv/GetDistance messages.
/**
 * It allocates the memory for the array and calls
 * test_interfaces1__srv__GetDistance_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces1
test_interfaces1__srv__GetDistance_Response__Sequence *
test_interfaces1__srv__GetDistance_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetDistance messages.
/**
 * It calls
 * test_interfaces1__srv__GetDistance_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces1
void
test_interfaces1__srv__GetDistance_Response__Sequence__destroy(test_interfaces1__srv__GetDistance_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TEST_INTERFACES1__SRV__DETAIL__GET_DISTANCE__FUNCTIONS_H_
