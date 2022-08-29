#import neccessary packages
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

#create class for the node
#listenerNode was inherited from Node
class listenerNode(Node):

    #define constructor (__init__)
    #self is the instance of the object, similar to this-> in C++
    def __init__(self):

        #define a subscriber node (argument is the name of the node)
        #super() allows other classes to access this class
        super().__init__('listener_node')

        #create the subscriber
        #four parameters: 
            #which type of message we are going to listen for
            #name of topic to listen for
            #callback 
            #queue size (how many messages in queue before the program stops)
        self.subscriber = self.create_subscription(
            String,
            'talker',
            self.listener_callback,
            10
        )

    #Since the timer was created in the publisher package, we do not need one 
    #in the subscriber. Instead, we define a callback that is called whenever
    #data is recieved.
    def listener_callback(self, msg):

        #use ros2 logger to print the data recieved
        # '%s' is used to concatenate strings in python
        self.get_logger().info('msg: %s' % msg.data)

    #~~~~~~~~~ End of listenerNode Class ~~~~~~~~~

#create a main function to call from the terminal
def main(args=None):
    rclpy.init(args=args)

    #initialize the node
    listener_node = listenerNode()

    #execute the node
    rclpy.spin(listener_node)

    #create shutdown (control c terminates the node)
    rclpy.shutdown()