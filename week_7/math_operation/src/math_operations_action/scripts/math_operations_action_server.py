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
