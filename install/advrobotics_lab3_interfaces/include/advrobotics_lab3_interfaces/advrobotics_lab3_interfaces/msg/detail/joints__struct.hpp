// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from advrobotics_lab3_interfaces:msg/Joints.idl
// generated code does not contain a copyright notice

#ifndef ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__JOINTS__STRUCT_HPP_
#define ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__JOINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__advrobotics_lab3_interfaces__msg__Joints __attribute__((deprecated))
#else
# define DEPRECATED__advrobotics_lab3_interfaces__msg__Joints __declspec(deprecated)
#endif

namespace advrobotics_lab3_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Joints_
{
  using Type = Joints_<ContainerAllocator>;

  explicit Joints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->q1 = 0.0f;
      this->q2 = 0.0f;
      this->q3 = 0.0f;
    }
  }

  explicit Joints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->q1 = 0.0f;
      this->q2 = 0.0f;
      this->q3 = 0.0f;
    }
  }

  // field types and members
  using _q1_type =
    float;
  _q1_type q1;
  using _q2_type =
    float;
  _q2_type q2;
  using _q3_type =
    float;
  _q3_type q3;

  // setters for named parameter idiom
  Type & set__q1(
    const float & _arg)
  {
    this->q1 = _arg;
    return *this;
  }
  Type & set__q2(
    const float & _arg)
  {
    this->q2 = _arg;
    return *this;
  }
  Type & set__q3(
    const float & _arg)
  {
    this->q3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    advrobotics_lab3_interfaces::msg::Joints_<ContainerAllocator> *;
  using ConstRawPtr =
    const advrobotics_lab3_interfaces::msg::Joints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<advrobotics_lab3_interfaces::msg::Joints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<advrobotics_lab3_interfaces::msg::Joints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      advrobotics_lab3_interfaces::msg::Joints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<advrobotics_lab3_interfaces::msg::Joints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      advrobotics_lab3_interfaces::msg::Joints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<advrobotics_lab3_interfaces::msg::Joints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<advrobotics_lab3_interfaces::msg::Joints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<advrobotics_lab3_interfaces::msg::Joints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__advrobotics_lab3_interfaces__msg__Joints
    std::shared_ptr<advrobotics_lab3_interfaces::msg::Joints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__advrobotics_lab3_interfaces__msg__Joints
    std::shared_ptr<advrobotics_lab3_interfaces::msg::Joints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Joints_ & other) const
  {
    if (this->q1 != other.q1) {
      return false;
    }
    if (this->q2 != other.q2) {
      return false;
    }
    if (this->q3 != other.q3) {
      return false;
    }
    return true;
  }
  bool operator!=(const Joints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Joints_

// alias to use template instance with default allocator
using Joints =
  advrobotics_lab3_interfaces::msg::Joints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace advrobotics_lab3_interfaces

#endif  // ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__JOINTS__STRUCT_HPP_
