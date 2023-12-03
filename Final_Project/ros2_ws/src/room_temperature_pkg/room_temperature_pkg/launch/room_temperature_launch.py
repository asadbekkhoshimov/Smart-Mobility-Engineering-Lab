from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='room_temperature_pkg',
            executable='temp_publisher',
            name='temp_publisher',
            output='screen'
        ),
        Node(
            package='room_temperature_pkg',
            executable='temp_subscriber',
            name='temp_subscriber',
            output='screen'
        )
    ])
