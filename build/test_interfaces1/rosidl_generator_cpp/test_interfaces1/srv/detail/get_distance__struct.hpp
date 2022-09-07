// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from test_interfaces1:srv/GetDistance.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES1__SRV__DETAIL__GET_DISTANCE__STRUCT_HPP_
#define TEST_INTERFACES1__SRV__DETAIL__GET_DISTANCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__test_interfaces1__srv__GetDistance_Request __attribute__((deprecated))
#else
# define DEPRECATED__test_interfaces1__srv__GetDistance_Request __declspec(deprecated)
#endif

namespace test_interfaces1
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDistance_Request_
{
  using Type = GetDistance_Request_<ContainerAllocator>;

  explicit GetDistance_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
    }
  }

  explicit GetDistance_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
    }
  }

  // field types and members
  using _x_type =
    int64_t;
  _x_type x;
  using _y_type =
    int64_t;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const int64_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int64_t & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test_interfaces1::srv::GetDistance_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_interfaces1::srv::GetDistance_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_interfaces1::srv::GetDistance_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_interfaces1::srv::GetDistance_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_interfaces1::srv::GetDistance_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_interfaces1::srv::GetDistance_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_interfaces1::srv::GetDistance_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_interfaces1::srv::GetDistance_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_interfaces1::srv::GetDistance_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_interfaces1::srv::GetDistance_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test_interfaces1__srv__GetDistance_Request
    std::shared_ptr<test_interfaces1::srv::GetDistance_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test_interfaces1__srv__GetDistance_Request
    std::shared_ptr<test_interfaces1::srv::GetDistance_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDistance_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDistance_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDistance_Request_

// alias to use template instance with default allocator
using GetDistance_Request =
  test_interfaces1::srv::GetDistance_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace test_interfaces1


#ifndef _WIN32
# define DEPRECATED__test_interfaces1__srv__GetDistance_Response __attribute__((deprecated))
#else
# define DEPRECATED__test_interfaces1__srv__GetDistance_Response __declspec(deprecated)
#endif

namespace test_interfaces1
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDistance_Response_
{
  using Type = GetDistance_Response_<ContainerAllocator>;

  explicit GetDistance_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0ll;
    }
  }

  explicit GetDistance_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0ll;
    }
  }

  // field types and members
  using _distance_type =
    int64_t;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__distance(
    const int64_t & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test_interfaces1::srv::GetDistance_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_interfaces1::srv::GetDistance_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_interfaces1::srv::GetDistance_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_interfaces1::srv::GetDistance_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_interfaces1::srv::GetDistance_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_interfaces1::srv::GetDistance_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_interfaces1::srv::GetDistance_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_interfaces1::srv::GetDistance_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_interfaces1::srv::GetDistance_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_interfaces1::srv::GetDistance_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test_interfaces1__srv__GetDistance_Response
    std::shared_ptr<test_interfaces1::srv::GetDistance_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test_interfaces1__srv__GetDistance_Response
    std::shared_ptr<test_interfaces1::srv::GetDistance_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDistance_Response_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDistance_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDistance_Response_

// alias to use template instance with default allocator
using GetDistance_Response =
  test_interfaces1::srv::GetDistance_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace test_interfaces1

namespace test_interfaces1
{

namespace srv
{

struct GetDistance
{
  using Request = test_interfaces1::srv::GetDistance_Request;
  using Response = test_interfaces1::srv::GetDistance_Response;
};

}  // namespace srv

}  // namespace test_interfaces1

#endif  // TEST_INTERFACES1__SRV__DETAIL__GET_DISTANCE__STRUCT_HPP_
