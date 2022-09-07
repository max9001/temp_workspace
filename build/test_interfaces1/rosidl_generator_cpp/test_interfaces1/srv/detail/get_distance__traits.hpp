// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_interfaces1:srv/GetDistance.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES1__SRV__DETAIL__GET_DISTANCE__TRAITS_HPP_
#define TEST_INTERFACES1__SRV__DETAIL__GET_DISTANCE__TRAITS_HPP_

#include "test_interfaces1/srv/detail/get_distance__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interfaces1::srv::GetDistance_Request>()
{
  return "test_interfaces1::srv::GetDistance_Request";
}

template<>
inline const char * name<test_interfaces1::srv::GetDistance_Request>()
{
  return "test_interfaces1/srv/GetDistance_Request";
}

template<>
struct has_fixed_size<test_interfaces1::srv::GetDistance_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_interfaces1::srv::GetDistance_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_interfaces1::srv::GetDistance_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interfaces1::srv::GetDistance_Response>()
{
  return "test_interfaces1::srv::GetDistance_Response";
}

template<>
inline const char * name<test_interfaces1::srv::GetDistance_Response>()
{
  return "test_interfaces1/srv/GetDistance_Response";
}

template<>
struct has_fixed_size<test_interfaces1::srv::GetDistance_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_interfaces1::srv::GetDistance_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_interfaces1::srv::GetDistance_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interfaces1::srv::GetDistance>()
{
  return "test_interfaces1::srv::GetDistance";
}

template<>
inline const char * name<test_interfaces1::srv::GetDistance>()
{
  return "test_interfaces1/srv/GetDistance";
}

template<>
struct has_fixed_size<test_interfaces1::srv::GetDistance>
  : std::integral_constant<
    bool,
    has_fixed_size<test_interfaces1::srv::GetDistance_Request>::value &&
    has_fixed_size<test_interfaces1::srv::GetDistance_Response>::value
  >
{
};

template<>
struct has_bounded_size<test_interfaces1::srv::GetDistance>
  : std::integral_constant<
    bool,
    has_bounded_size<test_interfaces1::srv::GetDistance_Request>::value &&
    has_bounded_size<test_interfaces1::srv::GetDistance_Response>::value
  >
{
};

template<>
struct is_service<test_interfaces1::srv::GetDistance>
  : std::true_type
{
};

template<>
struct is_service_request<test_interfaces1::srv::GetDistance_Request>
  : std::true_type
{
};

template<>
struct is_service_response<test_interfaces1::srv::GetDistance_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TEST_INTERFACES1__SRV__DETAIL__GET_DISTANCE__TRAITS_HPP_
