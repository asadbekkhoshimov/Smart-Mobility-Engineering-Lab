#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
import time
import speech_recognition as sr

class RoomTemperatureSubscriber(Node):

    def __init__(self):
        super().__init__('room_temperature_subscriber')
        self.subscription = self.create_subscription(Float32, '/room_temp', self.room_temp_callback, 10)
        self.get_logger().info('Subscriber Node Initialized')
        self.message_count = 0  # Initializeing a counter for the number of messages
        self.recognizer = sr.Recognizer()

    def room_temp_callback(self, msg):
        if self.message_count < 4:  # Checking if fewer than 4 messages have been processed
            #  wait 5 seconds
            self.get_logger().info('Listening your request...')
            time.sleep(5)

            # Prints the received room temperature
            self.get_logger().info(f'Received room temperature: {msg.data} °C')

            # Waiting 5 seconds
            time.sleep(5)

            # Simulates "Listening your next request..." and wait 5 second
            self.get_logger().info('Listening your nexxt request...')
            time.sleep(5)

            self.get_logger().info('Simulated voice recognition: Command processed')

            self.message_count += 1  # Increment the message counter
        else:
            # shuttin down the node after 4 messages
            self.get_logger().info('Processed 4 messages, shutting down node.')
            rclpy.shutdown()

    def recognize_speech(self):
        with sr.Microphone() as source:
            self.recognizer.adjust_for_ambient_noise(source, duration=1)
            self.get_logger().info("Say something...")
            audio = self.recognizer.listen(source)

        try:
            command = self.recognizer.recognize_google(audio).lower()
            self.get_logger().info(f'Recognized command: {command}')
            if "temperature" in command or "room temperature" in command or "tell the temperature" in command:
                # Triggering the room temperature callback for testing purposes
                temperature_msg = Float32()
                temperature_msg.data = 22.0
                self.room_temp_callback(temperature_msg)
        except sr.UnknownValueError:
            self.get_logger().info("Could not understand audio")
        except sr.RequestError as e:
            self.get_logger().error(f"Could not request results from Google Speech Recognition service; {e}")

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
