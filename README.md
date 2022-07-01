# ROS
## Commands
```bash
# only for first time
rosrun kobuki_ftdi create_udev_rules

# check kobuki connection
rosrun kobuki_driver version_info

# install all dep in workspace
rosdep install --from-paths src --ignore-src -r -y

# turtlebot startup
roslaunch turtlebot_bringup minimal.launch

# turtlebot control
roslaunch turtlebot_teleop keyboard_teleop.launch
```

## Workspace setting
```bash
export ROS_PYTHON_VERSION=3
catkin_make -DPYTHON_EXECUTABLE=/usr/bin/python3

source devel/setup.bash
echo $ROS_PACKAGE_PATH

export ROS_PACKAGE_PATH="/home/jackmin/a/ROS-Jupiter-01/src:/home/jackmin/kobuki/src:/opt/ros/melodic/share"
```

## Turtlebot
```bash
sudo apt-get install ros-melodic-turtlebot ros-melodic-turtlebot-apps ros-melodic-turtlebot-interactions ros-melodic-turtlebot-simulator ros-melodic-kobuki-ftdi ros-melodic-rocon-remocon ros-melodic-rocon-qt-library ros-melodic-ar-track-alvar-msgs
```

## Arm
```
roslaunch jupiterobot_arm_bringup joints_bringup.launch 


rostopic pub -1 /elbow_controller/command std_msgs/Float64 -- 0
rostopic pub -1 /elbow_controller/command std_msgs/Float64 -- 1
rostopic pub -1 /hand_controller/command std_msgs/Float64 -- 0

```