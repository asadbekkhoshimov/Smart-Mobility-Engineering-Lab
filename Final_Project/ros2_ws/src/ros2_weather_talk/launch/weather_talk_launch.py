# weather_talk_launch.py

import launch
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ros2_weather_talk',  
            executable='weather_talk_publisher_node',  
            name='weather_talk_publisher',
        ),
        Node(
            package='ros2_weather_talk',  
            executable='weather_talk_subscriber_node', 
            name='weather_talk_subscriber',
        ),
    ])
