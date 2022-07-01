#!/usr/bin/env python
# license removed for brevity
import rospy
from geometry_msgs.msg import Twist
from std_msgs.msg import String
from std_msgs.msg import Float64

def rotate_left(pub, duration=6, val=0.86):
    print("Rotate left")
    for i in range(duration):
        twist = Twist()
        twist.linear.x = 0; twist.linear.y = 0; twist.linear.z = 0
        twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = val
        pub.publish(twist)
        rospy.sleep(0.5)

def rotate_right(pub, duration=6, val=-0.86):
    print("Rotate right")
    for i in range(duration):
        twist = Twist()
        twist.linear.x = 0; twist.linear.y = 0; twist.linear.z = 0
        twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = val
        pub.publish(twist)
        rospy.sleep(0.5)

def go_forward(pub, duration=5, val=0.3):
    print("Go forward")
    for i in range(duration):
        twist = Twist()
        twist.linear.x = val; twist.linear.y = 0; twist.linear.z = 0
        twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = 0
        pub.publish(twist)
        rospy.sleep(0.5)

def go_backward(pub, duration=5, val=-0.3):
    print("Go backward")
    for i in range(duration):
        twist = Twist()
        twist.linear.x = val; twist.linear.y = 0; twist.linear.z = 0
        twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = 0
        pub.publish(twist)
        rospy.sleep(0.5)

def stop(pub, duration=2):
    for i in range(duration):
        print("Stop")
        twist = Twist()
        twist.linear.x = 0; twist.linear.y = 0; twist.linear.z = 0
        twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = 0
        pub.publish(twist)
        rospy.sleep(0.5)


def bend_down(pub, duration=4, val=0.9):
    print("bend down")
    for i in range(duration):
        pub.publish(val)
        rospy.sleep(0.1)

def bend_up(pub, duration=8, val=0.7):
    print("bend up")
    for i in range(duration):
        pub.publish(val)
        rospy.sleep(0.1)

def talker():
    rospy.init_node('jupiter_movement', anonymous=True)
    # pub = rospy.Publisher('cmd_vel_mux/input/teleop', Twist, queue_size=5)
    pub_hand = rospy.Publisher('elbow_controller/command', Float64, queue_size=5)
    rate = rospy.Rate(10) # 10hz

    print("Start")

    # for i in range(2):
    #     stop(pub, duration=1)
    #     rospy.sleep(0.5)
    #     print(i)
    for i in range(2):
        bend_up(pub_hand, val=0)
        rospy.sleep(0.5)
        print(i)
    
    print("Go")
    bend_up(pub_hand)
    bend_down(pub_hand)
    bend_up(pub_hand)
    bend_down(pub_hand)
    bend_up(pub_hand)
    bend_down(pub_hand)
    bend_up(pub_hand)
    bend_down(pub_hand)
    bend_up(pub_hand)
    bend_up(pub_hand, val=0)

    # go_forward(pub)
    # stop(pub)
    # go_backward(pub)
    # stop(pub)
    # rotate_left(pub)
    # stop(pub)
    # go_forward(pub)
    # stop(pub)
    # go_backward(pub)
    # stop(pub)
    # rotate_right(pub)

    # go_forward(pub)
    # stop(pub)
    # go_backward(pub)
    # stop(pub)
    # rotate_left(pub)
    # stop(pub)
    # go_forward(pub)
    # stop(pub)
    # go_backward(pub)
    # stop(pub)
    # rotate_left(pub)
    # stop(pub)
    # go_forward(pub)
    # stop(pub)
    # go_backward(pub)
    # stop(pub)
    # rotate_left(pub)
    # stop(pub)
    # go_forward(pub)
    # stop(pub)
    # go_backward(pub)
    # stop(pub)
    # rotate_left(pub)
    # stop(pub)

    # check rotation
    # rotate_left(pub)
    # stop(pub)
    # rotate_left(pub)
    # stop(pub)
    # rotate_left(pub)
    # stop(pub)
    # rotate_left(pub)
    # stop(pub)

    # stop(pub, duration=2)

    # while not rospy.is_shutdown():
        # hello_str = "hello world %s" % rospy.get_time()
        # rospy.loginfo(hello_str)
        # pub.publish(hello_str)
        # stop(pub, duration=1)
        # rate.sleep()

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass