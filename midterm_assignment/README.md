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
```

* ros2_ws: Your ROS 2 workspace directory.
* src: Source directory containing your ROS 2 packages.
* fleet_management: A ROS 2 package containing the Fleet Management action files and Python scripts.
* my_package: A custom Python module for storing data related to cities and trucks.

Getting Started

Before running the project, ensure that you have a working ROS 2 environment and your workspace is set up correctly. Follow these steps to run the project:

Source ROS 2 Workspace:

```

source /path/to/your/ros2_ws/install/setup.bash

```

Build Your ROS 2 Workspace:

```

colcon build --packages-select fleet_management

```

Run ROS 2 Core:

If not using a launch file, start the ROS 2 core system:

```

ros2 run your_package_name ros2 run roscore
```
Run the Server Node:

In a new terminal, run the server node:

```

ros2 run fleet_management fleet_management_server_cli.py
```
Run the Client Node:

In another terminal, run the client node:

```

    ros2 run fleet_management fleet_management_client_cli.py
```
    Follow Instructions:

    Respond to the client node's prompts for details like the current city, destination, load tonnage, and more.

    Monitor Output:

    The server node performs calculations and provides feedback. The client node displays the output, including vehicle routes and completion percentages.

Data and Configuration

Data about cities and trucks are stored in the fleet_data.py module. You can customize this data as needed.
Feedback and Additional Features

This project can be extended with additional features such as real-time tracking, dynamic route updates, or enhanced data analysis. Feel free to contribute and make improvements as needed.

