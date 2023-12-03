from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ros2_weather_talk',
            executable='weather_talk_publisher',
            name='weather_talk_publisher'
        ),
        Node(
            package='ros2_weather_talk',
            executable='weather_talk_subscriber',
            name='weather_talk_subscriber'
        )
    ])
