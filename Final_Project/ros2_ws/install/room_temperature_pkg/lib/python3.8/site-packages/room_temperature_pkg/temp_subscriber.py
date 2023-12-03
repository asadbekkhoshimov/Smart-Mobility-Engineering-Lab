#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
import time

class RoomTemperatureSubscriber(Node):

    def __init__(self):
        super().__init__('room_temperature_subscriber')
        self.subscription = self.create_subscription(Float32, '/room_temp', self.room_temp_callback, 10)
        self.get_logger().info('Subscriber Node Initialized')

    def room_temp_callback(self, msg):
        # Simulate "Listening your request..." and wait 5 seconds
        self.get_logger().info('Listening your request...')
        time.sleep(5)

        # Print the received room temperature
        self.get_logger().info(f'Received room temperature: {msg.data} °C')

        # Wait for 5 seconds
        time.sleep(5)

        # Simulate "Listening your next request..." and wait 5 seconds
        self.get_logger().info('Listening your next request...')
        time.sleep(5)

        # Simulate voice recognition result without actual voice recognition
        self.get_logger().info('Simulated voice recognition: Command processed')

def main(args=None):
    rclpy.init(args=args)

    room_temp_subscriber = RoomTemperatureSubscriber()

    try:
        rclpy.spin(room_temp_subscriber)
    except KeyboardInterrupt:
        pass

    room_temp_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
