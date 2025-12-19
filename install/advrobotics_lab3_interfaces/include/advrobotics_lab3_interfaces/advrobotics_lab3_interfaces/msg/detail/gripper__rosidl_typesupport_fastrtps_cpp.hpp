// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from advrobotics_lab3_interfaces:msg/Gripper.idl
// generated code does not contain a copyright notice

#ifndef ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__GRIPPER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__GRIPPER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "advrobotics_lab3_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "advrobotics_lab3_interfaces/msg/detail/gripper__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace advrobotics_lab3_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_advrobotics_lab3_interfaces
cdr_serialize(
  const advrobotics_lab3_interfaces::msg::Gripper & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_advrobotics_lab3_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  advrobotics_lab3_interfaces::msg::Gripper & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_advrobotics_lab3_interfaces
get_serialized_size(
  const advrobotics_lab3_interfaces::msg::Gripper & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_advrobotics_lab3_interfaces
max_serialized_size_Gripper(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace advrobotics_lab3_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_advrobotics_lab3_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, advrobotics_lab3_interfaces, msg, Gripper)();

#ifdef __cplusplus
}
#endif

#endif  // ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__GRIPPER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
