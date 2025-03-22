// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication_interfaces_topic:msg/DVL.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__DVL__STRUCT_HPP_
#define COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__DVL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__communication_interfaces_topic__msg__DVL __attribute__((deprecated))
#else
# define DEPRECATED__communication_interfaces_topic__msg__DVL __declspec(deprecated)
#endif

namespace communication_interfaces_topic
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DVL_
{
  using Type = DVL_<ContainerAllocator>;

  explicit DVL_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 9>::iterator, double>(this->dvl_data.begin(), this->dvl_data.end(), 0.0);
    }
  }

  explicit DVL_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dvl_data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 9>::iterator, double>(this->dvl_data.begin(), this->dvl_data.end(), 0.0);
    }
  }

  // field types and members
  using _dvl_data_type =
    std::array<double, 9>;
  _dvl_data_type dvl_data;

  // setters for named parameter idiom
  Type & set__dvl_data(
    const std::array<double, 9> & _arg)
  {
    this->dvl_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication_interfaces_topic::msg::DVL_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_interfaces_topic::msg::DVL_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_interfaces_topic::msg::DVL_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_interfaces_topic::msg::DVL_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_interfaces_topic::msg::DVL_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces_topic::msg::DVL_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_interfaces_topic::msg::DVL_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces_topic::msg::DVL_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_interfaces_topic::msg::DVL_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_interfaces_topic::msg::DVL_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_interfaces_topic__msg__DVL
    std::shared_ptr<communication_interfaces_topic::msg::DVL_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_interfaces_topic__msg__DVL
    std::shared_ptr<communication_interfaces_topic::msg::DVL_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DVL_ & other) const
  {
    if (this->dvl_data != other.dvl_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const DVL_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DVL_

// alias to use template instance with default allocator
using DVL =
  communication_interfaces_topic::msg::DVL_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace communication_interfaces_topic

#endif  // COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__DVL__STRUCT_HPP_
