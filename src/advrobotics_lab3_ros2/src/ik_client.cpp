#include "math.h"
#include <chrono>
#include <cstdlib>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "advrobotics_lab3_interfaces/srv/invkin.hpp"
#include "advrobotics_lab3_interfaces/msg/joints.hpp"

#include "Kinematics.h"


using namespace std::chrono_literals;

double deg2rad(double angle)
{
	return -angle / 180.0 * M_PI;
}

int main(int argc, char** argv)
{
	// inits ROS2
	rclcpp::init(argc, argv);
	
	if (argc != 4)
	{
		RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "usage: rosrun advrobotics_lab3_ros2 ik_client x y z");
		RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "ex.: rosrun advrobotics_lab3_ros2 ik_client 6 9 0");
		return 1;
	}
	
	// creates the client node
	std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("ik_client");  
	rclcpp::Client<advrobotics_lab3_interfaces::srv::Invkin>::SharedPtr client =               
	node->create_client<advrobotics_lab3_interfaces::srv::Invkin>("invkin");          

	// creates a publisher to move the robot joints
	auto publisher = node->create_publisher<advrobotics_lab3_interfaces::msg::Joints>("joint_cmd", 10);
	
	// creates the request from the input args
	auto request = std::make_shared<advrobotics_lab3_interfaces::srv::Invkin::Request>();       
	request->x = atof(argv[1]);
	request->y = atof(argv[2]);
	request->z = atof(argv[3]);
	
	// connects to the service
	while (!client->wait_for_service(1s)) 
	{
		if (!rclcpp::ok()) 
		{
			RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "[ERROR] Interrupted while waiting for the service. Exiting.");
			return 0;
		}
		RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "[WARNING] service not available, waiting again...");
	}
	
	// sends the request
	auto result = client->async_send_request(request);
	
	// waitw for the result.
	if (rclcpp::spin_until_future_complete(node, result) == rclcpp::FutureReturnCode::SUCCESS)
	{
		// gets the result
		auto response = result.get();
		
		// displays i/o values
		RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "IK: (x,y,z) --> (J1, J2, j3)");
		RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "(%f, %f, %f) --> (%f, %f, %f)", atof(argv[1]), atof(argv[2]), atof(argv[3]), rad2deg(response->q1), rad2deg(response->q2), rad2deg(response->q3));
		
		// creates a message to publish
		advrobotics_lab3_interfaces::msg::Joints  jointCmdMsg;
			jointCmdMsg.q1 = rad2deg(response->q1);
			jointCmdMsg.q2 = rad2deg(response->q2);
			jointCmdMsg.q3 = rad2deg(response->q3);
			
		// publises the message to move the robot joints
		RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Publish to joint_cmd topic...");
		publisher->publish(jointCmdMsg);
		rclcpp::Rate rate(1);
		rate.sleep();
		RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Done!");
	} 
	else 
	{
		RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "[ERROR] Failed to call service invkin");  
	}

	rclcpp::shutdown();
	return 0;
	
}