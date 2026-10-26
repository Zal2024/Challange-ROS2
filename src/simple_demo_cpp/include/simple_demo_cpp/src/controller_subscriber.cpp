#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <cstring>
#include "controller_msgs/msg/controller.hpp"


class Listener : public rclcpp::Node
{
public:
  Listener() : Node("listener")
  {
      sub_controller = this->create_subscription<controller_msgs::msg::Controller>("controller", 10,std::bind(&Listener::controllerCallback, this, std::placeholders::_1)
    );

  }

private:
  void controllerCallback(const
  controller_msgs::msg::Controller::SharedPtr msg)
  {
    uint8_t arr[20];
    memcpy(arr + 3, &msg->velx, 4);
    memcpy(arr + 7, &msg->vely, 4);
    memcpy(arr + 11, &msg->angvel, 4);
    RCLCPP_INFO(this->get_logger(), "velx: %.2f, vely: %.2f, angvel: %.2f", msg->velx, msg->vely, msg->angvel);

  }
  //void controllerCallback(const package_messages::Controller::ConstPtr&Controller_msg);
  rclcpp::Subscription<controller_msgs::msg::Controller>::SharedPtr sub_controller;
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Listener>());
  rclcpp::shutdown();
  return 0;
}
