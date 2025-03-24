// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from usm_interface:msg/AllCabinsMsg.idl
// generated code does not contain a copyright notice

#ifndef USM_INTERFACE__MSG__DETAIL__ALL_CABINS_MSG__STRUCT_HPP_
#define USM_INTERFACE__MSG__DETAIL__ALL_CABINS_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'cabin_msgs'
#include "communication_interfaces/msg/detail/cabin_msg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__usm_interface__msg__AllCabinsMsg __attribute__((deprecated))
#else
# define DEPRECATED__usm_interface__msg__AllCabinsMsg __declspec(deprecated)
#endif

namespace usm_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AllCabinsMsg_
{
  using Type = AllCabinsMsg_<ContainerAllocator>;

  explicit AllCabinsMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AllCabinsMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _cabin_msgs_type =
    std::vector<communication_interfaces::msg::CabinMsg_<ContainerAllocator>, typename ContainerAllocator::template rebind<communication_interfaces::msg::CabinMsg_<ContainerAllocator>>::other>;
  _cabin_msgs_type cabin_msgs;

  // setters for named parameter idiom
  Type & set__cabin_msgs(
    const std::vector<communication_interfaces::msg::CabinMsg_<ContainerAllocator>, typename ContainerAllocator::template rebind<communication_interfaces::msg::CabinMsg_<ContainerAllocator>>::other> & _arg)
  {
    this->cabin_msgs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    usm_interface::msg::AllCabinsMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const usm_interface::msg::AllCabinsMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<usm_interface::msg::AllCabinsMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<usm_interface::msg::AllCabinsMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      usm_interface::msg::AllCabinsMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<usm_interface::msg::AllCabinsMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      usm_interface::msg::AllCabinsMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<usm_interface::msg::AllCabinsMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<usm_interface::msg::AllCabinsMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<usm_interface::msg::AllCabinsMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__usm_interface__msg__AllCabinsMsg
    std::shared_ptr<usm_interface::msg::AllCabinsMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__usm_interface__msg__AllCabinsMsg
    std::shared_ptr<usm_interface::msg::AllCabinsMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AllCabinsMsg_ & other) const
  {
    if (this->cabin_msgs != other.cabin_msgs) {
      return false;
    }
    return true;
  }
  bool operator!=(const AllCabinsMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AllCabinsMsg_

// alias to use template instance with default allocator
using AllCabinsMsg =
  usm_interface::msg::AllCabinsMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace usm_interface

#endif  // USM_INTERFACE__MSG__DETAIL__ALL_CABINS_MSG__STRUCT_HPP_
