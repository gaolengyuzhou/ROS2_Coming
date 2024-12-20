// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces1:srv/Sermsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES1__SRV__DETAIL__SERMSG__STRUCT_HPP_
#define INTERFACES1__SRV__DETAIL__SERMSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces1__srv__Sermsg_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces1__srv__Sermsg_Request __declspec(deprecated)
#endif

namespace interfaces1
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Sermsg_Request_
{
  using Type = Sermsg_Request_<ContainerAllocator>;

  explicit Sermsg_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0l;
      this->b = 0l;
      this->c = 0l;
    }
  }

  explicit Sermsg_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0l;
      this->b = 0l;
      this->c = 0l;
    }
  }

  // field types and members
  using _a_type =
    int32_t;
  _a_type a;
  using _b_type =
    int32_t;
  _b_type b;
  using _c_type =
    int32_t;
  _c_type c;

  // setters for named parameter idiom
  Type & set__a(
    const int32_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int32_t & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const int32_t & _arg)
  {
    this->c = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces1::srv::Sermsg_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces1::srv::Sermsg_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces1::srv::Sermsg_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces1::srv::Sermsg_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces1::srv::Sermsg_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces1::srv::Sermsg_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces1::srv::Sermsg_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces1::srv::Sermsg_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces1::srv::Sermsg_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces1::srv::Sermsg_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces1__srv__Sermsg_Request
    std::shared_ptr<interfaces1::srv::Sermsg_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces1__srv__Sermsg_Request
    std::shared_ptr<interfaces1::srv::Sermsg_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sermsg_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sermsg_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sermsg_Request_

// alias to use template instance with default allocator
using Sermsg_Request =
  interfaces1::srv::Sermsg_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces1


#ifndef _WIN32
# define DEPRECATED__interfaces1__srv__Sermsg_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces1__srv__Sermsg_Response __declspec(deprecated)
#endif

namespace interfaces1
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Sermsg_Response_
{
  using Type = Sermsg_Response_<ContainerAllocator>;

  explicit Sermsg_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0l;
      this->prod = 0l;
    }
  }

  explicit Sermsg_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0l;
      this->prod = 0l;
    }
  }

  // field types and members
  using _sum_type =
    int32_t;
  _sum_type sum;
  using _prod_type =
    int32_t;
  _prod_type prod;

  // setters for named parameter idiom
  Type & set__sum(
    const int32_t & _arg)
  {
    this->sum = _arg;
    return *this;
  }
  Type & set__prod(
    const int32_t & _arg)
  {
    this->prod = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces1::srv::Sermsg_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces1::srv::Sermsg_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces1::srv::Sermsg_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces1::srv::Sermsg_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces1::srv::Sermsg_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces1::srv::Sermsg_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces1::srv::Sermsg_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces1::srv::Sermsg_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces1::srv::Sermsg_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces1::srv::Sermsg_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces1__srv__Sermsg_Response
    std::shared_ptr<interfaces1::srv::Sermsg_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces1__srv__Sermsg_Response
    std::shared_ptr<interfaces1::srv::Sermsg_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sermsg_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    if (this->prod != other.prod) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sermsg_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sermsg_Response_

// alias to use template instance with default allocator
using Sermsg_Response =
  interfaces1::srv::Sermsg_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces1

namespace interfaces1
{

namespace srv
{

struct Sermsg
{
  using Request = interfaces1::srv::Sermsg_Request;
  using Response = interfaces1::srv::Sermsg_Response;
};

}  // namespace srv

}  // namespace interfaces1

#endif  // INTERFACES1__SRV__DETAIL__SERMSG__STRUCT_HPP_
