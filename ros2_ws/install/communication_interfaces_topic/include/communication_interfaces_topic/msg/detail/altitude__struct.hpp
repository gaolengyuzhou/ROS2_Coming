// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication_interfaces_topic:msg/Altitude.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__ALTITUDE__STRUCT_HPP_
#define COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__ALTITUDE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__communication_interfaces_topic__msg__Altitude __attribute__((deprecated))
#else
# define DEPRECATED__communication_interfaces_topic__msg__Altitude __declspec(deprecated)
#endif

namespace communication_interfaces_topic
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Altitude_
{
  using Type = Altitude_<ContainerAllocator>;

  explicit Altitude_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->p_row = 0.0f;
      this->p_pitch = 0.0f;
      this->p_yaw = 0.0f;
      this->p_x = 0.0f;
      this->p_y = 0.0f;
      this->p_z = 0.0f;
      this->p_row_set = 0.0f;
      this->p_pitch_set = 0.0f;
      this->p_yaw_set = 0.0f;
      this->p_x_set = 0.0f;
      this->p_y_set = 0.0f;
      this->p_z_set = 0.0f;
      this->p_row_e = 0.0f;
      this->p_pitch_e = 0.0f;
      this->p_yaw_e = 0.0f;
      this->p_x_e = 0.0f;
      this->p_y_e = 0.0f;
      this->p_z_e = 0.0f;
      this->p1 = 0.0f;
      this->p2 = 0.0f;
    }
  }

  explicit Altitude_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->p_row = 0.0f;
      this->p_pitch = 0.0f;
      this->p_yaw = 0.0f;
      this->p_x = 0.0f;
      this->p_y = 0.0f;
      this->p_z = 0.0f;
      this->p_row_set = 0.0f;
      this->p_pitch_set = 0.0f;
      this->p_yaw_set = 0.0f;
      this->p_x_set = 0.0f;
      this->p_y_set = 0.0f;
      this->p_z_set = 0.0f;
      this->p_row_e = 0.0f;
      this->p_pitch_e = 0.0f;
      this->p_yaw_e = 0.0f;
      this->p_x_e = 0.0f;
      this->p_y_e = 0.0f;
      this->p_z_e = 0.0f;
      this->p1 = 0.0f;
      this->p2 = 0.0f;
    }
  }

  // field types and members
  using _p_row_type =
    float;
  _p_row_type p_row;
  using _p_pitch_type =
    float;
  _p_pitch_type p_pitch;
  using _p_yaw_type =
    float;
  _p_yaw_type p_yaw;
  using _p_x_type =
    float;
  _p_x_type p_x;
  using _p_y_type =
    float;
  _p_y_type p_y;
  using _p_z_type =
    float;
  _p_z_type p_z;
  using _p_row_set_type =
    float;
  _p_row_set_type p_row_set;
  using _p_pitch_set_type =
    float;
  _p_pitch_set_type p_pitch_set;
  using _p_yaw_set_type =
    float;
  _p_yaw_set_type p_yaw_set;
  using _p_x_set_type =
    float;
  _p_x_set_type p_x_set;
  using _p_y_set_type =
    float;
  _p_y_set_type p_y_set;
  using _p_z_set_type =
    float;
  _p_z_set_type p_z_set;
  using _p_row_e_type =
    float;
  _p_row_e_type p_row_e;
  using _p_pitch_e_type =
    float;
  _p_pitch_e_type p_pitch_e;
  using _p_yaw_e_type =
    float;
  _p_yaw_e_type p_yaw_e;
  using _p_x_e_type =
    float;
  _p_x_e_type p_x_e;
  using _p_y_e_type =
    float;
  _p_y_e_type p_y_e;
  using _p_z_e_type =
    float;
  _p_z_e_type p_z_e;
  using _tau_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _tau_type tau;
  using _f_thr_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _f_thr_type f_thr;
  using _p1_type =
    float;
  _p1_type p1;
  using _p2_type =
    float;
  _p2_type p2;

  // setters for named parameter idiom
  Type & set__p_row(
    const float & _arg)
  {
    this->p_row = _arg;
    return *this;
  }
  Type & set__p_pitch(
    const float & _arg)
  {
    this->p_pitch = _arg;
    return *this;
  }
  Type & set__p_yaw(
    const float & _arg)
  {
    this->p_yaw = _arg;
    return *this;
  }
  Type & set__p_x(
    const float & _arg)
  {
    this->p_x = _arg;
    return *this;
  }
  Type & set__p_y(
    const float & _arg)
  {
    this->p_y = _arg;
    return *this;
  }
  Type & set__p_z(
    const float & _arg)
  {
    this->p_z = _arg;
    return *this;
  }
  Type & set__p_row_set(
    const float & _arg)
  {
    this->p_row_set = _arg;
    return *this;
  }
  Type & set__p_pitch_set(
    const float & _arg)
  {
    this->p_pitch_set = _arg;
    return *this;
  }
  Type & set__p_yaw_set(
    const float & _arg)
  {
    this->p_yaw_set = _arg;
    return *this;
  }
  Type & set__p_x_set(
    const float & _arg)
  {
    this->p_x_set = _arg;
    return *this;
  }
  Type & set__p_y_set(
    const float & _arg)
  {
    this->p_y_set = _arg;
    return *this;
  }
  Type & set__p_z_set(
    const float & _arg)
  {
    this->p_z_set = _arg;
    return *this;
  }
  Type & set__p_row_e(
    const float & _arg)
  {
    this->p_row_e = _arg;
    return *this;
  }
  Type & set__p_pitch_e(
    const float & _arg)
  {
    this->p_pitch_e = _arg;
    return *this;
  }
  Type & set__p_yaw_e(
    const float & _arg)
  {
    this->p_yaw_e = _arg;
    return *this;
  }
  Type & set__p_x_e(
    const float & _arg)
  {
    this->p_x_e = _arg;
    return *this;
  }
  Type & set__p_y_e(
    const float & _arg)
  {
    this->p_y_e = _arg;
    return *this;
  }
  Type & set__p_z_e(
    const float & _arg)
  {
    this->p_z_e = _arg;
    return *this;
  }
  Type & set__tau(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->tau = _arg;
    return *this;
  }
  Type & set__f_thr(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->f_thr = _arg;
    return *this;
  }
  Type & set__p1(
    const float & _arg)
  {
    this->p1 = _arg;
    return *this;
  }
  Type & set__p2(
    const float & _arg)
  {
    this->p2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication_interfaces_topic::msg::Altitude_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_interfaces_topic::msg::Altitude_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_interfaces_topic::msg::Altitude_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_interfaces_topic::msg::Altitude_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_interfaces_topic::msg::Altitude_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces_topic::msg::Altitude_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_interfaces_topic::msg::Altitude_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces_topic::msg::Altitude_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_interfaces_topic::msg::Altitude_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_interfaces_topic::msg::Altitude_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_interfaces_topic__msg__Altitude
    std::shared_ptr<communication_interfaces_topic::msg::Altitude_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_interfaces_topic__msg__Altitude
    std::shared_ptr<communication_interfaces_topic::msg::Altitude_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Altitude_ & other) const
  {
    if (this->p_row != other.p_row) {
      return false;
    }
    if (this->p_pitch != other.p_pitch) {
      return false;
    }
    if (this->p_yaw != other.p_yaw) {
      return false;
    }
    if (this->p_x != other.p_x) {
      return false;
    }
    if (this->p_y != other.p_y) {
      return false;
    }
    if (this->p_z != other.p_z) {
      return false;
    }
    if (this->p_row_set != other.p_row_set) {
      return false;
    }
    if (this->p_pitch_set != other.p_pitch_set) {
      return false;
    }
    if (this->p_yaw_set != other.p_yaw_set) {
      return false;
    }
    if (this->p_x_set != other.p_x_set) {
      return false;
    }
    if (this->p_y_set != other.p_y_set) {
      return false;
    }
    if (this->p_z_set != other.p_z_set) {
      return false;
    }
    if (this->p_row_e != other.p_row_e) {
      return false;
    }
    if (this->p_pitch_e != other.p_pitch_e) {
      return false;
    }
    if (this->p_yaw_e != other.p_yaw_e) {
      return false;
    }
    if (this->p_x_e != other.p_x_e) {
      return false;
    }
    if (this->p_y_e != other.p_y_e) {
      return false;
    }
    if (this->p_z_e != other.p_z_e) {
      return false;
    }
    if (this->tau != other.tau) {
      return false;
    }
    if (this->f_thr != other.f_thr) {
      return false;
    }
    if (this->p1 != other.p1) {
      return false;
    }
    if (this->p2 != other.p2) {
      return false;
    }
    return true;
  }
  bool operator!=(const Altitude_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Altitude_

// alias to use template instance with default allocator
using Altitude =
  communication_interfaces_topic::msg::Altitude_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace communication_interfaces_topic

#endif  // COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__ALTITUDE__STRUCT_HPP_
