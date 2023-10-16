# Math Operation ROS 2 Package

This ROS 2 package demonstrates a simple client-server interaction for performing mathematical operations. The package includes both the server and client nodes to perform math operations using ROS 2 action messages.
Server (math_operation_server.py)

The server node performs the actual mathematical operations based on the client's requests. It listens for incoming goals from clients and executes the requested operation. Supported operations include:

 * Addition
 * Subtraction
 * Multiplication
 * Division

### Interaction diagram

  +------------------------+          +------------------------+
  |                        |          |                        |
  |     math_operation     |          |     math_operation     |
  |        Client          |          |        Server          |
  |                        |          |                        |
  +----------+-------------+          +------------+-----------+
             |                                       |
             |                                       |
             |           Send Goal Request           |
             |-------------------------------------->|
             |                                       |
             |                                       |
             |                                       |
             |        Goal Request Processing        |
             |<--------------------------------------|
             |                                       |
             |                                       |
             |           Send Goal Result            |
             |<--------------------------------------|
             |                                       |
             |                                       |
             |                                       |
             |                                       |
  +----------v-------------+          +------------v-----------+
  |                        |          |                        |
  |       Result           |          |                        |
  |      Displayed        |          |                        |
  |                        |          |                        |
  +------------------------+          +------------------------+


If the division operation is requested, the server checks for division by zero.
Client (math_operation_client.py)

The client node sends goal requests to the server to perform mathematical operations. The client specifies the operation type and provides two numbers for the operation.
How to Run

* Ensure you have ROS 2 installed on your system.

* Build your ROS 2 workspace using colcon or any preferred build tool.

  ###  Run the server node in one terminal:

 ros2 run math_operation math_operation_server.py

```
   #!/usr/bin/env python3

   import rclpy
   from rclpy.node import Node
   from math_operations_action_msgs.action import MathOperation

   class MathOperationServer(Node):

    def __init__(self):
        super().__init__('math_operation_server')
        self.action_server = self.create_action_server(MathOperation, 'math_operation', self.execute_callback)

    async def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

        # Perform the mathematical operation based on the goal values
        operation_type = goal_handle.request.operation
        a = goal_handle.request.a
        b = goal_handle.request.b

        if operation_type == 'addition':
            result = a + b
        elif operation_type == 'subtraction':
            result = a - b
        elif operation_type == 'multiplication':
            result = a * b
        elif operation_type == 'division':
            if b != 0:
                result = a / b
            else:
                return MathOperation.Result(status='Division by zero')

        self.get_logger().info(f'Result: {result}')
        return MathOperation.Result(result=result)

   def main(args=None):
       rclpy.init(args=args)
       node = MathOperationServer()
       try:
           rclpy.spin(node)
       except KeyboardInterrupt:
           pass

       node.destroy_node()
       rclpy.shutdown()

   if __name__ == '__main__':
       main()

```
### Run the client node in another terminal:

ros2 run math_operation math_operation_client.py

```
    
#!/usr/bin/env python3

import rclpy
from rclpy.action import ActionClient
from math_operations_action_msgs.action import MathOperation

def main(args=None):
    rclpy.init(args=args)
    node = rclpy.create_node('math_operation_client')

    client = ActionClient(node, MathOperation, 'math_operation')

    goal_msg = MathOperation.Goal()
    goal_msg.operation = 'addition'
    goal_msg.a = 5
    goal_msg.b = 3

    future = client.send_goal_async(goal_msg)

    rclpy.spin_until_future_complete(node, future)
    if future.result() is not None:
        result = future.result().result
        node.get_logger().info(f'Result: {result}')
    else:
        node.get_logger().warning('Goal failed!')

    rclpy.shutdown()

if __name__ == '__main__':
    main()

```

### Example

  Client Request: Addition of 5 and 3
  Server Response: Result: 8
  
![image](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/50d008d8-473f-43b2-9adc-3df154dcf0b8)

![image](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/3c016b29-a81c-451c-b967-5db44e54022e)


    

Feel free to modify and extend this package for your own use cases. Enjoy experimenting with ROS 2!
