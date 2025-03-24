// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from usm_interface:msg/LedMsg.idl
// generated code does not contain a copyright notice

#ifndef USM_INTERFACE__MSG__DETAIL__LED_MSG__STRUCT_HPP_
#define USM_INTERFACE__MSG__DETAIL__LED_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__usm_interface__msg__LedMsg __attribute__((deprecated))
#else
# define DEPRECATED__usm_interface__msg__LedMsg __declspec(deprecated)
#endif

namespace usm_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedMsg_
{
  using Type = LedMsg_<ContainerAllocator>;

  explicit LedMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_id = 0l;
      this->on = false;
    }
  }

  explicit LedMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_id = 0l;
      this->on = false;
    }
  }

  // field types and members
  using _led_id_type =
    int32_t;
  _led_id_type led_id;
  using _on_type =
    bool;
  _on_type on;

  // setters for named parameter idiom
  Type & set__led_id(
    const int32_t & _arg)
  {
    this->led_id = _arg;
    return *this;
  }
  Type & set__on(
    const bool & _arg)
  {
    this->on = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    usm_interface::msg::LedMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const usm_interface::msg::LedMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<usm_interface::msg::LedMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<usm_interface::msg::LedMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      usm_interface::msg::LedMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<usm_interface::msg::LedMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      usm_interface::msg::LedMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<usm_interface::msg::LedMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<usm_interface::msg::LedMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<usm_interface::msg::LedMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__usm_interface__msg__LedMsg
    std::shared_ptr<usm_interface::msg::LedMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__usm_interface__msg__LedMsg
    std::shared_ptr<usm_interface::msg::LedMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedMsg_ & other) const
  {
    if (this->led_id != other.led_id) {
      return false;
    }
    if (this->on != other.on) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedMsg_

// alias to use template instance with default allocator
using LedMsg =
  usm_interface::msg::LedMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace usm_interface

#endif  // USM_INTERFACE__MSG__DETAIL__LED_MSG__STRUCT_HPP_
