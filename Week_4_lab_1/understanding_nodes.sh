
#!/bin/bash

# Step 1: Run turtlesim_node
echo "Step 1: Running turtlesim_node..."
ros2 run turtlesim turtlesim_node

# Step 2: List active nodes
echo "Step 2: Listing active nodes..."
ros2 node list

# Step 2.1: Remap the node name
echo "Step 2.1: Remapping the node name..."
ros2 run turtlesim turtlesim_node --ros-args --remap __node:=my_turtle

# Step 3: Get node info
echo "Step 3: Getting node info..."
ros2 node info /my_turtle

# Additional step: Run teleop_node
echo "Additional Step: Running turtle_teleop_key..."
ros2 run turtlesim turtle_teleop_key
