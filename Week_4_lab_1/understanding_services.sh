#!/bin/bash

# Step 1: Start turtlesim
echo "Step 1: Starting turtlesim..."
gnome-terminal -- bash -c "ros2 run turtlesim turtlesim_node"

# Step 2: Start turtle_teleop_key
echo "Step 2: Starting turtle_teleop_key..."
gnome-terminal -- bash -c "ros2 run turtlesim turtle_teleop_key"

# Step 3: Start rqt_graph
echo "Step 3: Starting rqt_graph..."
gnome-terminal -- bash -c "rqt_graph"

# Step 4: List all topics
echo "Step 4: Listing all topics..."
gnome-terminal -- bash -c "ros2 topic list -t"

# Step 5: Echo /turtle1/cmd_vel topic
echo "Step 5: Echoing /turtle1/cmd_vel topic..."
gnome-terminal -- bash -c "ros2 topic echo /turtle1/cmd_vel"

# Step 6: Show topic info for /turtle1/cmd_vel
echo "Step 6: Showing topic info for /turtle1/cmd_vel..."
gnome-terminal -- bash -c "ros2 topic info /turtle1/cmd_vel"

# Step 7: Show interface for geometry_msgs/msg/Twist
echo "Step 7: Showing interface for geometry_msgs/msg/Twist..."
gnome-terminal -- bash -c "ros2 interface show geometry_msgs/msg/Twist"

# Step 8: Publish to /turtle1/cmd_vel topic
echo "Step 8: Publishing to /turtle1/cmd_vel topic..."
gnome-terminal -- bash -c "ros2 topic pub --rate 1 /turtle1/cmd_vel geometry_msgs/msg/Twist \"{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.8}}\""

# Step 9: Show topic hz for /turtle1/pose
echo "Step 9: Showing topic hz for /turtle1/pose..."
gnome-terminal -- bash -c "ros2 topic hz /turtle1/pose"

# Step 10: Clean up - stop all running nodes
echo "Step 10: Cleaning up - stopping all running nodes..."
pkill -f 'ros2 run'
