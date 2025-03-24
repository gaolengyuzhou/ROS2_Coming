// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from usm_interface:msg/ErrorMsg.idl
// generated code does not contain a copyright notice

#ifndef USM_INTERFACE__MSG__DETAIL__ERROR_MSG__STRUCT_HPP_
#define USM_INTERFACE__MSG__DETAIL__ERROR_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__usm_interface__msg__ErrorMsg __attribute__((deprecated))
#else
# define DEPRECATED__usm_interface__msg__ErrorMsg __declspec(deprecated)
#endif

namespace usm_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ErrorMsg_
{
  using Type = ErrorMsg_<ContainerAllocator>;

  explicit ErrorMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  explicit ErrorMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    usm_interface::msg::ErrorMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const usm_interface::msg::ErrorMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<usm_interface::msg::ErrorMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<usm_interface::msg::ErrorMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      usm_interface::msg::ErrorMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<usm_interface::msg::ErrorMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      usm_interface::msg::ErrorMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<usm_interface::msg::ErrorMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<usm_interface::msg::ErrorMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<usm_interface::msg::ErrorMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__usm_interface__msg__ErrorMsg
    std::shared_ptr<usm_interface::msg::ErrorMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__usm_interface__msg__ErrorMsg
    std::shared_ptr<usm_interface::msg::ErrorMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ErrorMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const ErrorMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ErrorMsg_

// alias to use template instance with default allocator
using ErrorMsg =
  usm_interface::msg::ErrorMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace usm_interface

#endif  // USM_INTERFACE__MSG__DETAIL__ERROR_MSG__STRUCT_HPP_
