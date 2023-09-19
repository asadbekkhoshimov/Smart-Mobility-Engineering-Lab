#!/bin/bash

# Start the turtlesim nodes
ros2 run turtlesim turtlesim_node &
ros2 run turtlesim turtle_teleop_key &

# Wait for the nodes to start
sleep 5

# List all the parameters
ros2 param list

# Get the value of a parameter
ros2 param get /turtlesim background_g

# Set a parameter value
ros2 param set /turtlesim background_r 150

# Dump parameters to a file
ros2 param dump /turtlesim > turtlesim.yaml

# Load parameters from a file
ros2 param load /turtlesim turtlesim.yaml

# Start turtlesim with the loaded parameters
ros2 run turtlesim turtlesim_node --ros-args --params-file turtlesim.yaml

# Sleep for a while to observe the turtlesim window
sleep 5

# Stop the turtlesim nodes
killall -9 turtlesim_node
killall -9 turtle_teleop_key
