#include <chrono>
#include <memory>
#include <vector>
#include <cmath>
#include <optional>

#include "rclcpp/rclcpp.hpp"
#include "advrobotics_lab3_interfaces/srv/invkin.hpp"
#include "advrobotics_lab3_interfaces/msg/joints.hpp"
#include "advrobotics_lab3_interfaces/msg/gripper.hpp"

using namespace std::chrono_literals;

struct Step {
  double x;
  double y;
  double z;
  float gripper;
};

class IKSequenceClient : public rclcpp::Node
{
public:
  IKSequenceClient() : Node("ik_sequence_client")
  {
    ik_client_ =
      this->create_client<advrobotics_lab3_interfaces::srv::Invkin>("invkin");

    joint_pub_ =
      this->create_publisher<advrobotics_lab3_interfaces::msg::Joints>(
        "joint_cmd", 10);

    gripper_pub_ =
      this->create_publisher<advrobotics_lab3_interfaces::msg::Gripper>(
        "gripper_cmd", 10);

    wait_for_service();
    run_sequence();
  }

private:
  /* ---------- ROS interfaces ---------- */
  rclcpp::Client<advrobotics_lab3_interfaces::srv::Invkin>::SharedPtr ik_client_;
  rclcpp::Publisher<advrobotics_lab3_interfaces::msg::Joints>::SharedPtr joint_pub_;
  rclcpp::Publisher<advrobotics_lab3_interfaces::msg::Gripper>::SharedPtr gripper_pub_;

  /* ---------- Wait for IK service ---------- */
  void wait_for_service()
  {
    while (!ik_client_->wait_for_service(1s)) {
      RCLCPP_INFO(this->get_logger(), "Waiting for IK service...");
    }
  }

  /* ---------- Solve IK ONCE ---------- */
  std::optional<advrobotics_lab3_interfaces::msg::Joints>
  solveIK(const Step& s)
  {
    auto request =
      std::make_shared<advrobotics_lab3_interfaces::srv::Invkin::Request>();

    request->x = s.x;
    request->y = s.y;
    request->z = s.z;

    auto future = ik_client_->async_send_request(request);

    if (rclcpp::spin_until_future_complete(
          this->get_node_base_interface(), future)
        != rclcpp::FutureReturnCode::SUCCESS)
    {
      RCLCPP_ERROR(this->get_logger(), "IK service failed");
      return std::nullopt;
    }

    auto response = future.get();

    advrobotics_lab3_interfaces::msg::Joints q;
    q.q1 = response->q1 * 180.0 / M_PI;
    q.q2 = response->q2 * 180.0 / M_PI;
    q.q3 = response->q3 * 180.0 / M_PI;

    return q;
  }

  /* ---------- Full sequence with joint interpolation ---------- */
  void run_sequence()
  {
    std::vector<Step> sequence = {

      // ===== Cube 1 =====
      {0, 0, 0, -40},
      {17, -2, 8, -40},
      {17, -2, 0, -40},
      {17, -2, 0, 20},
      {17, -2, 3, 20},
      {15.5, -8.0, 3, 20},
      {15.5, -8.0, 0, 20},
      {15.5, -8.0, 0, -40},
      {15.5, -8.0, 8, -40},

      // ===== Cube 2 =====
      {16, 7, 8, -40},
      {16, 7, 0, -40},
      {16, 7, 0, 10},
      {16, 7, 10, 20},
      {15.5, -8.0, 10, 20},
      {15.5, -8.0, 3, 20},
      {15.5, -8.0, 3, -40},
      {15.5, -8.0, 10, -40},
      {0.0, 0.0, 0.0, -40}
    };

    int N = 5;           // number of joint interpolation points
    auto sleep_dt = 100ms;   

    for (size_t i = 0; i < sequence.size() - 1; ++i)
    {
      auto q_start = solveIK(sequence[i]);
      auto q_end   = solveIK(sequence[i + 1]);

      if (!q_start || !q_end) {
        RCLCPP_ERROR(this->get_logger(), "IK failed, aborting sequence");
        return;
      }

      for (int k = 1; k <= N; ++k)
      {
        double t = static_cast<double>(k) / N;

        advrobotics_lab3_interfaces::msg::Joints q;
        q.q1 = q_start->q1 + t * (q_end->q1 - q_start->q1);
        q.q2 = q_start->q2 + t * (q_end->q2 - q_start->q2);
        q.q3 = q_start->q3 + t * (q_end->q3 - q_start->q3);

        joint_pub_->publish(q);

        advrobotics_lab3_interfaces::msg::Gripper g;
        g.gripper = sequence[i + 1].gripper;
        gripper_pub_->publish(g);

        rclcpp::sleep_for(sleep_dt);
      }
    }

    RCLCPP_INFO(this->get_logger(), "Sequence finished");
  }
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<IKSequenceClient>());
  rclcpp::shutdown();
  return 0;
}
