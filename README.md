# New People Start Here

## Setting up ubuntu

- If Raspberry Pi

  - Using Rasberry Pi Imager... 
  
    - choose `Other general-purpose OS` 
    
    - then `Ubuntu`
  
    - lastly, choose `Ubuntu Server 22.04.1 LTS 64-bit server OS for arm64 architectures`
  
  - In the settings of Rasberry Pi Imager (:gear: bottom right) 
  
    - :ballot_box_with_check: `Enable SSH`
    	
      - write password on the board in paleo for others to use
      
- On laptop...
	
  - There should be tutorials on how to do this for your device
  
    - Just make sure you use `Ubuntu Focal Fossa (20.04 LTS - Desktop image)` otherwise ROS2 won't work
    
      - If you need help on macbook, talk to Max
      
      - If you need help on windows, talk to Jasper or Camaron R

- If this is your first time using Ubuntu:
	
  - Follow [this tutorial](http://www.ee.surrey.ac.uk/Teaching/Unix/)
  
## Setting up ROS2

- Always use Debian packages for ROS 2 Foxy Fitzroy

  - Installation guide can be found [here](https://docs.ros.org/en/foxy/Installation/Ubuntu-Install-Debians.html)
  
- :warning: **Important** :warning:

  - At the `Install ROS 2 packages` section
  
  - Make sure to do the `Desktop Install`
  
    - IGNORE the command under `ROS-Base Install (Bare Bones)`

## Make sure ROS2 Works Correctly
      
- Check Distro

		printenv ROS_DISTRO

  - should return `foxy`

- Install `colcon`

		sudo apt install python3-colcon-common-extensions
	
- Install package compiler for C++ files (only used in custom `.srv` file creation)

		sudo apt install build-essential
	
- Install package compiler for Python

		sudo apt install python3-pip 
		sudo apt install python3-sphinx python3-pip 
		sudo -H pip3 install sphinx_autodoc_typehints 
		pip3 install --upgrade colcon-common-extensions --upgrade-strategy=eager
  
- Source shell into startup script

		echo "source /opt/ros/foxy/setup.bash" >> ~/.bashrc
	
  - This eliminates the need to source the shell everytime you start up the terminal.

## Recomended tutorials

- [ROS2 Foxy Tutorials](https://docs.ros.org/en/foxy/Tutorials.html)

- Beginner: CLI tools
  - Configuring environment
  - Using `turtlesim` and `rqt`
  - Understanding nodes
  - Understanding topics
  - Understanding services
  - Understanding parameters

- Beginner: Client libraries
  - Using `colcon` to build packages
  - Creating a workspace
  - Creating a package
  - Writing a simple publisher and subscriber (Python)
  - Writing a simple service and client (Python)






# custom msg and srv files

- create package for custom .msg and .srv files

  - navigate to src in workspace

    - create package

			ros2 pkg create --build-type ament_cmake tutorial_interfaces

      - *cannot generate .msg or .srv file in a python package in ROS2 Foxy. we csan make the custom interface in a CMake package, then use it in a python node.

	

	
       - seperate directories for each kind of package

			mkdir msg

			mkdir srv

## srv definition

- in the srv folder make .srv file with a request and response structure

  - create AddThreeInts.srv

		add three 64bit integers (request)
		add `---`
		add one 64 bit sum integer (resposne)

## convert to language specific code

- navigate to CMakeLists.txt in tutorial_interfaces

  - edit CMakeLists.txt

		find_package(rosidl_default_generators REQUIRED)

		rosidl_generate_interfaces(${PROJECT_NAME}
  			"srv/GetDistance.srv"
		)

## add dependencies to package.xml
	
	<build_depend>rosidl_default_generators</build_depend>

	<exec_depend>rosidl_default_runtime</exec_depend>

	<member_of_group>rosidl_interface_packages</member_of_group>

## BUILD PACKAGE

- Navigate to temp_workspace

		colcon build --packages-select test_interfaces1


## Confirm srv creation

	. install/setup.bash

	ros2 interface show test_interfaces1/srv/GetDistance


## change import call in service and client main code

- from tutorial_interfaces.srv import AddThreeInts  

  - change package.xml

		<exec_depend>tutorial_interfaces</exec_depend>

## build service and client package

- colcon build --packages-select py_srvcli











# service / client


## Create service package

- Navigate to `src` in `temp_workspace`

			cd temp_workspace/src

  - create service package `service`

			ros2 pkg create --build-type ament_python service

  - create source file for service package (`main.py`)

			touch service/service/main.py






## Begin writing code for `service` package:

- navigate to temp_workspace/src/service/service/main.py in vscode (`code . `)

  - import .srv file

  - import neccessary packages

    - clreate serviceNode class

      - define constructor

        - define service node, three arguments

          - which type of message (found in .srv file)

            - name of request message

	    - callback

	- define service callback

	  - define process to be done to request variables

	  - use ros2 logger to print request

	  - return response

      - create main to be called from terminal

        - initialize ndoe

        - execute node

	- create shutdown

	
## Add entry point (So we can use `ros2 run` to execute the listener)

- navigate to `temp_workspace/src/service/setup.py`

- change `install_requires=['setuptools']` to
  
      install_requires=['setuptools','rclpy'],

- Look for the `entry_points` line 

  - inside the `={ ... }` look for `'console_scripts':`

    - inside the `[ ... ]` add:

      		'service = service.main:main',

      - first is our executable name (service)

      - then we assign this to our package name (service)

      - we use a dot to our source file name (main)

      - and finaly the method name inside our source file (main)

## add client in service oackage *LOOK INTO THIS*

## add dependicies in py

## run rosdep in root of workspace
	
	rosdep install -i --from-path src --rosdistro foxy -y

## build service package (since it has both service and clients node, this may change)

	colcon build --packages-select service

## run
	
- source

		. install/setup.bash

		ros2 run service service











# Connect Pi to WiFi Using a Computer Running Ubuntu
- Needs:
  
  - Pi
  
  - Ethernet / Adapter
  
  - WiFi Connection on a Computer Running Ubuntu

## Connect Computer to WiFi

- For `Student` WiFi at Saddleback Campus

  - Security: `WPA & WPA2 Enterprise`
  
  - Authentication: `Protected EAP (PEAP)`
  
  - :ballot_box_with_check: `No CA certificate is required`
  
  - PEAP version: `Automatic`
  
  - Inner authentication: `MSCHAPv2`
  
  - Username/Password: Your email/password

## Connect Pi and Computer to eachother via Internet

- In the settings for your ethernet connection (:gear:) go to `IPv4` tab

  - Change `IPv4 method` to `Shared to other computers`
  
## Network Knowledge

- Internet sharing via PC to router WAN port. (So far only successful on Windows)
  - Connect ethernet from WAN to PC.
  - In PC network settings, make WiFi adapter share to ethernet.
  - Connect to router with another device (WiFi or ethernet) to access routerlogin.net interface.
  - On router, go to Advanced > Setup > Internet Setup > point Default Gateway to ethernet adapter IP address of PC. > Apply
- Connect Pi to WiFi
  - https://arstech.net/raspberry-pi-4-ubuntu-wifi/
  
## Commands in Terminal

- Show entries in the Adresss Resolution Protocol

		arp -a
		
- Try and ping to the ip assigned to something named similar to `enx5c857e353ef4`

		ssh ubuntu@10.153.0.1 
		
  - (IP may be different in your case)
 
- Enter `yes` at the prompt

- Login for `Telecom` Raspberry Pi is `rpi_rover`

# ROS 2 Foxy Installation
- https://docs.ros.org/en/foxy/Installation/Ubuntu-Install-Debians.html
- https://docs.ros.org/en/foxy/Tutorials/Beginner-CLI-Tools/Configuring-ROS2-Environment.html#add-sourcing-to-your-shell-startup-script

# ROS 2 Foxy Subscriber and Publisher (Python)

So far, these notes go through creating a publisher. I left lots of comments in temp_workspace/src/talker/talker/main.py so you can hopefully understand what's going on. the tutorial also shows how to make a subscriber which I plan to do once I get this publisher working.

# Publisher

## Create workspace

- In home directory, make a workspace: 

		mkdir temp_workspace	

- Enter workspace: 

		cd temp_workspace

- Create a `src` folder: 

		mkdir src

- Enter `src` folder: 

		cd src


## Create package

- while in src, create a pkg. in this example we will create 'talker'

		ros2 pkg create --build-type ament_python talker 

- Create source file for our package 'talker': 

		touch talker/talker/main.py


## Begin writing code for `talker` package

- navigate to `temp_workspace/src/talker/talker/main.py in vscode` (`code .`)

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
  
- **To see this code, click [here](src/talker/talker/main.py)**


## Add dependencies

- navigate to `temp_workspace/src/talker/package.xml`

- above the `<test_depend>` lines, we will add one or more `<exec_depend>` lines

  - add what packages we imported in main.py

		<exec_depend>rclpy</exec_depend>
  		<exec_depend>std_msgs</exec_depend>
  

## Add entry point (So we can use `ros2 run` to execute the talker)

- navigate to `temp_workspace/src/talker/setup.py`

- change `install_requires=['setuptools']` to
  
  		install_requires=['setuptools','rclpy']

- Look for the `entry_points` line 

  - inside the `={ ... }` look for `'console_scripts':`

    - inside the `[ ... ]` add:

			'talker = talker.main:main',

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

- in terminal, navigate to the workspace directory (`temp_workspace`)

- source setup files: 

		. install/setup.bash

- run: 

		ros2 run talker talker

## Check if working

- open new terminal window

- in terminal, navigate to the workspace directory ('temp_workspace')

- run: 

		ros2 topic list -t

  - `talker` should be in the topic list
 		
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



# Subscriber

## Create Subscriber Package

- Create/Enter preixisting workspace (`temp_workspace`)

- Enter `src` Directory

- Create subscriber package `listener`

    	ros2 pkg create --build-type ament_python listener

- create source file for listener package (`main.py`)

    	touch listener/listener/main.py


## Begin writing code for `listener` package

- open `src/listener/listener/main.py` in vscode (`code .`)

- first import neccessary packages

- Next create a class for the node

- only one definition in the class:

  - contructor

    - define subscriber

    - create subscriber

      - four parameters:

        - which type of message we are going to listen for

        - name of topic to listen for

        - callback

        - queue size (how many messages in queue before the program stops) 

  - listener callback function
      
    - use `ros2 logger` to print data recieved

- Create main function to call from the terminal

  - initialize node
    
  - execute node
    
  - create shutdown
  
- **To see this code, click [here](src/listener/listener/main.py)**


## Add dependencies

- navigate to `temp_workspace/src/listener/package.xml`

- above the `<test_depend>` lines, we will add one or more `<exec_depend>` lines

  - add what packages we imported in main.py

    	<exec_depend>rclpy</exec_depend>
    	<exec_depend>std_msgs</exec_depend>
  

## Add entry point (So we can use `ros2 run` to execute the listener)

- navigate to `temp_workspace/src/listener/setup.py`

- change `install_requires=['setuptools']` to
  
      install_requires=['setuptools','rclpy']

- Look for the `entry_points` line 

  - inside the `={ ... }` look for `'console_scripts':`

    - inside the `[ ... ]` add:

      		'listener = listener.main:main',

      - first is our executable name (listener)

      - then we assign this to our package name (listener)

      - we use a dot to our source file name (main)

      - and finaly the method name inside our source file (main)


## remove any previous builds

- Navigate to workspace (`temp_workspace`)

- run:

    	rm -r build/ install/ log/

	
## Build the listener package

- to build both the publisher and subscriber, run:

   		 colcon build


## Run the listener package

- in terminal, navigate to the workspace directory (`temp_workspace`)

- source setup files: 

    	. install/setup.bash

- run: 

    	ros2 run listener listener

## Check if working

- open new terminal window
  
  - make sure terminal window where we ran `ros2 run listener listener` is open

- in terminal, navigate to the workspace directory (`temp_workspace`)

- run: 

    	ros2 topic list -t

  - `talker` should be in the topic list
    
    `/talker [std_msgs/msg/String]`

- Test to see if listener can listen to the talker (we will use `hi\`):

    	ros2 topic pub /talker std_msgs/msg/String data:\ \'hi\'\

  - the talker should begin to publish data:
  
    ```
    publisher: beginning loop
    publishing #1: std_msgs.msg.String(data='hi')

    publishing #2: std_msgs.msg.String(data='hi')

    ```

  - and, the listener in the other terminal window should recieve these messages:

    ```
    [INFO] [1660585164.002457080] [listener_node]: msg: hi
    [INFO] [1660585164.966729376] [listener_node]: msg: hi
    ```

- Additionally, we can run our original talker code.

  - in the window where we ran `ros2 topic pub /talker std_msgs/msg/String data:\ \'hi\'\`:

    - source setup files: 
 
      		. install/setup.bash

    - run: 

     	 	ros2 run talker 

  -Nothing will be returned in this window, but the window where the listener is running should recieve these messages:

    ```
    [INFO] [1660585499.320614789] [listener_node]: msg: Hello SCR! this is Max
    [INFO] [1660585500.319419237] [listener_node]: msg: Hello SCR! this is Max
    [INFO] [1660585501.319257032] [listener_node]: msg: Hello SCR! this is Max
    ```



### BASED ON [THIS TUTORIAL](https://youtu.be/Oz3LTRgRvtU)
