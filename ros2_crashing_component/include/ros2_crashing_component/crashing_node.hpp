#ifndef ROS2_CRASHING_COMPONENT__CRASHING_NODE_HPP_
#define ROS2_CRASHING_COMPONENT__CRASHING_NODE_HPP_

#include "rclcpp/rclcpp.hpp"
#include "ros2_crashing_component/visibility.h"

class CrashingNode : public rclcpp::Node
{
public:
  ROS2_CRASHING_COMPONENT_PUBLIC CrashingNode(rclcpp::NodeOptions options);

private:
  void on_timer();
  rclcpp::TimerBase::SharedPtr timer_;
};

#endif  // ROS2_CRASHING_COMPONENT__CRASHING_NODE_HPP_
