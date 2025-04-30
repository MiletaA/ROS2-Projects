#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"
#include <iostream>
#include <cmath>

const float WHEEL_RADIUS_DEFAULT = 12.5 / 100; // cm to m

class SpeedCalcNode : public rclcpp::Node
{
public:
    SpeedCalcNode() : Node("speed_calc_node")
    {
        this->declare_parameter("wheel_radius", WHEEL_RADIUS_DEFAULT);

        speed_publisher_ = this->create_publisher<std_msgs::msg::Float64>("speed", 10);

        rpm_subscription_ = this->create_subscription<std_msgs::msg::Float64>(
            "rpm",
            10,
            [this](const std_msgs::msg::Float64::SharedPtr msg) {
                this->calculate_and_pub_speed(*msg);
            }
        );

        std::cout << "Speed Calc Node Is Running..." << std::endl;
    }

private:
    void calculate_and_pub_speed(const std_msgs::msg::Float64 & rpm_msg) const
    {
        float wheel_radius = this->get_parameter("wheel_radius").as_double();

        auto speed_msg = std_msgs::msg::Float64();
        speed_msg.data = rpm_msg.data * (2 * wheel_radius * M_PI) / 60;
        speed_publisher_->publish(speed_msg);
        RCLCPP_INFO(this->get_logger(), "Published speed: %.2f m/s", speed_msg.data);
    }

    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr speed_publisher_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr rpm_subscription_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SpeedCalcNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
