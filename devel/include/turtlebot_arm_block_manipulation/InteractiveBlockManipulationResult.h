// Generated by gencpp from file turtlebot_arm_block_manipulation/InteractiveBlockManipulationResult.msg
// DO NOT EDIT!


#ifndef TURTLEBOT_ARM_BLOCK_MANIPULATION_MESSAGE_INTERACTIVEBLOCKMANIPULATIONRESULT_H
#define TURTLEBOT_ARM_BLOCK_MANIPULATION_MESSAGE_INTERACTIVEBLOCKMANIPULATIONRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Pose.h>

namespace turtlebot_arm_block_manipulation
{
template <class ContainerAllocator>
struct InteractiveBlockManipulationResult_
{
  typedef InteractiveBlockManipulationResult_<ContainerAllocator> Type;

  InteractiveBlockManipulationResult_()
    : pickup_pose()
    , place_pose()  {
    }
  InteractiveBlockManipulationResult_(const ContainerAllocator& _alloc)
    : pickup_pose(_alloc)
    , place_pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pickup_pose_type;
  _pickup_pose_type pickup_pose;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _place_pose_type;
  _place_pose_type place_pose;





  typedef boost::shared_ptr< ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator> const> ConstPtr;

}; // struct InteractiveBlockManipulationResult_

typedef ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<std::allocator<void> > InteractiveBlockManipulationResult;

typedef boost::shared_ptr< ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult > InteractiveBlockManipulationResultPtr;
typedef boost::shared_ptr< ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult const> InteractiveBlockManipulationResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator1> & lhs, const ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator2> & rhs)
{
  return lhs.pickup_pose == rhs.pickup_pose &&
    lhs.place_pose == rhs.place_pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator1> & lhs, const ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace turtlebot_arm_block_manipulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3fec3f60e60c18ca7b67a7513b211e95";
  }

  static const char* value(const ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3fec3f60e60c18caULL;
  static const uint64_t static_value2 = 0x7b67a7513b211e95ULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot_arm_block_manipulation/InteractiveBlockManipulationResult";
  }

  static const char* value(const ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result definition\n"
"geometry_msgs/Pose pickup_pose\n"
"geometry_msgs/Pose place_pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pickup_pose);
      stream.next(m.place_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InteractiveBlockManipulationResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlebot_arm_block_manipulation::InteractiveBlockManipulationResult_<ContainerAllocator>& v)
  {
    s << indent << "pickup_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pickup_pose);
    s << indent << "place_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.place_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT_ARM_BLOCK_MANIPULATION_MESSAGE_INTERACTIVEBLOCKMANIPULATIONRESULT_H
