# ROS 2 Foxy Subscriber and Publisher (Python)

So far, these notes go through creating a publisher. I left lots of comments in temp_workspace/src/talker/talker/main.py so you can hopefully understand what's going on. the tutorial also shows how to make a subscriber which I plan to do once I get this publisher working.

# Publisher

## Create workspace

- In home directory, make a workspace: 

		mkdir temp_workspace	

- Enter workspace: 

		cd temp_workspace

- Create a src folder: 

		mkdir src

- Enter src folder: 

		cd src


## Create package

- while in src, create a pkg. in this example we will create 'talker'

		ros2 pkg create --build-type ament_python talker 

- Create source file for our package 'talker': 

		touch talker/talker/main.py


## Begin writing code for 'talker' package

- navigate to temp_workspace/src/talker/talker/main.py in vscode (`code .`)

- first import neccessary packages

- Next create a class for the node

- Two definitions in the class:

  - contructor

    - define and create publisher node
			
    - create timer

  - timer callback function

    - create and assign msg variable
			
    - publish msg variable

- Create main function to call from the terminal

  - initialize node
		
  - execute node
		
  - create shutdown
  
- **To see this code, click [here](temp_workspace/src/talker/talker/main.py)**


## Add dependencies

- navigate to `temp_workspace/src/talker/package.xml`

- above the `<test_depend>` lines, we will add one or more `<exec_depend>` lines

  - add what packages we imported in main.py

		<exec_depend>rclpy</exec_depend>
  		<exec_depend>std_msgs</exec_depend>
  

## Add entry point (So we can use ros2 run to execute the talker)

- navigate to `temp_workspace/src/talker/setup.py`

- Look for the `entry_points` line 

  - inside the `={ ... }` look for `'console_scripts':`

    - inside the `[ ... ]` add:

			talker = talker.main:main',

      - first is our executable name (talker)

      - then we assign this to our package name (talker)

      - we use a dot to our source file name (main)

      - and finaly the method name inside our source file (main)


## Build the package

- in terminal, navigate to the workspace directory (`temp_workspace`)

- run: 

		colcon build
		
- or, alternatively

		colcon build --packages-select talker

## Run the Package

- ~~open new terminal window~~

- in terminal, navigate to the workspace directory `temp_workspace`)

- source setup files: 

		. install/setup.bash

- run: 

		ros2 run talker talker

## Check if working

- ~~New terminal window~~

- in terminal, navigate to the workspace directory ('temp_workspace')

- run: 

		ros2 topic list -t

  - 'talker' should be in the topic list
 		
    `/talker [std_msgs/msg/String]`

- run:

		ros2 topic echo /talker

  - should publish data:
  
    ```
    data: Hello SCR! this is Max
    ---
    data: Hello SCR! this is Max
    ---
    ```



### BASED ON [THIS TUTORIAL](https://youtu.be/Oz3LTRgRvtU)
