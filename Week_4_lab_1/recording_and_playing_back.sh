#!/bin/bash

# Start turtlesim and teleop_turtle nodes
ros2 run turtlesim turtlesim_node &
ros2 run turtlesim turtle_teleop_key &

# Create a directory to store bag files
mkdir -p bag_files
cd bag_files

# Record data from the /turtle1/cmd_vel topic
ros2 bag record /turtle1/cmd_vel
