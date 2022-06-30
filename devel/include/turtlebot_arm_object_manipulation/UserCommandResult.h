// Generated by gencpp from file turtlebot_arm_object_manipulation/UserCommandResult.msg
// DO NOT EDIT!


#ifndef TURTLEBOT_ARM_OBJECT_MANIPULATION_MESSAGE_USERCOMMANDRESULT_H
#define TURTLEBOT_ARM_OBJECT_MANIPULATION_MESSAGE_USERCOMMANDRESULT_H


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
struct UserCommandResult_
{
  typedef UserCommandResult_<ContainerAllocator> Type;

  UserCommandResult_()
    : outcome()  {
    }
  UserCommandResult_(const ContainerAllocator& _alloc)
    : outcome(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _outcome_type;
  _outcome_type outcome;





  typedef boost::shared_ptr< ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator> const> ConstPtr;

}; // struct UserCommandResult_

typedef ::turtlebot_arm_object_manipulation::UserCommandResult_<std::allocator<void> > UserCommandResult;

typedef boost::shared_ptr< ::turtlebot_arm_object_manipulation::UserCommandResult > UserCommandResultPtr;
typedef boost::shared_ptr< ::turtlebot_arm_object_manipulation::UserCommandResult const> UserCommandResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator1> & lhs, const ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator2> & rhs)
{
  return lhs.outcome == rhs.outcome;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator1> & lhs, const ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace turtlebot_arm_object_manipulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2b95071cca675b3d5b80ad0bdaf20389";
  }

  static const char* value(const ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2b95071cca675b3dULL;
  static const uint64_t static_value2 = 0x5b80ad0bdaf20389ULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot_arm_object_manipulation/UserCommandResult";
  }

  static const char* value(const ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result\n"
"string outcome\n"
;
  }

  static const char* value(const ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.outcome);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UserCommandResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlebot_arm_object_manipulation::UserCommandResult_<ContainerAllocator>& v)
  {
    s << indent << "outcome: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.outcome);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT_ARM_OBJECT_MANIPULATION_MESSAGE_USERCOMMANDRESULT_H
