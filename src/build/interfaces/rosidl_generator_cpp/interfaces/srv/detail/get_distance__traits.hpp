// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/GetDistance.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__GET_DISTANCE__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__GET_DISTANCE__TRAITS_HPP_

#include "interfaces/srv/detail/get_distance__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::GetDistance_Request>()
{
  return "interfaces::srv::GetDistance_Request";
}

template<>
inline const char * name<interfaces::srv::GetDistance_Request>()
{
  return "interfaces/srv/GetDistance_Request";
}

template<>
struct has_fixed_size<interfaces::srv::GetDistance_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::GetDistance_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::GetDistance_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::GetDistance_Response>()
{
  return "interfaces::srv::GetDistance_Response";
}

template<>
inline const char * name<interfaces::srv::GetDistance_Response>()
{
  return "interfaces/srv/GetDistance_Response";
}

template<>
struct has_fixed_size<interfaces::srv::GetDistance_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::GetDistance_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::GetDistance_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::GetDistance>()
{
  return "interfaces::srv::GetDistance";
}

template<>
inline const char * name<interfaces::srv::GetDistance>()
{
  return "interfaces/srv/GetDistance";
}

template<>
struct has_fixed_size<interfaces::srv::GetDistance>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::GetDistance_Request>::value &&
    has_fixed_size<interfaces::srv::GetDistance_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::GetDistance>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::GetDistance_Request>::value &&
    has_bounded_size<interfaces::srv::GetDistance_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::GetDistance>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::GetDistance_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::GetDistance_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__GET_DISTANCE__TRAITS_HPP_
