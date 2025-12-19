#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "advrobotics_lab3_interfaces/srv/invkin.hpp"

#include "Kinematics.h"



void ik(const std::shared_ptr<advrobotics_lab3_interfaces::srv::Invkin::Request> request, std::shared_ptr<advrobotics_lab3_interfaces::srv::Invkin::Response> response)
{
	RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "================================================");
	RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "IK for (%f, %f, %f) in progress...", request->x, request->y, request->z);

	std::vector<float> qi = computeInverseKinematics(request->x, request->y, request->z, LINK1, LINK2, LINK3);
	
	response->sol = qi[0];
	response->q1 = qi[1];
	response->q2 = qi[2];
	response->q3 = qi[3];
		
	RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "IK: (x,y,z) --> (J1, J2, J3)");
	RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "(%f, %f, %f) --> (%f, %f, %f)", request->x, request->y, request->z, rad2deg(response->q1), rad2deg(response->q2), rad2deg(response->q3));
	RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "-----------------------------------------------------------------------------------------------------------");
	
}


int main(int argc, char** argv)
{
	rclcpp::init(argc, argv);
	
	std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("ik_server");   
	
	rclcpp::Service<advrobotics_lab3_interfaces::srv::Invkin>::SharedPtr service = 	node->create_service<advrobotics_lab3_interfaces::srv::Invkin>("invkin",  &ik);   

  	RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "IK server launched...");
	
	rclcpp::spin(node);
	rclcpp::shutdown();
	
	return 0;
}