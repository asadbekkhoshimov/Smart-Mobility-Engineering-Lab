import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class WeatherSubscriber(Node):
    def __init__(self):
        super().__init__('weather_subscriber')
        self.subscription_ = self.create_subscription(
            String,
            'weather_info',
            self.callback,
            10
        )
        self.subscription_

    def callback(self, msg):
        self.get_logger().info(f"Received: {msg.data}")

def main(args=None):
    rclpy.init(args=args)
    node = WeatherSubscriber()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
