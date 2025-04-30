from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

def generate_launch_description():
    return LaunchDescription([
        Node(
            package="param_launch_pub_sub_pkg",
            executable="rpm_pub",
            name="rpm_pub_node",
            parameters=[{"rpm_val":5.0}, {"wheel_radius":40.0}]
        ),
        ExecuteProcess(cmd=['ros2','topic', 'list'],
                       output='screen')
    ])
