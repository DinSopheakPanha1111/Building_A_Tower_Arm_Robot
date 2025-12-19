// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from advrobotics_lab3_interfaces:srv/Invkin.idl
// generated code does not contain a copyright notice

#ifndef ADVROBOTICS_LAB3_INTERFACES__SRV__DETAIL__INVKIN__TRAITS_HPP_
#define ADVROBOTICS_LAB3_INTERFACES__SRV__DETAIL__INVKIN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "advrobotics_lab3_interfaces/srv/detail/invkin__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace advrobotics_lab3_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Invkin_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Invkin_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Invkin_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace advrobotics_lab3_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use advrobotics_lab3_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const advrobotics_lab3_interfaces::srv::Invkin_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  advrobotics_lab3_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use advrobotics_lab3_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const advrobotics_lab3_interfaces::srv::Invkin_Request & msg)
{
  return advrobotics_lab3_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<advrobotics_lab3_interfaces::srv::Invkin_Request>()
{
  return "advrobotics_lab3_interfaces::srv::Invkin_Request";
}

template<>
inline const char * name<advrobotics_lab3_interfaces::srv::Invkin_Request>()
{
  return "advrobotics_lab3_interfaces/srv/Invkin_Request";
}

template<>
struct has_fixed_size<advrobotics_lab3_interfaces::srv::Invkin_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<advrobotics_lab3_interfaces::srv::Invkin_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<advrobotics_lab3_interfaces::srv::Invkin_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace advrobotics_lab3_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Invkin_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sol
  {
    out << "sol: ";
    rosidl_generator_traits::value_to_yaml(msg.sol, out);
    out << ", ";
  }

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
  const Invkin_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sol
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sol: ";
    rosidl_generator_traits::value_to_yaml(msg.sol, out);
    out << "\n";
  }

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

inline std::string to_yaml(const Invkin_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace advrobotics_lab3_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use advrobotics_lab3_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const advrobotics_lab3_interfaces::srv::Invkin_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  advrobotics_lab3_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use advrobotics_lab3_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const advrobotics_lab3_interfaces::srv::Invkin_Response & msg)
{
  return advrobotics_lab3_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<advrobotics_lab3_interfaces::srv::Invkin_Response>()
{
  return "advrobotics_lab3_interfaces::srv::Invkin_Response";
}

template<>
inline const char * name<advrobotics_lab3_interfaces::srv::Invkin_Response>()
{
  return "advrobotics_lab3_interfaces/srv/Invkin_Response";
}

template<>
struct has_fixed_size<advrobotics_lab3_interfaces::srv::Invkin_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<advrobotics_lab3_interfaces::srv::Invkin_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<advrobotics_lab3_interfaces::srv::Invkin_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<advrobotics_lab3_interfaces::srv::Invkin>()
{
  return "advrobotics_lab3_interfaces::srv::Invkin";
}

template<>
inline const char * name<advrobotics_lab3_interfaces::srv::Invkin>()
{
  return "advrobotics_lab3_interfaces/srv/Invkin";
}

template<>
struct has_fixed_size<advrobotics_lab3_interfaces::srv::Invkin>
  : std::integral_constant<
    bool,
    has_fixed_size<advrobotics_lab3_interfaces::srv::Invkin_Request>::value &&
    has_fixed_size<advrobotics_lab3_interfaces::srv::Invkin_Response>::value
  >
{
};

template<>
struct has_bounded_size<advrobotics_lab3_interfaces::srv::Invkin>
  : std::integral_constant<
    bool,
    has_bounded_size<advrobotics_lab3_interfaces::srv::Invkin_Request>::value &&
    has_bounded_size<advrobotics_lab3_interfaces::srv::Invkin_Response>::value
  >
{
};

template<>
struct is_service<advrobotics_lab3_interfaces::srv::Invkin>
  : std::true_type
{
};

template<>
struct is_service_request<advrobotics_lab3_interfaces::srv::Invkin_Request>
  : std::true_type
{
};

template<>
struct is_service_response<advrobotics_lab3_interfaces::srv::Invkin_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ADVROBOTICS_LAB3_INTERFACES__SRV__DETAIL__INVKIN__TRAITS_HPP_
