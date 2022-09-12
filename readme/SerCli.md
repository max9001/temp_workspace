#Before we can start writing the Service and Client, we need to define a custom .srv file

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





