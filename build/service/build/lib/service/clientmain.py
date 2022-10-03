#import sys
#This lets us take in input from the command line
import sys

#import neccessary packages
#our srv file is in another directory, so this is how we can import it
#in the test_interfaces1 folder, there is an srv folder, and inside there is GetDistance.srv
#so with 'from' we do folder1.folder2.folder3......
    #in this case from test_interfaces1.srv
#Then, we import GetDistance
from test_interfaces1.srv import GetDistance
import rclpy
from rclpy.node import Node

#create a class for the node
#clientNode is inherited from Node
class clientNode(Node):

    #define constructor (__init__)
    #self is the instance of the object, similar to this-> in C++
    def __init__(self):
        
        #define a client node (argument is the name of the node)
        #super() allows other classes to access this class
        super().__init__('client_node')

        #create client
        #two arguments: 
            #which type of request message (found in .srv file.)
            #name of request message 
        self.cli = self.create_client(
            GetDistance, 
            'get_distance'
        )
        
        #while loop runs once a second
        while not self.cli.wait_for_service(timeout_sec=1.0):

            #checks if message is type GetDistance & name is 'get_distance'
            self.get_logger().info('service not available, waiting again...')  
       
        #DON'T KNOW WHAT THIS IS
        self.req = GetDistance.Request()

    #DON'T KNOW WHAT ALL OF THIS IS
    def send_request(self, a, b):
        
        self.req.a = a
        self.req.b = b
        self.future = self.cli.call_async(self.req)
        
        rclpy.spin_until_future_complete(self, self.future)
        
        return self.future.result()

#create a main function to call from the terminal
def main(args=None):
    rclpy.init(args=args)

    #initialize the node
    client_node = clientNode()
    
    #Read in two numbers from client run call
    response = client_node.send_request(int(sys.argv[1]), int(sys.argv[2]))
    
    #use ros2 logger to print response
    client_node.get_logger().info(
        'Result of GetDistance: %d * %d = %d' %
        (int(sys.argv[1]), int(sys.argv[2]), response.distance))
    client_node.destroy_node()

    #create shutdown(control c terminates the node)
    rclpy.shutdown()
