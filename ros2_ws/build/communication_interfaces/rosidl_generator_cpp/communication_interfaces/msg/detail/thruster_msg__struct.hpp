// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication_interfaces:msg/ThrusterMsg.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__THRUSTER_MSG__STRUCT_HPP_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__THRUSTER_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__communication_interfaces__msg__ThrusterMsg __attribute__((deprecated))
#else
# define DEPRECATED__communication_interfaces__msg__ThrusterMsg __declspec(deprecated)
#endif

namespace communication_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ThrusterMsg_
{
  using Type = ThrusterMsg_<ContainerAllocator>;

  explicit ThrusterMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->controller_id = 0l;
      this->controller_set = 0.0;
    }
  }

  explicit ThrusterMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->controller_id = 0l;
      this->controller_set = 0.0;
    }
  }

  // field types and members
  using _controller_id_type =
    int32_t;
  _controller_id_type controller_id;
  using _controller_set_type =
    double;
  _controller_set_type controller_set;

  // setters for named parameter idiom
  Type & set__controller_id(
    const int32_t & _arg)
  {
    this->controller_id = _arg;
    return *this;
  }
  Type & set__controller_set(
    const double & _arg)
  {
    this->controller_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication_interfaces::msg::ThrusterMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_interfaces::msg::ThrusterMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_interfaces::msg::ThrusterMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_interfaces::msg::ThrusterMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_interfaces::msg::ThrusterMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces::msg::ThrusterMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_interfaces::msg::ThrusterMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces::msg::ThrusterMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_interfaces::msg::ThrusterMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_interfaces::msg::ThrusterMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_interfaces__msg__ThrusterMsg
    std::shared_ptr<communication_interfaces::msg::ThrusterMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_interfaces__msg__ThrusterMsg
    std::shared_ptr<communication_interfaces::msg::ThrusterMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ThrusterMsg_ & other) const
  {
    if (this->controller_id != other.controller_id) {
      return false;
    }
    if (this->controller_set != other.controller_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ThrusterMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ThrusterMsg_

// alias to use template instance with default allocator
using ThrusterMsg =
  communication_interfaces::msg::ThrusterMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace communication_interfaces

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__THRUSTER_MSG__STRUCT_HPP_
