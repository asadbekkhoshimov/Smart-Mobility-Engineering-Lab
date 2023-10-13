#!/bin/bash

# Define your package name and workspace directory
PACKAGE_NAME="my_topic_statistics_package"
ROS2_WS_DIR="$HOME/ros2_ws"

# Create a new ROS 2 workspace if it doesn't exist
if [ ! -d "$ROS2_WS_DIR" ]; then
    mkdir -p "$ROS2_WS_DIR"/src
fi

# Create a new ROS 2 package
cd "$ROS2_WS_DIR"/src
ros2 pkg create $PACKAGE_NAME --dependencies rclcpp std_msgs

# Navigate to the package source directory
cd "$ROS2_WS_DIR"/src/$PACKAGE_NAME/src

# Download the example subscriber code
wget -O member_function_with_topic_statistics.cpp https://raw.githubusercontent.com/ros2/examples/foxy/rclcpp/topics/minimal_subscriber/member_function_with_topic_statistics.cpp

# Edit the code with a text editor
nano member_function_with_topic_statistics.cpp

# Save and exit the text editor

# Navigate to the package directory
cd "$ROS2_WS_DIR"

# Build the ROS 2 package
colcon build --packages-select $PACKAGE_NAME

# Run the subscriber node with statistics enabled
ros2 run $PACKAGE_NAME listener_with_topic_statistics
