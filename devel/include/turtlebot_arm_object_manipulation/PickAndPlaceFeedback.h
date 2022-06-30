// Generated by gencpp from file turtlebot_arm_object_manipulation/PickAndPlaceFeedback.msg
// DO NOT EDIT!


#ifndef TURTLEBOT_ARM_OBJECT_MANIPULATION_MESSAGE_PICKANDPLACEFEEDBACK_H
#define TURTLEBOT_ARM_OBJECT_MANIPULATION_MESSAGE_PICKANDPLACEFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlebot_arm_object_manipulation
{
template <class ContainerAllocator>
struct PickAndPlaceFeedback_
{
  typedef PickAndPlaceFeedback_<ContainerAllocator> Type;

  PickAndPlaceFeedback_()
    {
    }
  PickAndPlaceFeedback_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct PickAndPlaceFeedback_

typedef ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<std::allocator<void> > PickAndPlaceFeedback;

typedef boost::shared_ptr< ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback > PickAndPlaceFeedbackPtr;
typedef boost::shared_ptr< ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback const> PickAndPlaceFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace turtlebot_arm_object_manipulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot_arm_object_manipulation/PickAndPlaceFeedback";
  }

  static const char* value(const ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"# feedback\n"
"\n"
;
  }

  static const char* value(const ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PickAndPlaceFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::turtlebot_arm_object_manipulation::PickAndPlaceFeedback_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT_ARM_OBJECT_MANIPULATION_MESSAGE_PICKANDPLACEFEEDBACK_H