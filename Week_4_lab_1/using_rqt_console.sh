#!/bin/bash

# Start rqt_console
ros2 run rqt_console rqt_console &

# Wait for rqt_console to start
sleep 2

# Start turtlesim with a custom log level
ros2 run turtlesim turtlesim_node --ros-args --log-level WARN &

# Wait for turtlesim to start
sleep 2

# Publish a command to make the turtle collide with the wall
ros2 topic pub -r 1 /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0,y: 0.0,z: 0.0}}"

# Wait for a few seconds to observe log messages
sleep 5

# Stop turtlesim and rqt_console
killall -9 turtlesim_node
killall -9 rqt_console
