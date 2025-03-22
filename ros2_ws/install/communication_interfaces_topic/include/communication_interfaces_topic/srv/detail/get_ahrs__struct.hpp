// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication_interfaces_topic:srv/GetAHRS.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__SRV__DETAIL__GET_AHRS__STRUCT_HPP_
#define COMMUNICATION_INTERFACES_TOPIC__SRV__DETAIL__GET_AHRS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__communication_interfaces_topic__srv__GetAHRS_Request __attribute__((deprecated))
#else
# define DEPRECATED__communication_interfaces_topic__srv__GetAHRS_Request __declspec(deprecated)
#endif

namespace communication_interfaces_topic
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAHRS_Request_
{
  using Type = GetAHRS_Request_<ContainerAllocator>;

  explicit GetAHRS_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetAHRS_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    communication_interfaces_topic::srv::GetAHRS_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_interfaces_topic::srv::GetAHRS_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_interfaces_topic::srv::GetAHRS_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_interfaces_topic::srv::GetAHRS_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_interfaces_topic::srv::GetAHRS_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces_topic::srv::GetAHRS_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_interfaces_topic::srv::GetAHRS_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces_topic::srv::GetAHRS_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_interfaces_topic::srv::GetAHRS_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_interfaces_topic::srv::GetAHRS_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_interfaces_topic__srv__GetAHRS_Request
    std::shared_ptr<communication_interfaces_topic::srv::GetAHRS_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_interfaces_topic__srv__GetAHRS_Request
    std::shared_ptr<communication_interfaces_topic::srv::GetAHRS_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAHRS_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAHRS_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAHRS_Request_

// alias to use template instance with default allocator
using GetAHRS_Request =
  communication_interfaces_topic::srv::GetAHRS_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace communication_interfaces_topic


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__communication_interfaces_topic__srv__GetAHRS_Response __attribute__((deprecated))
#else
# define DEPRECATED__communication_interfaces_topic__srv__GetAHRS_Response __declspec(deprecated)
#endif

namespace communication_interfaces_topic
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAHRS_Response_
{
  using Type = GetAHRS_Response_<ContainerAllocator>;

  explicit GetAHRS_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    (void)_init;
  }

  explicit GetAHRS_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _ahrs_data_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _ahrs_data_type ahrs_data;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__ahrs_data(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->ahrs_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication_interfaces_topic::srv::GetAHRS_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_interfaces_topic::srv::GetAHRS_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_interfaces_topic::srv::GetAHRS_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_interfaces_topic::srv::GetAHRS_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_interfaces_topic::srv::GetAHRS_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces_topic::srv::GetAHRS_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_interfaces_topic::srv::GetAHRS_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces_topic::srv::GetAHRS_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_interfaces_topic::srv::GetAHRS_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_interfaces_topic::srv::GetAHRS_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_interfaces_topic__srv__GetAHRS_Response
    std::shared_ptr<communication_interfaces_topic::srv::GetAHRS_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_interfaces_topic__srv__GetAHRS_Response
    std::shared_ptr<communication_interfaces_topic::srv::GetAHRS_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAHRS_Response_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->ahrs_data != other.ahrs_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAHRS_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAHRS_Response_

// alias to use template instance with default allocator
using GetAHRS_Response =
  communication_interfaces_topic::srv::GetAHRS_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace communication_interfaces_topic

namespace communication_interfaces_topic
{

namespace srv
{

struct GetAHRS
{
  using Request = communication_interfaces_topic::srv::GetAHRS_Request;
  using Response = communication_interfaces_topic::srv::GetAHRS_Response;
};

}  // namespace srv

}  // namespace communication_interfaces_topic

#endif  // COMMUNICATION_INTERFACES_TOPIC__SRV__DETAIL__GET_AHRS__STRUCT_HPP_
