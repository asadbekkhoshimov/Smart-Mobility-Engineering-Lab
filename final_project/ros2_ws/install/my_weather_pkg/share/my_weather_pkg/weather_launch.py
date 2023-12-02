from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='my_weather_pkg',
            executable='weather_publisher',
            name='weather_publisher',
        ),
        Node(
            package='my_weather_pkg',
            executable='weather_subscriber',
            name='weather_subscriber',
        ),
    ])
