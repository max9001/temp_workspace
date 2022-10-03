#import sys
#This lets us take in input from the command line
import sys

#import necessary packages
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

#import .action file
#our action file is in another directory, so this is how we can import it
#in the action_tutorials_interfaces folder, there is an action folder, and inside there is Squares.action
#so with 'from' we do folder1.folder2.folder3......
    #in this case from action_tutorials_interfaces.action
#Then, we import Squares
from action_tutorials_interfaces.action import Squares

#create class for the node
#SquaresActionServer is inherited from Node (subclass)
class SquaresActionClient(Node):

    #define constructor (__init__)
    #self is the instance of the object, similar to this-> in C++
    def __init__(self):

        #class initialization
        #call Node constructor (as mentioned aboce, node is the parent class)
        #name of the node goes inside the parenthesis
        super().__init__('squares_action_client')\

        #intatiate action server
        #three arguments
            #add action client to node (self)
            #type of action (Squares)
            #name of action 'squares'
        self._action_client = ActionClient(
            self, 
            Squares,
            'squares'
        )

    #sends a goal 
    #A request message is sent from an action client to an action server initiating a new goal.
    def send_goal(self, index):

        goal_msg = Squares.Goal()
        goal_msg.index = index


        self._action_client.wait_for_server()


        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )

        #makes call to the goal_response_callback
        #will either return rejected or accepted
        #send_goal should always return something
            #avoid starting a process without client's knowledge
        self._send_goal_future.add_done_callback(self.goal_response_callback)



    def goal_response_callback(self, future):
        goal_handle = future.result()
        
        if not goal_handle.accepted:
            #print goal rejected
            self.get_logger().info('Goal rejected')
            #use return to exit the program
            return

        #print goal accepted
        self.get_logger().info('Goal accepted')

        
        self._get_result_future = goal_handle.get_result_async()

        #makes call to get_result_callback 
            #this prints progress feedback
        self._get_result_future.add_done_callback(self.get_result_callback)



    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('result: {0}'.format(result.squares))
        rclpy.shutdown()

    


    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('received feedback: {0}'.format(feedback.partial_squares))




def main(args=None):
    rclpy.init(args=args)

    #initialize the node
    action_client = SquaresActionClient()

    #reads in number from command line
    action_client.send_goal(int(sys.argv[1]))

    #use ros2 logger to print response
    rclpy.spin(action_client)


#makes python file run standalone (?)
#if modules or scripts are not individually named,
#then this file may be excuted accidently
#same as header guard in cpp
if __name__ == '__main__':
    main()
