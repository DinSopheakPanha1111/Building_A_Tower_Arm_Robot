// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from advrobotics_lab3_interfaces:msg/Joints.idl
// generated code does not contain a copyright notice

#ifndef ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__JOINTS__BUILDER_HPP_
#define ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__JOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "advrobotics_lab3_interfaces/msg/detail/joints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace advrobotics_lab3_interfaces
{

namespace msg
{

namespace builder
{

class Init_Joints_q3
{
public:
  explicit Init_Joints_q3(::advrobotics_lab3_interfaces::msg::Joints & msg)
  : msg_(msg)
  {}
  ::advrobotics_lab3_interfaces::msg::Joints q3(::advrobotics_lab3_interfaces::msg::Joints::_q3_type arg)
  {
    msg_.q3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::advrobotics_lab3_interfaces::msg::Joints msg_;
};

class Init_Joints_q2
{
public:
  explicit Init_Joints_q2(::advrobotics_lab3_interfaces::msg::Joints & msg)
  : msg_(msg)
  {}
  Init_Joints_q3 q2(::advrobotics_lab3_interfaces::msg::Joints::_q2_type arg)
  {
    msg_.q2 = std::move(arg);
    return Init_Joints_q3(msg_);
  }

private:
  ::advrobotics_lab3_interfaces::msg::Joints msg_;
};

class Init_Joints_q1
{
public:
  Init_Joints_q1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Joints_q2 q1(::advrobotics_lab3_interfaces::msg::Joints::_q1_type arg)
  {
    msg_.q1 = std::move(arg);
    return Init_Joints_q2(msg_);
  }

private:
  ::advrobotics_lab3_interfaces::msg::Joints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::advrobotics_lab3_interfaces::msg::Joints>()
{
  return advrobotics_lab3_interfaces::msg::builder::Init_Joints_q1();
}

}  // namespace advrobotics_lab3_interfaces

#endif  // ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__JOINTS__BUILDER_HPP_
