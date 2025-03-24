// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from usm_interface:msg/JointMsg.idl
// generated code does not contain a copyright notice

#ifndef USM_INTERFACE__MSG__DETAIL__JOINT_MSG__STRUCT_HPP_
#define USM_INTERFACE__MSG__DETAIL__JOINT_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'all_controller_msg'
#include "communication_interfaces/msg/detail/thruster_msg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__usm_interface__msg__JointMsg __attribute__((deprecated))
#else
# define DEPRECATED__usm_interface__msg__JointMsg __declspec(deprecated)
#endif

namespace usm_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointMsg_
{
  using Type = JointMsg_<ContainerAllocator>;

  explicit JointMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit JointMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _all_controller_msg_type =
    std::vector<communication_interfaces::msg::ThrusterMsg_<ContainerAllocator>, typename ContainerAllocator::template rebind<communication_interfaces::msg::ThrusterMsg_<ContainerAllocator>>::other>;
  _all_controller_msg_type all_controller_msg;

  // setters for named parameter idiom
  Type & set__all_controller_msg(
    const std::vector<communication_interfaces::msg::ThrusterMsg_<ContainerAllocator>, typename ContainerAllocator::template rebind<communication_interfaces::msg::ThrusterMsg_<ContainerAllocator>>::other> & _arg)
  {
    this->all_controller_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    usm_interface::msg::JointMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const usm_interface::msg::JointMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<usm_interface::msg::JointMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<usm_interface::msg::JointMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      usm_interface::msg::JointMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<usm_interface::msg::JointMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      usm_interface::msg::JointMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<usm_interface::msg::JointMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<usm_interface::msg::JointMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<usm_interface::msg::JointMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__usm_interface__msg__JointMsg
    std::shared_ptr<usm_interface::msg::JointMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__usm_interface__msg__JointMsg
    std::shared_ptr<usm_interface::msg::JointMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointMsg_ & other) const
  {
    if (this->all_controller_msg != other.all_controller_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointMsg_

// alias to use template instance with default allocator
using JointMsg =
  usm_interface::msg::JointMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace usm_interface

#endif  // USM_INTERFACE__MSG__DETAIL__JOINT_MSG__STRUCT_HPP_
