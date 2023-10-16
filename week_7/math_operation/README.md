# Math Operation ROS 2 Package

This ROS 2 package demonstrates a simple client-server interaction for performing mathematical operations. The package includes both the server and client nodes to perform math operations using ROS 2 action messages.
Server (math_operation_server.py)

The server node performs the actual mathematical operations based on the client's requests. It listens for incoming goals from clients and executes the requested operation. Supported operations include:

    Addition
    Subtraction
    Multiplication
    Division

If the division operation is requested, the server checks for division by zero.
Client (math_operation_client.py)

The client node sends goal requests to the server to perform mathematical operations. The client specifies the operation type and provides two numbers for the operation.
How to Run

    Ensure you have ROS 2 installed on your system.

    Build your ROS 2 workspace using colcon or any preferred build tool.

    Run the server node in one terminal:

    bash

ros2 run math_operation math_operation_server.py

Run the client node in another terminal:

bash

    ros2 run math_operation math_operation_client.py

    The client will send a goal to the server with the specified operation and numbers.

    The server will perform the requested operation and return the result.

Example

    Client Request: Addition of 5 and 3
    Server Response: Result: 8

Feel free to modify and extend this package for your own use cases. Enjoy experimenting with ROS 2!
