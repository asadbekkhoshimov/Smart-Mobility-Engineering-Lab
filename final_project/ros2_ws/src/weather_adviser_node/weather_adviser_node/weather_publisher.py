import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import requests

class WeatherPublisher(Node):
    def __init__(self):
        super().__init__('weather_publisher')
        self.publisher_ = self.create_publisher(String, 'weather_info', 10)
        self.timer_ = self.create_timer(5.0, self.publish_weather)

    def publish_weather(self):
        city = "Paris"
        api_key = "737fb90a05a3b414213f3f230bc9acd1"
        url = f"http://api.openweathermap.org/data/2.5/weather?q={city}&appid={api_key}"
        response = requests.get(url)
        weather_data = response.json()
        temperature = weather_data['main']['temp']

        msg = String()
        msg.data = f"Temperature in {city}: {temperature}°C"
        self.publisher_.publish(msg)
        self.get_logger().info(f"Published: {msg.data}")

def main(args=None):
    rclpy.init(args=args)
    node = WeatherPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

