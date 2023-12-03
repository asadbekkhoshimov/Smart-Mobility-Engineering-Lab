#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

import random

class RoomTemperaturePublisher(Node):

    def __init__(self):
        super().__init__('room_temperature_publisher')
        self.publisher_ = self.create_publisher(Float32, '/room_temp', 10)
        self.timer_ = self.create_timer(1.0, self.publish_temperature)
        self.get_logger().info('Room Temperature Publisher Node is up and running.')

    def publish_temperature(self):
        # Simulates temperature values from a sensor in the range 21.0 - 22.9
        temperature = round(random.uniform(21.0, 22.9), 2)

        # Createing a Float32 message and publishing the temperature
        msg = Float32()
        msg.data = temperature
        self.publisher_.publish(msg)

        self.get_logger().info(f'Published room temperature: {temperature} °C')

def main(args=None):
    rclpy.init(args=args)

    room_temp_publisher = RoomTemperaturePublisher()

    try:
        rclpy.spin(room_temp_publisher)
    except KeyboardInterrupt:
        pass

    room_temp_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
