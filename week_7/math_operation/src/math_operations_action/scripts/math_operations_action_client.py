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
