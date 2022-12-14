# custom msg and srv files

- create package for custom .msg and .srv files

  - navigate to src in workspace

    - create package

			ros2 pkg create --build-type ament_cmake test_interfaces1

      - cannot generate `.msg` or `.srv` file in a python package in ROS2 Foxy. we can make the custom interface in a `CMake` package, then use it in a python node.

	

	
       - seperate directories for each kind of package
	
				mkdir msg

				mkdir srv

## srv definition

- in the srv folder make .srv file with a request and response structure

  - create GetDistance.srv

		#Request:
		int64 a
		int64 b
		---
		#Response
		int64 distance

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












# service / client


## Create service package

- Navigate to `src` in `temp_workspace`

			cd temp_workspace/src

  - create service package `service`

			ros2 pkg create --build-type ament_python service

  - create source file for service package (`main.py`)

			touch service/service/main.py






## Begin writing code for `service`:

- navigate to temp_workspace/src/service/service/main.py in vscode (`code . `)

  - import .srv file

  - import neccessary packages

  - create serviceNode class

    - define constructor

      - define service node
      
      - create the  service, three arguments

        - which type of message (found in .srv file)

        - name of request message

        - callback

    - define service callback

      - define process to be done to request variables

      - use ros2 logger to print request

      - return response

  - create main to be called from terminal

    - initialize node

    - execute node
    
    - create shutdown

## Create main file for client

- create file in same directory as `main.py` (`temp_workspace/src/service/service/`)

  - I named it `clientmain.py`

## Begin writing code for `client`:

- import sys

- import .srv file

- import neccessary packages

- create clientNode class

  - define constructor

    - define a client node

    - create client (two arguments)

      - which type of request message (found in .srv file.)
        
      - name of request message 
    
    - while loop

      - use ROS2 logger to print "waiting for service"

  - define a request

    - *to be researched....*

- create main to be called from terminal

  - initialize node

  - Read in two numbers from client run call

  - use ros2 logger to print response
    
  - create shutdown
	
## Add entry point (So we can use `ros2 run` to execute the service/client)

- navigate to `temp_workspace/src/service/setup.py`

- change `install_requires=['setuptools']` to
  
      install_requires=['setuptools','rclpy', 'GetDistance.srv'],

- Look for the `entry_points` line 

  - inside the `={ ... }` look for `'console_scripts':`

    - inside the `[ ... ]` add:

      		 'service = service.main:main',
			 'client = service.clientmain:main',

      - first is our executable name (service)

      - then we assign this to our package name (service)

      - we use a dot to our source file name (main)

      - and finaly the method name inside our source file (main)

        - same for client

## add potential dependency to `package.xml`

	 <exec_depend>rclpy</exec_depend>
	 <exec_depend>test_interfaces1</exec_depend>

## run rosdep in root of workspace
	
	rosdep install -i --from-path src --rosdistro foxy -y

## build service package 

	colcon build --packages-select service

## run
	
- source

		source /opt/ros/foxy/setup.bash
		
		. install/setup.bash

		ros2 run service service

- new window
		source /opt/ros/foxy/setup.bash

		. install/setup.bash

		ros2 run service client 10 10






