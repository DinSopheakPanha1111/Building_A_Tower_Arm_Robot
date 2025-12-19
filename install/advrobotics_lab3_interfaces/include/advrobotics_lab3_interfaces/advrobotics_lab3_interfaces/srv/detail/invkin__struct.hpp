// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from advrobotics_lab3_interfaces:srv/Invkin.idl
// generated code does not contain a copyright notice

#ifndef ADVROBOTICS_LAB3_INTERFACES__SRV__DETAIL__INVKIN__STRUCT_HPP_
#define ADVROBOTICS_LAB3_INTERFACES__SRV__DETAIL__INVKIN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__advrobotics_lab3_interfaces__srv__Invkin_Request __attribute__((deprecated))
#else
# define DEPRECATED__advrobotics_lab3_interfaces__srv__Invkin_Request __declspec(deprecated)
#endif

namespace advrobotics_lab3_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Invkin_Request_
{
  using Type = Invkin_Request_<ContainerAllocator>;

  explicit Invkin_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
    }
  }

  explicit Invkin_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    advrobotics_lab3_interfaces::srv::Invkin_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const advrobotics_lab3_interfaces::srv::Invkin_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<advrobotics_lab3_interfaces::srv::Invkin_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<advrobotics_lab3_interfaces::srv::Invkin_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      advrobotics_lab3_interfaces::srv::Invkin_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<advrobotics_lab3_interfaces::srv::Invkin_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      advrobotics_lab3_interfaces::srv::Invkin_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<advrobotics_lab3_interfaces::srv::Invkin_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<advrobotics_lab3_interfaces::srv::Invkin_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<advrobotics_lab3_interfaces::srv::Invkin_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__advrobotics_lab3_interfaces__srv__Invkin_Request
    std::shared_ptr<advrobotics_lab3_interfaces::srv::Invkin_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__advrobotics_lab3_interfaces__srv__Invkin_Request
    std::shared_ptr<advrobotics_lab3_interfaces::srv::Invkin_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Invkin_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Invkin_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Invkin_Request_

// alias to use template instance with default allocator
using Invkin_Request =
  advrobotics_lab3_interfaces::srv::Invkin_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace advrobotics_lab3_interfaces


#ifndef _WIN32
# define DEPRECATED__advrobotics_lab3_interfaces__srv__Invkin_Response __attribute__((deprecated))
#else
# define DEPRECATED__advrobotics_lab3_interfaces__srv__Invkin_Response __declspec(deprecated)
#endif

namespace advrobotics_lab3_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Invkin_Response_
{
  using Type = Invkin_Response_<ContainerAllocator>;

  explicit Invkin_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sol = 0;
      this->q1 = 0.0f;
      this->q2 = 0.0f;
      this->q3 = 0.0f;
    }
  }

  explicit Invkin_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sol = 0;
      this->q1 = 0.0f;
      this->q2 = 0.0f;
      this->q3 = 0.0f;
    }
  }

  // field types and members
  using _sol_type =
    int8_t;
  _sol_type sol;
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
  Type & set__sol(
    const int8_t & _arg)
  {
    this->sol = _arg;
    return *this;
  }
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
    advrobotics_lab3_interfaces::srv::Invkin_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const advrobotics_lab3_interfaces::srv::Invkin_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<advrobotics_lab3_interfaces::srv::Invkin_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<advrobotics_lab3_interfaces::srv::Invkin_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      advrobotics_lab3_interfaces::srv::Invkin_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<advrobotics_lab3_interfaces::srv::Invkin_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      advrobotics_lab3_interfaces::srv::Invkin_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<advrobotics_lab3_interfaces::srv::Invkin_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<advrobotics_lab3_interfaces::srv::Invkin_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<advrobotics_lab3_interfaces::srv::Invkin_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__advrobotics_lab3_interfaces__srv__Invkin_Response
    std::shared_ptr<advrobotics_lab3_interfaces::srv::Invkin_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__advrobotics_lab3_interfaces__srv__Invkin_Response
    std::shared_ptr<advrobotics_lab3_interfaces::srv::Invkin_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Invkin_Response_ & other) const
  {
    if (this->sol != other.sol) {
      return false;
    }
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
  bool operator!=(const Invkin_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Invkin_Response_

// alias to use template instance with default allocator
using Invkin_Response =
  advrobotics_lab3_interfaces::srv::Invkin_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace advrobotics_lab3_interfaces

namespace advrobotics_lab3_interfaces
{

namespace srv
{

struct Invkin
{
  using Request = advrobotics_lab3_interfaces::srv::Invkin_Request;
  using Response = advrobotics_lab3_interfaces::srv::Invkin_Response;
};

}  // namespace srv

}  // namespace advrobotics_lab3_interfaces

#endif  // ADVROBOTICS_LAB3_INTERFACES__SRV__DETAIL__INVKIN__STRUCT_HPP_
