// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from advrobotics_lab3_interfaces:srv/Invkin.idl
// generated code does not contain a copyright notice

#ifndef ADVROBOTICS_LAB3_INTERFACES__SRV__DETAIL__INVKIN__BUILDER_HPP_
#define ADVROBOTICS_LAB3_INTERFACES__SRV__DETAIL__INVKIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "advrobotics_lab3_interfaces/srv/detail/invkin__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace advrobotics_lab3_interfaces
{

namespace srv
{

namespace builder
{

class Init_Invkin_Request_z
{
public:
  explicit Init_Invkin_Request_z(::advrobotics_lab3_interfaces::srv::Invkin_Request & msg)
  : msg_(msg)
  {}
  ::advrobotics_lab3_interfaces::srv::Invkin_Request z(::advrobotics_lab3_interfaces::srv::Invkin_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::advrobotics_lab3_interfaces::srv::Invkin_Request msg_;
};

class Init_Invkin_Request_y
{
public:
  explicit Init_Invkin_Request_y(::advrobotics_lab3_interfaces::srv::Invkin_Request & msg)
  : msg_(msg)
  {}
  Init_Invkin_Request_z y(::advrobotics_lab3_interfaces::srv::Invkin_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Invkin_Request_z(msg_);
  }

private:
  ::advrobotics_lab3_interfaces::srv::Invkin_Request msg_;
};

class Init_Invkin_Request_x
{
public:
  Init_Invkin_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Invkin_Request_y x(::advrobotics_lab3_interfaces::srv::Invkin_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Invkin_Request_y(msg_);
  }

private:
  ::advrobotics_lab3_interfaces::srv::Invkin_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::advrobotics_lab3_interfaces::srv::Invkin_Request>()
{
  return advrobotics_lab3_interfaces::srv::builder::Init_Invkin_Request_x();
}

}  // namespace advrobotics_lab3_interfaces


namespace advrobotics_lab3_interfaces
{

namespace srv
{

namespace builder
{

class Init_Invkin_Response_q3
{
public:
  explicit Init_Invkin_Response_q3(::advrobotics_lab3_interfaces::srv::Invkin_Response & msg)
  : msg_(msg)
  {}
  ::advrobotics_lab3_interfaces::srv::Invkin_Response q3(::advrobotics_lab3_interfaces::srv::Invkin_Response::_q3_type arg)
  {
    msg_.q3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::advrobotics_lab3_interfaces::srv::Invkin_Response msg_;
};

class Init_Invkin_Response_q2
{
public:
  explicit Init_Invkin_Response_q2(::advrobotics_lab3_interfaces::srv::Invkin_Response & msg)
  : msg_(msg)
  {}
  Init_Invkin_Response_q3 q2(::advrobotics_lab3_interfaces::srv::Invkin_Response::_q2_type arg)
  {
    msg_.q2 = std::move(arg);
    return Init_Invkin_Response_q3(msg_);
  }

private:
  ::advrobotics_lab3_interfaces::srv::Invkin_Response msg_;
};

class Init_Invkin_Response_q1
{
public:
  explicit Init_Invkin_Response_q1(::advrobotics_lab3_interfaces::srv::Invkin_Response & msg)
  : msg_(msg)
  {}
  Init_Invkin_Response_q2 q1(::advrobotics_lab3_interfaces::srv::Invkin_Response::_q1_type arg)
  {
    msg_.q1 = std::move(arg);
    return Init_Invkin_Response_q2(msg_);
  }

private:
  ::advrobotics_lab3_interfaces::srv::Invkin_Response msg_;
};

class Init_Invkin_Response_sol
{
public:
  Init_Invkin_Response_sol()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Invkin_Response_q1 sol(::advrobotics_lab3_interfaces::srv::Invkin_Response::_sol_type arg)
  {
    msg_.sol = std::move(arg);
    return Init_Invkin_Response_q1(msg_);
  }

private:
  ::advrobotics_lab3_interfaces::srv::Invkin_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::advrobotics_lab3_interfaces::srv::Invkin_Response>()
{
  return advrobotics_lab3_interfaces::srv::builder::Init_Invkin_Response_sol();
}

}  // namespace advrobotics_lab3_interfaces

#endif  // ADVROBOTICS_LAB3_INTERFACES__SRV__DETAIL__INVKIN__BUILDER_HPP_
