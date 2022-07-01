#!/usr/bin/env python
import rospy
from std_msgs.msg import String
from geometry_msgs.msg import Twist

pub = None

def rotate_left(pub, duration=2, val=0.5):
    for i in range(duration):
        twist = Twist()
        twist.linear.x = 0; twist.linear.y = 0; twist.linear.z = 0
        twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = val
        pub.publish(twist)
        rospy.sleep(0.5)

def rotate_right(pub, duration=2, val=-0.5):
    for i in range(duration):
        twist = Twist()
        twist.linear.x = 0; twist.linear.y = 0; twist.linear.z = 0
        twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = val
        pub.publish(twist)
        rospy.sleep(0.5)

def go_forward(pub, duration=1, val=0.1):
    for i in range(duration):
        twist = Twist()
        twist.linear.x = val; twist.linear.y = 0; twist.linear.z = 0
        twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = 0
        pub.publish(twist)
        rospy.sleep(0.5)

def go_backward(pub, duration=1, val=-0.1):
    for i in range(duration):
        twist = Twist()
        twist.linear.x = val; twist.linear.y = 0; twist.linear.z = 0
        twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = 0
        pub.publish(twist)
        rospy.sleep(0.5)

def stop(pub, duration=2):
    for i in range(duration):
        twist = Twist()
        twist.linear.x = 0; twist.linear.y = 0; twist.linear.z = 0
        twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = 0
        pub.publish(twist)
        rospy.sleep(0.5)

def callback(data):
    global pub
    rospy.loginfo(rospy.get_caller_id() + "\t%s", data.data)
    voice_cmd = data.data.strip()
    if voice_cmd == "stop":
        stop(pub)
    elif voice_cmd == "move":
        go_forward(pub)
    elif voice_cmd == "back":
        go_backward(pub)
    elif voice_cmd == "left":
        rotate_left(pub)
    elif voice_cmd == "right":
        rotate_right(pub)
    # stop(pub)

def listener():
    global pub
    rospy.init_node('voice_cmd_listener')
    pub = rospy.Publisher('cmd_vel_mux/input/teleop', Twist, queue_size=5)
    rospy.Subscriber("kws_data", String, callback)
    print("Start")

    # spin() simply keeps python from exiting until this node is stopped
    rospy.spin()

if __name__ == '__main__':
    listener()