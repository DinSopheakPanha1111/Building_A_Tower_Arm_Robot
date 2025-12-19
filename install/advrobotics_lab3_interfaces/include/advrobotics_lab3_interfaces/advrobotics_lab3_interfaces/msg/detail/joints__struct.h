// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from advrobotics_lab3_interfaces:msg/Joints.idl
// generated code does not contain a copyright notice

#ifndef ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__JOINTS__STRUCT_H_
#define ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__JOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Joints in the package advrobotics_lab3_interfaces.
typedef struct advrobotics_lab3_interfaces__msg__Joints
{
  float q1;
  float q2;
  float q3;
} advrobotics_lab3_interfaces__msg__Joints;

// Struct for a sequence of advrobotics_lab3_interfaces__msg__Joints.
typedef struct advrobotics_lab3_interfaces__msg__Joints__Sequence
{
  advrobotics_lab3_interfaces__msg__Joints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} advrobotics_lab3_interfaces__msg__Joints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ADVROBOTICS_LAB3_INTERFACES__MSG__DETAIL__JOINTS__STRUCT_H_
