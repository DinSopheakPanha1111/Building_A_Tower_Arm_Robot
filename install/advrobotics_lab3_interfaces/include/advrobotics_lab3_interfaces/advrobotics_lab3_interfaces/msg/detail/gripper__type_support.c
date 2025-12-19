// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from advrobotics_lab3_interfaces:msg/Gripper.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "advrobotics_lab3_interfaces/msg/detail/gripper__rosidl_typesupport_introspection_c.h"
#include "advrobotics_lab3_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "advrobotics_lab3_interfaces/msg/detail/gripper__functions.h"
#include "advrobotics_lab3_interfaces/msg/detail/gripper__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void advrobotics_lab3_interfaces__msg__Gripper__rosidl_typesupport_introspection_c__Gripper_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  advrobotics_lab3_interfaces__msg__Gripper__init(message_memory);
}

void advrobotics_lab3_interfaces__msg__Gripper__rosidl_typesupport_introspection_c__Gripper_fini_function(void * message_memory)
{
  advrobotics_lab3_interfaces__msg__Gripper__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember advrobotics_lab3_interfaces__msg__Gripper__rosidl_typesupport_introspection_c__Gripper_message_member_array[1] = {
  {
    "gripper",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(advrobotics_lab3_interfaces__msg__Gripper, gripper),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers advrobotics_lab3_interfaces__msg__Gripper__rosidl_typesupport_introspection_c__Gripper_message_members = {
  "advrobotics_lab3_interfaces__msg",  // message namespace
  "Gripper",  // message name
  1,  // number of fields
  sizeof(advrobotics_lab3_interfaces__msg__Gripper),
  advrobotics_lab3_interfaces__msg__Gripper__rosidl_typesupport_introspection_c__Gripper_message_member_array,  // message members
  advrobotics_lab3_interfaces__msg__Gripper__rosidl_typesupport_introspection_c__Gripper_init_function,  // function to initialize message memory (memory has to be allocated)
  advrobotics_lab3_interfaces__msg__Gripper__rosidl_typesupport_introspection_c__Gripper_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t advrobotics_lab3_interfaces__msg__Gripper__rosidl_typesupport_introspection_c__Gripper_message_type_support_handle = {
  0,
  &advrobotics_lab3_interfaces__msg__Gripper__rosidl_typesupport_introspection_c__Gripper_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_advrobotics_lab3_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, advrobotics_lab3_interfaces, msg, Gripper)() {
  if (!advrobotics_lab3_interfaces__msg__Gripper__rosidl_typesupport_introspection_c__Gripper_message_type_support_handle.typesupport_identifier) {
    advrobotics_lab3_interfaces__msg__Gripper__rosidl_typesupport_introspection_c__Gripper_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &advrobotics_lab3_interfaces__msg__Gripper__rosidl_typesupport_introspection_c__Gripper_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
