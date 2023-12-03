#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
from speech_recognition import Microphone  # Replace with your actual import statement

class RoomTemperatureSubscriber(Node):

    def __init__(self):
        super().__init__('room_temperature_subscriber')
        self.subscription = self.create_subscription(Float32, '/room_temp', self.room_temp_callback, 10)
        self.microphone = Microphone()  # Replace with your actual microphone initialization
        self.get_logger().info('Listening to voice commands...')

    def room_temp_callback(self, msg):
        self.get_logger().info('Received room temperature message')
        audio_data = self.microphone.listen(timeout=7)
        decoded_audio_data = audio_data.decode("utf-8")
        self.get_logger().info(f'Decoded audio data: {decoded_audio_data}')

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
