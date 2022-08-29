#import .srv file
from Interfaces.srv import GetDistance

#import neccessary packages
import math 
import rclpy
from rclpy.node import Node

#create class for the node
#serviceNode is inherited from Node
class serviceNode(Node):

    #define constructor (__init__)
    #self is the instance of the object, similar to this-> in C++
    def __init__(self):

        #define a service node (argument is the name of the node)
        #super() allows other classes to access this class
        super().__init__('service_node')

        #create the service 
        #three arguments: 
            #which type of request message (found in .srv file.)
            #name of request message 
            #callback
        self.service = self.create_service(
            GetDistance,
            'get_distance',
            self.get_distance_callback
        )

    #define service callback (follows request and response format of .srv file)
    def get_distance_callback(self, request, response):

        #define the process to be done to the request variables
        #here we use the distance formula assuming we are at (0,0)
        p = [0,0]
        q = [request.a, request.b]
        response.distance = math.dist(p,q)
        
        #use ros2 log to print request
        self.get_logger().info('Incoming request\na: %d b: %d' % (request.a, request.b))

        return response

#create a main function to call from the terminal
def main(args = none)
    rclpy.init(args=args)

    #initialize the node
    service_node = serviceNode()

    #execute the node
    rcply.spin(service_node)

    #create shutdown(control c terminates the node)
    rclpy.shutdown() 