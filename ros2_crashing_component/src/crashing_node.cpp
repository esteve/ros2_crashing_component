#include <chrono>

#include "ros2_crashing_component/crashing_node.hpp"
#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;

CrashingNode::CrashingNode(rclcpp::NodeOptions options)
: Node("crashing_node", options)
{
  timer_ = create_wall_timer(
    500ms, std::bind(&CrashingNode::on_timer, this));
}

void CrashingNode::on_timer()
{
  // Make the node crash
  int x = 1 / 0;
}

#include "rclcpp_components/register_node_macro.hpp"

RCLCPP_COMPONENTS_REGISTER_NODE(CrashingNode)
