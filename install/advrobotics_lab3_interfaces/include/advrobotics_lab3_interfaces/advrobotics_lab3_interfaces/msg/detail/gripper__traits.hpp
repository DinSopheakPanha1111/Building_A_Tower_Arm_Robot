// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from advrobotics_lab3_interfaces:msg/Gripper.idl
// generated code does not contain a copyright notice

#ifndef ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__GRIPPER__TRAITS_HPP_
#define ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__GRIPPER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "advrobotics_lab3_interfaces/msg/detail/gripper__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace advrobotics_lab3_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Gripper & msg,
  std::ostream & out)
{
  out << "{";
  // member: gripper
  {
    out << "gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gripper & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gripper & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace advrobotics_lab3_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use advrobotics_lab3_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const advrobotics_lab3_interfaces::msg::Gripper & msg,
  std::ostream & out, size_t indentation = 0)
{
  advrobotics_lab3_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use advrobotics_lab3_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const advrobotics_lab3_interfaces::msg::Gripper & msg)
{
  return advrobotics_lab3_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<advrobotics_lab3_interfaces::msg::Gripper>()
{
  return "advrobotics_lab3_interfaces::msg::Gripper";
}

template<>
inline const char * name<advrobotics_lab3_interfaces::msg::Gripper>()
{
  return "advrobotics_lab3_interfaces/msg/Gripper";
}

template<>
struct has_fixed_size<advrobotics_lab3_interfaces::msg::Gripper>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<advrobotics_lab3_interfaces::msg::Gripper>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<advrobotics_lab3_interfaces::msg::Gripper>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__GRIPPER__TRAITS_HPP_
