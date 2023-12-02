import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
import random
import speech_recognition as sr

class TemperaturePublisher(Node):
    def __init__(self):
        super().__init__('temperature_publisher')
        self.publisher_ = self.create_publisher(Float32, 'temperature', 10)
        self.timer_ = self.create_timer(5.0, self.publish_temperature)

    def publish_temperature(self):
        # Read temperature from the sensor (replace with your actual code)
        temperature = 20 + 10 * random.random()

        msg = Float32()
        msg.data = temperature
        self.publisher_.publish(msg)
        self.get_logger().info(f"Published temperature: {temperature}°C")

def voice_command_callback(node, recognizer, audio):
    try:
        # Recognize speech using Google Speech Recognition
        command = recognizer.recognize_google(audio)
        print(f"What are you going to ask?")

        if "room temperature" in command.lower():
            print("Room temperature command detected.")
            # Publish temperature data
            node.publish_temperature()
    except sr.UnknownValueError:
        print("Google Speech Recognition could not understand audio")
    except sr.RequestError as e:
        print(f"Could not request results from Google Speech Recognition service; {e}")

def main(args=None):
    rclpy.init(args=args)
    node = TemperaturePublisher()

    # Initialize speech recognition
    recognizer = sr.Recognizer()

    # Start listening for voice commands
    with sr.Microphone() as source:
        while True:
            print("What are you going to ask?")
            audio = recognizer.listen(source, timeout=5, phrase_time_limit=5, snowboy_configuration=None)
            voice_command_callback(node, recognizer, audio)

    # Destroy the ROS node
    node.destroy_node()

    # Shut down ROS
    rclpy.shutdown()

if __name__ == '__main__':
    main()
