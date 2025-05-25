#include "rclcpp/rclcpp.hpp"
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <cv_bridge/cv_bridge.hpp>
#include "service_camera_pkg/srv/turn_camera.hpp"
#include "sensor_msgs/image_encodings.hpp"

int main(int argc, char **argv) {
    // Initialize ROS 2
    rclcpp::init(argc, argv);

    // Create node
    auto node = rclcpp::Node::make_shared("turn_camera_client_node");

    // Create client
    auto client = node->create_client<service_camera_pkg::srv::TurnCamera>("turn_camera");

    // Wait for service to be available
    while (!client->wait_for_service(std::chrono::seconds(1))) {
        if (!rclcpp::ok()) {
            RCLCPP_ERROR(node->get_logger(), "Interrupted while waiting for the service. Exiting.");
            return 1;
        }
        RCLCPP_INFO(node->get_logger(), "Service not available, waiting again...");
    }

    while (rclcpp::ok()) {
        float input_num;
        std::cout << "Enter an angle to turn robot camera: ";
        std::cin >> input_num;

        // Create request
        auto request = std::make_shared<service_camera_pkg::srv::TurnCamera::Request>();
        request->degree_turn = input_num;

        // Call service asynchronously
        auto result_future = client->async_send_request(request);

        // Wait for result
        if (rclcpp::spin_until_future_complete(node, result_future) == rclcpp::FutureReturnCode::SUCCESS) {
            auto response = result_future.get();

            try {
                cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(response->camera_image, sensor_msgs::image_encodings::BGR8);
                cv::imshow("Robot Camera Image", cv_ptr->image);
                cv::waitKey(1000);
            } catch (cv_bridge::Exception &e) {
                RCLCPP_ERROR(node->get_logger(), "cv_bridge exception: %s", e.what());
            }
        } else {
            RCLCPP_ERROR(node->get_logger(), "Failed to call service turn_camera");
        }

        std::cin.clear();
    }

    rclcpp::shutdown();
    return 0;
}
