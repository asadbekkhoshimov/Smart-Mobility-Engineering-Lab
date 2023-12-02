# voice_control_pkg/voice_control_pkg/voice_control_node.py

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
import speech_recognition as sr

class VoiceControlNode(Node):
    def __init__(self):
        super().__init__('voice_control_node')
        self.subscription_ = self.create_subscription(Float32, 'temperature', self.callback, 10)
        self.recognizer = sr.Recognizer()

    def callback(self, msg):
        temperature = msg.data
        self.get_logger().info(f"Received temperature: {temperature}°C")

    def listen_for_command(self):
        with sr.Microphone() as source:
            self.get_logger().info("Say a command:")
            audio = self.recognizer.listen(source)

        try:
            command = self.recognizer.recognize_google(audio).lower()
            self.get_logger().info(f"Command received: {command}")
            if 'temperature' in command:
                # Publish a request for temperature
                # Add code to handle temperature request
                pass
        except sr.UnknownValueError:
            self.get_logger().info("Could not understand audio")
        except sr.RequestError as e:
            self.get_logger().info(f"Error with the speech recognition service: {e}")

def main(args=None):
    rclpy.init(args=args)
    node = VoiceControlNode()
    rclpy.spin(node)

if __name__ == '__main__':
    main()
