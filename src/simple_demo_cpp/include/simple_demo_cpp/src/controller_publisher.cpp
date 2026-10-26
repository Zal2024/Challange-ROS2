#include <chrono>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include "controller_msgs/msg/controller.hpp"






class Talker : public rclcpp::Node
{
public:
  Talker() : Node("talker"), count_(0)
  {
    pub_pos = this->create_publisher<controller_msgs::msg::Controller>("controller", 10);
    timer_ = this->create_wall_timer(
      std::chrono::seconds(1),
      std::bind(&Talker::timer_callback, this)
    );
  }

private:
  void timer_callback()
  {
    controller_msg.velx = 1.0f;
    controller_msg.vely = 2.0f;
    controller_msg.angvel = 0.5f;
    RCLCPP_INFO(this->get_logger(), "Publishing velx: %.2f, vely: %.2f, angvel: %.2f", controller_msg.velx, controller_msg.vely, controller_msg.angvel);
    pub_pos->publish(controller_msg);
  }
  controller_msgs::msg::Controller controller_msg;
  rclcpp::Publisher<controller_msgs::msg::Controller>::SharedPtr pub_pos;
  rclcpp::TimerBase::SharedPtr timer_;
  int count_;
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Talker>());
  rclcpp::shutdown();
  return 0;
}

