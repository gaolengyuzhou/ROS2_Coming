// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from usm_interface:msg/LocalMsg.idl
// generated code does not contain a copyright notice

#ifndef USM_INTERFACE__MSG__DETAIL__LOCAL_MSG__STRUCT_HPP_
#define USM_INTERFACE__MSG__DETAIL__LOCAL_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__usm_interface__msg__LocalMsg __attribute__((deprecated))
#else
# define DEPRECATED__usm_interface__msg__LocalMsg __declspec(deprecated)
#endif

namespace usm_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalMsg_
{
  using Type = LocalMsg_<ContainerAllocator>;

  explicit LocalMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->height = 0.0;
      this->depth = 0.0;
    }
  }

  explicit LocalMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->height = 0.0;
      this->depth = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _height_type =
    double;
  _height_type height;
  using _depth_type =
    double;
  _depth_type depth;

  // setters for named parameter idiom
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
  Type & set__height(
    const double & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__depth(
    const double & _arg)
  {
    this->depth = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    usm_interface::msg::LocalMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const usm_interface::msg::LocalMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<usm_interface::msg::LocalMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<usm_interface::msg::LocalMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      usm_interface::msg::LocalMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<usm_interface::msg::LocalMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      usm_interface::msg::LocalMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<usm_interface::msg::LocalMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<usm_interface::msg::LocalMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<usm_interface::msg::LocalMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__usm_interface__msg__LocalMsg
    std::shared_ptr<usm_interface::msg::LocalMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__usm_interface__msg__LocalMsg
    std::shared_ptr<usm_interface::msg::LocalMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalMsg_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalMsg_

// alias to use template instance with default allocator
using LocalMsg =
  usm_interface::msg::LocalMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace usm_interface

#endif  // USM_INTERFACE__MSG__DETAIL__LOCAL_MSG__STRUCT_HPP_
