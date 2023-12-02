import rclpy
import click
from rclpy.node import Node
from std_msgs.msg import String

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

@click.command()
@click.option('--city', prompt='Enter the city name', help='The name of the city to subscribe to weather information for.')
def subscribe_weather(city):
    rclpy.init()
    node = WeatherSubscriber(city)
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    subscribe_weather()
