// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from advrobotics_lab3_interfaces:msg/Joints.idl
// generated code does not contain a copyright notice

#ifndef ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__JOINTS__TRAITS_HPP_
#define ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__JOINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "advrobotics_lab3_interfaces/msg/detail/joints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace advrobotics_lab3_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Joints & msg,
  std::ostream & out)
{
  out << "{";
  // member: q1
  {
    out << "q1: ";
    rosidl_generator_traits::value_to_yaml(msg.q1, out);
    out << ", ";
  }

  // member: q2
  {
    out << "q2: ";
    rosidl_generator_traits::value_to_yaml(msg.q2, out);
    out << ", ";
  }

  // member: q3
  {
    out << "q3: ";
    rosidl_generator_traits::value_to_yaml(msg.q3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Joints & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: q1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q1: ";
    rosidl_generator_traits::value_to_yaml(msg.q1, out);
    out << "\n";
  }

  // member: q2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q2: ";
    rosidl_generator_traits::value_to_yaml(msg.q2, out);
    out << "\n";
  }

  // member: q3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q3: ";
    rosidl_generator_traits::value_to_yaml(msg.q3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Joints & msg, bool use_flow_style = false)
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
  const advrobotics_lab3_interfaces::msg::Joints & msg,
  std::ostream & out, size_t indentation = 0)
{
  advrobotics_lab3_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use advrobotics_lab3_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const advrobotics_lab3_interfaces::msg::Joints & msg)
{
  return advrobotics_lab3_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<advrobotics_lab3_interfaces::msg::Joints>()
{
  return "advrobotics_lab3_interfaces::msg::Joints";
}

template<>
inline const char * name<advrobotics_lab3_interfaces::msg::Joints>()
{
  return "advrobotics_lab3_interfaces/msg/Joints";
}

template<>
struct has_fixed_size<advrobotics_lab3_interfaces::msg::Joints>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<advrobotics_lab3_interfaces::msg::Joints>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<advrobotics_lab3_interfaces::msg::Joints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__JOINTS__TRAITS_HPP_
