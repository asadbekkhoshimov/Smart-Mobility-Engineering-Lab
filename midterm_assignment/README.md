# Midterm Assignment
# ROS 2 Fleet Management Project

The ROS 2 Fleet Management Project is a system designed to manage and optimize a fleet of vehicles for various transportation and logistics purposes. It allows you to efficiently allocate, route, monitor, and coordinate vehicles to accomplish specific tasks.

## Overview

This project consists of two main components:
1. **Server Node**: The server node performs the fleet management logic and provides routes for vehicles to follow.

2. **Client Node**: The client node allows users to input details like the current city, destination, load tonnage, and other information. It then sends this information to the server node, which calculates and returns the estimated routes.

## Directory Structure

```plaintext
ros2_ws/
│
├── src/
│   ├── fleet_management/
│   │   ├── action/
│   │   │   ├── FleetManagement.action
│   │   │   └── ...
│   │   ├── __init__.py
│   │   ├── fleet_data.py
│   │   ├── fleet_management_server_cli.py
│   │   └── fleet_management_client_cli.py
│   │   └── ...
│   ├── my_package/
│   │   └── fleet_data.py
│   └── ...
│
└── ...

