# /home/aaaa/Desktop/Smart-Mobility-Engineering-Lab/Final_Project/ros2_ws/src/room_temperature_pkg/room_temperature_pkg/launch/room_temperature_launch.py
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='room_temperature_pkg',
            executable='room_temperature_publisher',
            name='room_temperature_publisher',
            output='screen',
            parameters=[{'sensor_id': '28-011111111111'}],
        ),
        Node(
            package='room_temperature_pkg',
            executable='room_temperature_subscriber',
            name='room_temperature_subscriber',
            output='screen',
        ),
    ])
