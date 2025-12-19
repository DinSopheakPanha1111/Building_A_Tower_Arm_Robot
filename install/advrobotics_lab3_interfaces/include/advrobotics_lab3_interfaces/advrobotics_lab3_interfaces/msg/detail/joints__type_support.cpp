// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from advrobotics_lab3_interfaces:msg/Joints.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "advrobotics_lab3_interfaces/msg/detail/joints__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace advrobotics_lab3_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Joints_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) advrobotics_lab3_interfaces::msg::Joints(_init);
}

void Joints_fini_function(void * message_memory)
{
  auto typed_message = static_cast<advrobotics_lab3_interfaces::msg::Joints *>(message_memory);
  typed_message->~Joints();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Joints_message_member_array[3] = {
  {
    "q1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(advrobotics_lab3_interfaces::msg::Joints, q1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "q2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(advrobotics_lab3_interfaces::msg::Joints, q2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "q3",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(advrobotics_lab3_interfaces::msg::Joints, q3),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Joints_message_members = {
  "advrobotics_lab3_interfaces::msg",  // message namespace
  "Joints",  // message name
  3,  // number of fields
  sizeof(advrobotics_lab3_interfaces::msg::Joints),
  Joints_message_member_array,  // message members
  Joints_init_function,  // function to initialize message memory (memory has to be allocated)
  Joints_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Joints_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Joints_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace advrobotics_lab3_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<advrobotics_lab3_interfaces::msg::Joints>()
{
  return &::advrobotics_lab3_interfaces::msg::rosidl_typesupport_introspection_cpp::Joints_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, advrobotics_lab3_interfaces, msg, Joints)() {
  return &::advrobotics_lab3_interfaces::msg::rosidl_typesupport_introspection_cpp::Joints_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
