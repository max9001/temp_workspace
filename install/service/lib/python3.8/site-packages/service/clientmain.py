import sys

from example_interfaces.srv import AddTwoInts
import rclpy
from rclpy.node import Node


class clientNode(Node):

    def __init__(self):
        
        super().__init__('client_node')
        
        self.cli = self.create_client(GetDistance, 'get_distance')
        
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        
        self.req = GetDistance.Request()

    def send_request(self, a, b):
        
        self.req.a = a
        self.req.b = b
        self.future = self.cli.call_async(self.req)
        
        rclpy.spin_until_future_complete(self, self.future)
        
        return self.future.result()


def main(args=None):
    rclpy.init(args=args)

    client_node = clientNode()
    
    response = client_node.send_request(int(sys.argv[1]), int(sys.argv[2]))
    
    client_node.get_logger().info(
        'Result of GetDistance: ' %
        (int(sys.argv[1]), int(sys.argv[2]), response.sum))

    client_node.destroy_node()
    rclpy.shutdown()
