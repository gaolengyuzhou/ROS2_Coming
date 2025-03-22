// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication_interfaces_topic:msg/Thrust.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__THRUST__STRUCT_HPP_
#define COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__THRUST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__communication_interfaces_topic__msg__Thrust __attribute__((deprecated))
#else
# define DEPRECATED__communication_interfaces_topic__msg__Thrust __declspec(deprecated)
#endif

namespace communication_interfaces_topic
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Thrust_
{
  using Type = Thrust_<ContainerAllocator>;

  explicit Thrust_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 12>::iterator, float>(this->thrust_data.begin(), this->thrust_data.end(), 0.0f);
    }
  }

  explicit Thrust_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : thrust_data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 12>::iterator, float>(this->thrust_data.begin(), this->thrust_data.end(), 0.0f);
    }
  }

  // field types and members
  using _thrust_data_type =
    std::array<float, 12>;
  _thrust_data_type thrust_data;

  // setters for named parameter idiom
  Type & set__thrust_data(
    const std::array<float, 12> & _arg)
  {
    this->thrust_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication_interfaces_topic::msg::Thrust_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_interfaces_topic::msg::Thrust_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_interfaces_topic::msg::Thrust_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_interfaces_topic::msg::Thrust_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_interfaces_topic::msg::Thrust_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces_topic::msg::Thrust_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_interfaces_topic::msg::Thrust_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces_topic::msg::Thrust_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_interfaces_topic::msg::Thrust_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_interfaces_topic::msg::Thrust_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_interfaces_topic__msg__Thrust
    std::shared_ptr<communication_interfaces_topic::msg::Thrust_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_interfaces_topic__msg__Thrust
    std::shared_ptr<communication_interfaces_topic::msg::Thrust_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Thrust_ & other) const
  {
    if (this->thrust_data != other.thrust_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Thrust_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Thrust_

// alias to use template instance with default allocator
using Thrust =
  communication_interfaces_topic::msg::Thrust_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace communication_interfaces_topic

#endif  // COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__THRUST__STRUCT_HPP_
