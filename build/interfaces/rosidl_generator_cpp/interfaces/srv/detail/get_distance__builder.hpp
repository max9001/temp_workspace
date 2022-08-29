// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/GetDistance.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__GET_DISTANCE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__GET_DISTANCE__BUILDER_HPP_

#include "interfaces/srv/detail/get_distance__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_GetDistance_Request_y
{
public:
  explicit Init_GetDistance_Request_y(::interfaces::srv::GetDistance_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::GetDistance_Request y(::interfaces::srv::GetDistance_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::GetDistance_Request msg_;
};

class Init_GetDistance_Request_x
{
public:
  Init_GetDistance_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDistance_Request_y x(::interfaces::srv::GetDistance_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GetDistance_Request_y(msg_);
  }

private:
  ::interfaces::srv::GetDistance_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::GetDistance_Request>()
{
  return interfaces::srv::builder::Init_GetDistance_Request_x();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_GetDistance_Response_distance
{
public:
  Init_GetDistance_Response_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::GetDistance_Response distance(::interfaces::srv::GetDistance_Response::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::GetDistance_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::GetDistance_Response>()
{
  return interfaces::srv::builder::Init_GetDistance_Response_distance();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__GET_DISTANCE__BUILDER_HPP_
