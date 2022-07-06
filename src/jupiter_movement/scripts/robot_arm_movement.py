#!/usr/bin/env python
# license removed for brevity
import rospy
from geometry_msgs.msg import Twist
from std_msgs.msg import String
from std_msgs.msg import Float64

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
    pub_hand = rospy.Publisher('elbow_controller/command', Float64, queue_size=5)

    print("Start")

    # warm up
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


if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass