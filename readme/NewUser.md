# New People Start Here

## Setting up ubuntu

- On Raspberry Pi...

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
	
  - Follow [this tutorial](http://www.ee.surrey.ac.uk/Teaching/Unix/) to learn frequently used commands
  
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




