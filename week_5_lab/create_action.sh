#!/bin/bash

# Step 1: Create the action definition file
echo "Step 1: Creating the action definition file..."
mkdir -p ~/ros2_ws/src/action_tutorials_interfaces/action
echo "int32 order
---
int32[] sequence
---
int32[] partial_sequence" > ~/ros2_ws/src/action_tutorials_interfaces/action/Fibonacci.action

# Step 2: Modify CMakeLists.txt
echo "Step 2: Modifying CMakeLists.txt..."
cd ~/ros2_ws/src/action_tutorials_interfaces
# Add action definition to CMakeLists.txt
sed -i '/ament_package()/a\
find_package(rosidl_default_generators REQUIRED)\
rosidl_generate_interfaces(\${PROJECT_NAME} "action/Fibonacci.action")' CMakeLists.txt

# Step 3: Modify package.xml
echo "Step 3: Modifying package.xml..."
# Add dependencies to package.xml
rosdep update
rosdep install -y --from-paths . --ignore-src
