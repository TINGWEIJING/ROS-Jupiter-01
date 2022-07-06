# ROS Jupiter 01
## Build
```bash
source devel/setup.bash

# install all dependencies in this workspace
rosdep install --from-paths src --ignore-src -r -y

# build executable python file
catkin_make

source devel/setup.bash
```

## Quick Start for Robot Movement
```bash
# turtlebot startup (run in seperate terminal)
roslaunch turtlebot_bringup minimal.launch

# run script (run in seperate terminal)
source devel/setup.bash
rosrun jupiter_movement robot_movement.py
```

## Quick Start for Robot Arm Movement
```bash
# Jupiter Robot Arm startup (run in seperate terminal)
roslaunch jupiterobot_arm_bringup joints_bringup.launch 

# run script (run in seperate terminal)
source devel/setup.bash
rosrun jupiter_movement robot_arm_movement.py
```


## Quick Start for Voice Control Robot Movement
```bash
# turtlebot startup (run in seperate terminal)
roslaunch turtlebot_bringup minimal.launch

# PocketSphinx Voice Recognition startup (run in seperate terminal)
roslaunch pocketsphinx kws.launch \
dict:=/home/mustar/catkin_ws/src/basic_function_packages/pocketsphinx/demo/voice_cmd.dic \
kws:=/home/mustar/catkin_ws/src/basic_function_packages/pocketsphinx/demo/voice_cmd.kwlist

# run script (run in seperate terminal)
source devel/setup.bash
rosrun jupiter_movement voice_control_movement.py 
```
