#!/bin/bash

# Source your ROS 2 environment (adjust the path if necessary)
source /opt/ros/foxy/setup.bash

# Create a directory for your ROS 2 launch files (if it doesn't exist)
launch_dir=~/ros2_ws/src/my_launch_package/launch
mkdir -p $launch_dir

# Create a new launch file (e.g., my_launch_file.py) in your launch directory
touch $launch_dir/my_launch_file.py

# Edit the launch file with your preferred text editor
# Example: nano $launch_dir/my_launch_file.py

# Define your launch file contents in the file (e.g., my_launch_file.py)

# Here's an example of a simple launch file:
cat <<EOL > $launch_dir/my_launch_file.py
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='my_package',
            executable='my_node',
            name='my_node_name'
        ),
        # Add more nodes or configurations here as needed
    ])
EOL

# Print a message indicating that the launch file has been created
echo "Created a new launch file at $launch_dir/my_launch_file.py"

# Build your ROS 2 workspace
colcon build

# Source the workspace to make the launch file available
source ~/ros2_ws/install/setup.bash

# Launch your ROS 2 nodes using the created launch file
ros2 launch my_launch_package my_launch_file.py

# You can customize the package name and launch file name as needed
