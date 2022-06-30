// Generated by gencpp from file turtlebot_arm_object_manipulation/ObjectDetectionResult.msg
// DO NOT EDIT!


#ifndef TURTLEBOT_ARM_OBJECT_MANIPULATION_MESSAGE_OBJECTDETECTIONRESULT_H
#define TURTLEBOT_ARM_OBJECT_MANIPULATION_MESSAGE_OBJECTDETECTIONRESULT_H


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
struct ObjectDetectionResult_
{
  typedef ObjectDetectionResult_<ContainerAllocator> Type;

  ObjectDetectionResult_()
    : obj_names()  {
    }
  ObjectDetectionResult_(const ContainerAllocator& _alloc)
    : obj_names(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _obj_names_type;
  _obj_names_type obj_names;





  typedef boost::shared_ptr< ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator> const> ConstPtr;

}; // struct ObjectDetectionResult_

typedef ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<std::allocator<void> > ObjectDetectionResult;

typedef boost::shared_ptr< ::turtlebot_arm_object_manipulation::ObjectDetectionResult > ObjectDetectionResultPtr;
typedef boost::shared_ptr< ::turtlebot_arm_object_manipulation::ObjectDetectionResult const> ObjectDetectionResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator1> & lhs, const ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator2> & rhs)
{
  return lhs.obj_names == rhs.obj_names;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator1> & lhs, const ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace turtlebot_arm_object_manipulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "02736298050f9335208931f532635983";
  }

  static const char* value(const ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x02736298050f9335ULL;
  static const uint64_t static_value2 = 0x208931f532635983ULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot_arm_object_manipulation/ObjectDetectionResult";
  }

  static const char* value(const ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"# result definition\n"
"\n"
"string[] obj_names\n"
"\n"
;
  }

  static const char* value(const ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.obj_names);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ObjectDetectionResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlebot_arm_object_manipulation::ObjectDetectionResult_<ContainerAllocator>& v)
  {
    s << indent << "obj_names[]" << std::endl;
    for (size_t i = 0; i < v.obj_names.size(); ++i)
    {
      s << indent << "  obj_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.obj_names[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT_ARM_OBJECT_MANIPULATION_MESSAGE_OBJECTDETECTIONRESULT_H
