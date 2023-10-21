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
### Codes:

* fleet_management_server_cli.py

```

import rclpy
from rclpy.action import ActionServer
from fleet_management.action import FleetManagement
from fleet_data import cities, trucks

def calculate_routes(origin_city, destination_city, load_tonnage):
    # Replace this logic with your own fleet management algorithm
    # Calculate the routes and trucks needed based on the client's input
    # For this example, let's assume a simple routing logic
    route = f'{cities[origin_city]} to {cities[destination_city]}'
    for truck_id, truck_info in trucks.items():
        if truck_info['capacity'] >= load_tonnage:
            return [route], truck_id

    # If no suitable truck is found, return an error route and truck_id
    return ['No suitable trucks available'], -1

def main():
    rclpy.init()
    node = rclpy.create_node('fleet_management_server')

    def goal_callback(goal_handle):
        goal_request = goal_handle.request
        origin_city = goal_request.origin_city
        destination_city = goal_request.destination_city
        load_tonnage = goal_request.load_tonnage

        # Implement your fleet management logic using the calculate_routes function
        routes, selected_truck_id = calculate_routes(origin_city, destination_city, load_tonnage)

        if selected_truck_id == -1:
            goal_handle.abort()
            return

        result = FleetManagement.Result()
        result.vehicle_routes = routes
        result.selected_truck = selected_truck_id

        # Set the result using set_succeeded
        goal_handle.succeed(result=result)

    action_server = ActionServer(node, FleetManagement, 'fleet_management', goal_callback)

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Action server stopped')

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

```
* fleet_management_server_cli.py
  
```
import rclpy
from rclpy.action import ActionClient
from fleet_management.action import FleetManagement
from fleet_data import cities, trucks
import time

def main():
    rclpy.init()
    node = rclpy.create_node('fleet_management_client')

    # Create an Action Client
    action_client = ActionClient(node, FleetManagement, 'fleet_management')

    # Display a list of cities to the user
    print("American Cities:")
    for city_num, city_name in cities.items():
        print(f"{city_num}: {city_name}")

    # Get user inputs
    origin_city = int(input("From which City: "))
    destination_city = int(input("Enter the destination: "))
    load_tonnage = float(input("Enter the load weight(ton): "))

    def send_request(origin_city, destination_city, load_tonnage):
        goal = FleetManagement.Goal()
        goal.origin_city = origin_city
        goal.destination_city = destination_city
        goal.load_tonnage = load_tonnage

        future = action_client.send_goal_async(goal)

        rclpy.spin_until_future_complete(node, future)

        if future.result() is not None:
            goal_handle = future.result()

            if goal_handle.accepted:
                print("Goal accepted, waiting for result...")
                
                print("From Seoul to gsgsfg/.gsf.gsf")

                time.sleep(300)  # 5 minutes = 300 seconds



                
                result = goal_handle.result
                selected_truck_info = trucks[result.selected_truck]
                print(f'Selected Truck: {selected_truck_info["name"]}')
                if result.vehicle_routes:
                    print(f'Estimated Route: {result.vehicle_routes[0]}')
                else:
                    print("No vehicle routes available.")
            else:
                print("Goal was not accepted by the server.")
        else:
            print("Action client did not receive a valid result.")

    send_request(origin_city, destination_city, load_tonnage)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

```

* fleet_data.py
  
```
# fleet_data.py

# List of cities with their respective numbers
cities = {
    1: 'New York',
    2: 'Los Angeles',
    3: 'Chicago',
    4: 'Houston',
    5: 'Phoenix',
    6: 'Philadelphia',
    7: 'San Antonio',
    8: 'San Diego',
    9: 'Dallas',
    10: 'San Francisco'
}


# List of truck types with their capacities in tons
trucks = {
    1: {
        'name': '1 Ton Truck',
        'capacity': 1.0,
    },
    2: {
        'name': '5 Ton Truck',
        'capacity': 5.0,
    },
    3: {
        'name': '10 Ton Truck',
        'capacity': 10.0,
    },
    4: {
        'name': '1 Ton Truck',
        'capacity': 1.0,
    },
    5: {
        'name': '5 Ton Truck',
        'capacity': 5.0,
    },
    6: {
        'name': '10 Ton Truck',
        'capacity': 10.0,
    },
    7: {
        'name': '1 Ton Truck',
        'capacity': 1.0,
    },
    8: {
        'name': '5 Ton Truck',
        'capacity': 5.0,
    },
    9: {
        'name': '10 Ton Truck',
        'capacity': 10.0,
    },
    10: {
        'name': '1 Ton Truck',
        'capacity': 1.0,
    },
    11: {
        'name': '5 Ton Truck',
        'capacity': 5.0,
    },
    12: {
        'name': '10 Ton Truck',
        'capacity': 10.0,
    },
}

```


* ros2_ws: Your ROS 2 workspace directory.
* src: Source directory containing your ROS 2 packages.
* fleet_management: A ROS 2 package containing the Fleet Management action files and Python scripts.
* my_package: A custom Python module for storing data related to cities and trucks.

## Getting Started

Before running the project, ensure that you have a working ROS 2 environment and your workspace is set up correctly. Follow these steps to run the project:

Source ROS 2 Workspace:

```

source /path/to/your/ros2_ws/install/setup.bash

```

Build Your ROS 2 Workspace:

```

colcon build --packages-select fleet_management

```

![image](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/05db48d4-7efc-4151-b330-66ac2e4cf578)


Run ROS 2 Core:

If not using a launch file, start the ROS 2 core system:

```

ros2 run your_package_name ros2 run roscore
```
Run the Server Node:

In a new terminal, run the server node:


    ros2 run fleet_management fleet_management_server_cli.py
    
![image](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/072b9757-a5f8-4491-92a3-9457cd8921b0)

Run the Client Node:

In another terminal, run the client node:

    ros2 run fleet_management fleet_management_client_cli.py

![image](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/1a4eba67-6637-4fca-a06f-2efa9da189b8)


## Follow Instructions:

Respond to the client node's prompts for details like the current city, destination, load tonnage, and more.

Monitor Output:

![image](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/570493c8-0ede-4e7d-81b3-2fc9d3e95d49)


The server node performs calculations and provides feedback. The client node displays the output, including vehicle routes and completion percentages.

Data and Configuration

Data about cities and trucks are stored in the fleet_data.py module. You can customize this data as needed.
Feedback and Additional Features

This project can be extended with additional features such as real-time tracking, dynamic route updates, or enhanced data analysis. Feel free to contribute and make improvements as needed.

