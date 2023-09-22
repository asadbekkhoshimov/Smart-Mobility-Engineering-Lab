#!/bin/bash

# Create the ROS 2 workspace
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws

# Clone the examples repository
git clone https://github.com/ros2/examples src/examples -b humble

# Source the ROS 2 environment
source /path/to/your/ros2/install/setup.bash  # Replace with the actual path

# Build the workspace
colcon build --symlink-install

# Run tests
colcon test

# Source the environment
source install/setup.bash

# Run a demo
ros2 run examples_rclcpp_minimal_subscriber subscriber_member_function &
ros2 run examples_rclcpp_minimal_publisher publisher_member_function &

# Sleep for a few seconds to allow the demo to run
sleep 5


# Print a message indicating the script has completed
echo "ROS 2 colcon tutorial and screenshot capture completed."

# You can add more commands or customize the script as needed
