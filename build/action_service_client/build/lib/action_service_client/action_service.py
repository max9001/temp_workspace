#import necessary packages
import time
import rclpy
from rclpy.action import ActionServer
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
class SquaresActionServer(Node):

    #define constructor (__init__)
    #self is the instance of the object, similar to this-> in C++
    def __init__(self):
        
        #class initialization
        #call Node constructor (as mentioned aboce, node is the parent class)
        #name of the node goes inside the parenthesis
        super().__init__('squares_action_server')

        #intatiate action server
        #four arguments
            #add action client to node (self)
            #type of action (Squares)
            #name of action 'squares'
            #callback function 
        self._action_server = ActionServer(
            self,
            Squares,
            'squares',
            self.execute_callback
        )

    #define callback method
    #this callback must return a result message matching the action type
    #two parameters
        #self
        #goal_handle (Encapsulates a state machine for a given goal that the user can trigger transisions on.)
    def execute_callback(self, goal_handle):
        
        #use ros2 logger to print message while goal is being executed
        self.get_logger().info('Executing goal...')

        #here is the logic for our action
        #here we square each number from 1 to index
        #these two lines initialize feedback_msg variable
        feedback_msg = Squares.Feedback()
        feedback_msg.partial_squares = []

        #loop through array, squaring each number
        for i in range(1, goal_handle.request.index + 1):
            feedback_msg.partial_squares.append(
                i*i
            )
            
            #print feedback for each square, ie our progress feedback 
            self.get_logger().info('Feedback: {0}'.format(feedback_msg.partial_squares))
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(1)

        #after goal finishes (loop ends) we set goal finished with the status SUCCEEDED.
        goal_handle.succeed()

        #assign and return result
        result = Squares.Result()
        result.squares = feedback_msg.partial_squares
        return result
    
#create a main function to call from the terminal
def main(args=None):
    rclpy.init(args=args)

    #initialize the node
    squares_action_server = SquaresActionServer()

    #execute the node
    rclpy.spin(squares_action_server)

#makes python file run standalone (?)
#if modules or scripts are not individually named,
#then this file may be excuted accidently
#same as header guard in cpp
if __name__ == '__main__':
    main()




