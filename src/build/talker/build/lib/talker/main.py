#import neccessary packages
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

#create class for the node
#talkerNode was inherited from Node
class talkerNode(Node):

    #define constructor (__init__)
    #self is the instance of the object, similar to this-> in C++
    def __init__(self):
       
        #define a publisher node (argument is the name of the node)
        #super() allows other classes to access this class
        super().__init__('talker_node')

        #create the publisher
        #three arguments: 
            #which type of message we are going to publish
            #name of topic we are going to publish 
            #queue size (how many messages in queue before the program stops)
        self.publisher = self.create_publisher(
            String,
            'talker',
            10
        )

        #create timer_period variable (is this even neccessary?)
        timer_period = 1

        #create the timer
        #two arguments: 
            #timer period
            #a callback (resets the timer)
        self.timer = self.create_timer(
            timer_period,
            self.timer_callback
        )

    #create the callback function to reset the timer
    #to publish messages, we include our message in the callback function
    #this way, a message is published at the end of the timer continuously
    def timer_callback(self):
        
        #create msg variable
        msg = String()
        msg.data = "Hello SCR! this is Max"

        #publish msg
        self.publisher.publish(msg)

    #~~~~~~~~~ End of talkerNode Class ~~~~~~~~~

#create a main function to call from the terminal
def main(args=None):
    rclpy.init(args=args)

    #initialize the node
    talker_node = talkerNode()

    #execute the node
    rclpy.spin(talker_node)

    #create shutdown (control c terminates the node)
    rclpy.shutdown()