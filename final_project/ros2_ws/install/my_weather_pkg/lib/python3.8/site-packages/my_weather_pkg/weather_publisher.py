import rclpy
import click
from rclpy.node import Node
from std_msgs.msg import String
import requests
import speech_recognition as sr

class WeatherPublisher(Node):
    def __init__(self, city):
        super().__init__('weather_publisher')
        self.publisher_ = self.create_publisher(String, 'weather_info', 10)
        self.timer_ = self.create_timer(5.0, self.publish_weather)
        self.city = city

    def publish_weather(self):
        api_key = "737fb90a05a3b414213f3f230bc9acd1"
        url = f"http://api.openweathermap.org/data/2.5/weather?q={self.city}&appid={api_key}"
        response = requests.get(url)
        weather_data = response.json()
        temperature = weather_data['main']['temp']

        msg = String()
        msg.data = f"Temperature in {self.city}: {temperature}°C"
        self.publisher_.publish(msg)
        self.get_logger().info(f"Published: {msg.data}")

class WeatherSubscriber(Node):
    def __init__(self, city):
        super().__init__('weather_subscriber')
        self.subscription_ = self.create_subscription(
            String,
            'weather_info',
            self.callback,
            10
        )
        self.city = city

    def callback(self, msg):
        self.get_logger().info(f"Received weather information for {self.city}: {msg.data}")

def voice_command_callback(node, recognizer, audio):
    try:
        # Recognize speech using Google Speech Recognition
        command = recognizer.recognize_google(audio)
        print(f"Command recognized: {command}")

        if node.city.lower() in command.lower():
            print(f"Triggering weather information for {node.city}")
            node.publish_weather()

    except sr.UnknownValueError:
        print("Google Speech Recognition could not understand audio")
    except sr.RequestError as e:
        print(f"Could not request results from Google Speech Recognition service; {e}")

@click.command()
@click.option('--city', prompt='Enter the city name', help='The name of the city to publish and subscribe to weather information for.')
def publish_subscribe_weather(city):
    rclpy.init()
    publisher_node = WeatherPublisher(city)
    subscriber_node = WeatherSubscriber(city)

    # Initialize speech recognition
    recognizer = sr.Recognizer()

    # Start listening for voice commands
    with sr.Microphone() as source:
        print("Say something to trigger weather information.")
        while True:
            audio = recognizer.listen(source, timeout=None, phrase_time_limit=5, snowboy_configuration=None)
            voice_command_callback(publisher_node, recognizer, audio)

    # Spin the ROS nodes
    rclpy.spin_once(publisher_node, timeout_sec=0)
    rclpy.spin(subscriber_node)

    # Destroy the ROS nodes
    publisher_node.destroy_node()
    subscriber_node.destroy_node()

    # Shut down ROS
    rclpy.shutdown()

if __name__ == '__main__':
    publish_subscribe_weather()
