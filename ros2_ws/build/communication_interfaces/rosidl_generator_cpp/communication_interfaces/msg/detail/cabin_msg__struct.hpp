// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication_interfaces:msg/CabinMsg.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__CABIN_MSG__STRUCT_HPP_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__CABIN_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__communication_interfaces__msg__CabinMsg __attribute__((deprecated))
#else
# define DEPRECATED__communication_interfaces__msg__CabinMsg __declspec(deprecated)
#endif

namespace communication_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CabinMsg_
{
  using Type = CabinMsg_<ContainerAllocator>;

  explicit CabinMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cabin_id = 0l;
      this->temperature = 0.0;
      this->humidity = 0.0;
      this->pressure = 0.0;
      this->name = "";
    }
  }

  explicit CabinMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cabin_id = 0l;
      this->temperature = 0.0;
      this->humidity = 0.0;
      this->pressure = 0.0;
      this->name = "";
    }
  }

  // field types and members
  using _cabin_id_type =
    int32_t;
  _cabin_id_type cabin_id;
  using _temperature_type =
    double;
  _temperature_type temperature;
  using _humidity_type =
    double;
  _humidity_type humidity;
  using _pressure_type =
    double;
  _pressure_type pressure;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__cabin_id(
    const int32_t & _arg)
  {
    this->cabin_id = _arg;
    return *this;
  }
  Type & set__temperature(
    const double & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__humidity(
    const double & _arg)
  {
    this->humidity = _arg;
    return *this;
  }
  Type & set__pressure(
    const double & _arg)
  {
    this->pressure = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication_interfaces::msg::CabinMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_interfaces::msg::CabinMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_interfaces::msg::CabinMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_interfaces::msg::CabinMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_interfaces::msg::CabinMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces::msg::CabinMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_interfaces::msg::CabinMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces::msg::CabinMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_interfaces::msg::CabinMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_interfaces::msg::CabinMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_interfaces__msg__CabinMsg
    std::shared_ptr<communication_interfaces::msg::CabinMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_interfaces__msg__CabinMsg
    std::shared_ptr<communication_interfaces::msg::CabinMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CabinMsg_ & other) const
  {
    if (this->cabin_id != other.cabin_id) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->humidity != other.humidity) {
      return false;
    }
    if (this->pressure != other.pressure) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const CabinMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CabinMsg_

// alias to use template instance with default allocator
using CabinMsg =
  communication_interfaces::msg::CabinMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace communication_interfaces

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__CABIN_MSG__STRUCT_HPP_
