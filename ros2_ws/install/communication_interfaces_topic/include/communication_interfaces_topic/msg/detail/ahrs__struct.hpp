// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication_interfaces_topic:msg/AHRS.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__AHRS__STRUCT_HPP_
#define COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__AHRS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__communication_interfaces_topic__msg__AHRS __attribute__((deprecated))
#else
# define DEPRECATED__communication_interfaces_topic__msg__AHRS __declspec(deprecated)
#endif

namespace communication_interfaces_topic
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AHRS_
{
  using Type = AHRS_<ContainerAllocator>;

  explicit AHRS_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->ahrs_data.begin(), this->ahrs_data.end(), 0.0f);
    }
  }

  explicit AHRS_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    ahrs_data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->ahrs_data.begin(), this->ahrs_data.end(), 0.0f);
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _ahrs_data_type =
    std::array<float, 6>;
  _ahrs_data_type ahrs_data;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__ahrs_data(
    const std::array<float, 6> & _arg)
  {
    this->ahrs_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication_interfaces_topic::msg::AHRS_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_interfaces_topic::msg::AHRS_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_interfaces_topic::msg::AHRS_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_interfaces_topic::msg::AHRS_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_interfaces_topic::msg::AHRS_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces_topic::msg::AHRS_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_interfaces_topic::msg::AHRS_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces_topic::msg::AHRS_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_interfaces_topic::msg::AHRS_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_interfaces_topic::msg::AHRS_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_interfaces_topic__msg__AHRS
    std::shared_ptr<communication_interfaces_topic::msg::AHRS_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_interfaces_topic__msg__AHRS
    std::shared_ptr<communication_interfaces_topic::msg::AHRS_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AHRS_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->ahrs_data != other.ahrs_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const AHRS_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AHRS_

// alias to use template instance with default allocator
using AHRS =
  communication_interfaces_topic::msg::AHRS_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace communication_interfaces_topic

#endif  // COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__AHRS__STRUCT_HPP_
