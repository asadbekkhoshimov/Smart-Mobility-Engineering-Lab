#!/bin/bash

#Source ROS 2 environment
echo "Step 1: Sourcing ROS 2 environment..."
source /path/to/your/ros2/setup.bash

# Install turtlesim 
echo "Step 2: Installing turtlesim..."
ros2 pkg executables turtlesim || ros2 pkg install ros_tutorials

#Start turtlesim
echo "Step 3: Starting turtlesim..."
gnome-terminal -- bash -c "ros2 run turtlesim turtlesim_node"

# Start turtle_teleop_key
echo "Step 4: Starting turtle_teleop_key..."
gnome-terminal -- bash -c "ros2 run turtlesim turtle_teleop_key"

# Start rqt
echo "Step 5: Starting rqt..."
gnome-terminal -- bash -c "rqt"

# Additional Steps: Provide user instructions
echo "Additional Steps:"
echo "- Use the arrow keys in the turtle_teleop_key terminal to control the turtle."
echo "- Use rqt to interact with turtlesim services."
echo "- Close the turtlesim and turtle_teleop_key terminals when done."
