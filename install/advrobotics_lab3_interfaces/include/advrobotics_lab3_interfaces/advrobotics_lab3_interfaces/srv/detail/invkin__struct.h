// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from advrobotics_lab3_interfaces:srv/Invkin.idl
// generated code does not contain a copyright notice

#ifndef ADVROBOTICS_LAB3_INTERFACES__SRV__DETAIL__INVKIN__STRUCT_H_
#define ADVROBOTICS_LAB3_INTERFACES__SRV__DETAIL__INVKIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Invkin in the package advrobotics_lab3_interfaces.
typedef struct advrobotics_lab3_interfaces__srv__Invkin_Request
{
  float x;
  float y;
  float z;
} advrobotics_lab3_interfaces__srv__Invkin_Request;

// Struct for a sequence of advrobotics_lab3_interfaces__srv__Invkin_Request.
typedef struct advrobotics_lab3_interfaces__srv__Invkin_Request__Sequence
{
  advrobotics_lab3_interfaces__srv__Invkin_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} advrobotics_lab3_interfaces__srv__Invkin_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Invkin in the package advrobotics_lab3_interfaces.
typedef struct advrobotics_lab3_interfaces__srv__Invkin_Response
{
  int8_t sol;
  float q1;
  float q2;
  float q3;
} advrobotics_lab3_interfaces__srv__Invkin_Response;

// Struct for a sequence of advrobotics_lab3_interfaces__srv__Invkin_Response.
typedef struct advrobotics_lab3_interfaces__srv__Invkin_Response__Sequence
{
  advrobotics_lab3_interfaces__srv__Invkin_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} advrobotics_lab3_interfaces__srv__Invkin_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ADVROBOTICS_LAB3_INTERFACES__SRV__DETAIL__INVKIN__STRUCT_H_
