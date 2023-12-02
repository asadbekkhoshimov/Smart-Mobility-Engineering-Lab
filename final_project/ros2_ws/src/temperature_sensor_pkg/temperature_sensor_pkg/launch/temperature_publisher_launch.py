import launch
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='temperature_sensor_pkg',
            executable='temperature_publisher',
            name='temperature_publisher',
            output='screen',
        ),
    ])
