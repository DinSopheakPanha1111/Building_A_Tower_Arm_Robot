#include "rclcpp/rclcpp.hpp"

#include "advrobotics_lab3_interfaces/msg/joints.hpp"
#include "advrobotics_lab3_interfaces/msg/gripper.hpp"

#include "DynamixelHandler.h"

using namespace std::chrono_literals;

class PoppyDriver : public rclcpp::Node
{
	public:
		PoppyDriver() : Node("poppy_core")
		{
			jointCmdSubscriber = this->create_subscription<advrobotics_lab3_interfaces::msg::Joints>(
				"joint_cmd", 10, 
				std::bind(&PoppyDriver::jointCmdCallback, this, std::placeholders::_1));
			
			gripperCmdSubscriber = this->create_subscription<advrobotics_lab3_interfaces::msg::Gripper>(
				"gripper_cmd", 10, 
				std::bind(&PoppyDriver::gripperCmdCallback, this, std::placeholders::_1));
			
			jointPositionPublisher = this->create_publisher<advrobotics_lab3_interfaces::msg::Joints>("joint_position", 10);
						
			gripperPositionPublisher = this->create_publisher<advrobotics_lab3_interfaces::msg::Gripper>("gripper_position", 10);
		
			_timer = this->create_wall_timer(10ms, std::bind(&PoppyDriver::timerCallback, this));
			
			std::cout << "===Initialization of the Dynamixel Motor communication====" << std::endl;
			_oDxlHandler.setDeviceName(_poppyDxlPortName);
			_oDxlHandler.setProtocolVersion(_poppyDxlProtocol);
			_oDxlHandler.openPort();
			_oDxlHandler.setBaudRate(_poppyDxlBaudRate);
			_oDxlHandler.enableTorque(true);
			std::cout << std::endl;
		}
		
		~PoppyDriver()
		{
			_oDxlHandler.enableTorque(false);
			_oDxlHandler.closePort();
		}
		
	private:
		void jointCmdCallback(const advrobotics_lab3_interfaces::msg::Joints::SharedPtr jointAngles)
		{
			std::vector<uint16_t> l_vTargetJointPosition;
			l_vTargetJointPosition.push_back(convertAnglesToJointCmd(jointAngles->q1));
			l_vTargetJointPosition.push_back(convertAnglesToJointCmd(jointAngles->q2));
			l_vTargetJointPosition.push_back(convertAnglesToJointCmd(jointAngles->q3));
			l_vTargetJointPosition.push_back(convertAnglesToJointCmd(_currentGripperAngle));
			
			_currentJointAngle_q1 = jointAngles->q1;
			_currentJointAngle_q2 = jointAngles->q2;
			_currentJointAngle_q3 = jointAngles->q3;
			
			_oDxlHandler.sendTargetJointPosition(l_vTargetJointPosition);
		}
		
		void gripperCmdCallback(const advrobotics_lab3_interfaces::msg::Gripper::SharedPtr gripperAngle)
		{
			std::vector<uint16_t> l_vTargetJointPosition;
			l_vTargetJointPosition.push_back(convertAnglesToJointCmd(_currentJointAngle_q1));
			l_vTargetJointPosition.push_back(convertAnglesToJointCmd(_currentJointAngle_q2));
			l_vTargetJointPosition.push_back(convertAnglesToJointCmd(_currentJointAngle_q3));
			l_vTargetJointPosition.push_back(convertAnglesToJointCmd(gripperAngle->gripper));
			
			_currentGripperAngle = gripperAngle->gripper;
			
			_oDxlHandler.sendTargetJointPosition(l_vTargetJointPosition);
		}
		
		void timerCallback()
		{
			std::vector<uint16_t> l_vCurrentJointPosition;
			bool bIsReadSuccessfull = _oDxlHandler.readCurrentJointPosition(l_vCurrentJointPosition);
			
			if (bIsReadSuccessfull && l_vCurrentJointPosition.size() >= 4)
			{
				auto jointPositionMsg = advrobotics_lab3_interfaces::msg::Joints();
				auto gripperPositionMsg = advrobotics_lab3_interfaces::msg::Gripper();
				
				jointPositionMsg.q1 = convertJointCmdToAngles(l_vCurrentJointPosition[0]);
				jointPositionMsg.q2 = convertJointCmdToAngles(l_vCurrentJointPosition[1]);
				jointPositionMsg.q3 = convertJointCmdToAngles(l_vCurrentJointPosition[2]);
				gripperPositionMsg.gripper = convertJointCmdToAngles(l_vCurrentJointPosition[3]);
				
				jointPositionPublisher->publish(jointPositionMsg);
				gripperPositionPublisher->publish(gripperPositionMsg);
			}
			
			
			
		}

		int convertAnglesToJointCmd(float fJointAngle)
		{
			// y = ax + b
			float a =  (_maxJointCmd-_minJointCmd) / (_maxJointAngle - _minJointAngle);
			float b = _minJointCmd - a * _minJointAngle;
			float jointCmd = a * fJointAngle + b;
			return (int)jointCmd;
		}

		float convertJointCmdToAngles(float fJointCmd)
		{
			// y = ax + b
			float a =  (_maxJointAngle - _minJointAngle) / (_maxJointCmd-_minJointCmd);
			float b = _minJointAngle - a * _minJointCmd;
			float jointAngle = a * fJointCmd + b;
			return jointAngle;
		}

		void goToHomePosition()
		{
			std::vector<uint16_t> l_vTargetJointPosition;
			for (int l_joint = 0; l_joint < _nbJoints; l_joint++)
				l_vTargetJointPosition.push_back(convertAnglesToJointCmd(0.0f));
			
			_oDxlHandler.sendTargetJointPosition(l_vTargetJointPosition);
		}

	
	
	private:
		rclcpp::Subscription<advrobotics_lab3_interfaces::msg::Joints>::SharedPtr jointCmdSubscriber;
		rclcpp::Subscription<advrobotics_lab3_interfaces::msg::Gripper>::SharedPtr gripperCmdSubscriber;
		
		rclcpp::Publisher<advrobotics_lab3_interfaces::msg::Joints>::SharedPtr jointPositionPublisher;
		rclcpp::Publisher<advrobotics_lab3_interfaces::msg::Gripper>::SharedPtr gripperPositionPublisher;
	
		rclcpp::TimerBase::SharedPtr _timer;
	
		DynamixelHandler _oDxlHandler;
		std::string _poppyDxlPortName = "/dev/ttyUSB0";
		float _poppyDxlProtocol = 2.0;
		int _poppyDxlBaudRate = 1000000;
	
		float _currentJointAngle_q1 = 0.0f;
		float _currentJointAngle_q2 = 0.0f;
		float _currentJointAngle_q3 = 0.0f;
		float _currentGripperAngle = 0.0f;
	
		int _nbJoints = 4;
		float _minJointCmd = 0;
		float _maxJointCmd = 1023;
		float _minJointAngle = -150.0f;
		float _maxJointAngle = 150.0f;
};

int main(int argc, char** argv)
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<PoppyDriver>());
	rclcpp::shutdown();
	return 0;
}