// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from advrobotics_lab3_interfaces:msg/Gripper.idl
// generated code does not contain a copyright notice

#ifndef ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__GRIPPER__BUILDER_HPP_
#define ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "advrobotics_lab3_interfaces/msg/detail/gripper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace advrobotics_lab3_interfaces
{

namespace msg
{

namespace builder
{

class Init_Gripper_gripper
{
public:
  Init_Gripper_gripper()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::advrobotics_lab3_interfaces::msg::Gripper gripper(::advrobotics_lab3_interfaces::msg::Gripper::_gripper_type arg)
  {
    msg_.gripper = std::move(arg);
    return std::move(msg_);
  }

private:
  ::advrobotics_lab3_interfaces::msg::Gripper msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::advrobotics_lab3_interfaces::msg::Gripper>()
{
  return advrobotics_lab3_interfaces::msg::builder::Init_Gripper_gripper();
}

}  // namespace advrobotics_lab3_interfaces

#endif  // ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__GRIPPER__BUILDER_HPP_
