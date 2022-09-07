// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_interfaces1:srv/GetDistance.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES1__SRV__DETAIL__GET_DISTANCE__BUILDER_HPP_
#define TEST_INTERFACES1__SRV__DETAIL__GET_DISTANCE__BUILDER_HPP_

#include "test_interfaces1/srv/detail/get_distance__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace test_interfaces1
{

namespace srv
{

namespace builder
{

class Init_GetDistance_Request_y
{
public:
  explicit Init_GetDistance_Request_y(::test_interfaces1::srv::GetDistance_Request & msg)
  : msg_(msg)
  {}
  ::test_interfaces1::srv::GetDistance_Request y(::test_interfaces1::srv::GetDistance_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces1::srv::GetDistance_Request msg_;
};

class Init_GetDistance_Request_x
{
public:
  Init_GetDistance_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDistance_Request_y x(::test_interfaces1::srv::GetDistance_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GetDistance_Request_y(msg_);
  }

private:
  ::test_interfaces1::srv::GetDistance_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces1::srv::GetDistance_Request>()
{
  return test_interfaces1::srv::builder::Init_GetDistance_Request_x();
}

}  // namespace test_interfaces1


namespace test_interfaces1
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
  ::test_interfaces1::srv::GetDistance_Response distance(::test_interfaces1::srv::GetDistance_Response::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces1::srv::GetDistance_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces1::srv::GetDistance_Response>()
{
  return test_interfaces1::srv::builder::Init_GetDistance_Response_distance();
}

}  // namespace test_interfaces1

#endif  // TEST_INTERFACES1__SRV__DETAIL__GET_DISTANCE__BUILDER_HPP_
