// Generated by gencpp from file open_manipulator_msgs/SetDrawingTrajectoryResponse.msg
// DO NOT EDIT!


#ifndef OPEN_MANIPULATOR_MSGS_MESSAGE_SETDRAWINGTRAJECTORYRESPONSE_H
#define OPEN_MANIPULATOR_MSGS_MESSAGE_SETDRAWINGTRAJECTORYRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace open_manipulator_msgs
{
template <class ContainerAllocator>
struct SetDrawingTrajectoryResponse_
{
  typedef SetDrawingTrajectoryResponse_<ContainerAllocator> Type;

  SetDrawingTrajectoryResponse_()
    : is_planned(false)  {
    }
  SetDrawingTrajectoryResponse_(const ContainerAllocator& _alloc)
    : is_planned(false)  {
  (void)_alloc;
    }



   typedef uint8_t _is_planned_type;
  _is_planned_type is_planned;





  typedef boost::shared_ptr< ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetDrawingTrajectoryResponse_

typedef ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<std::allocator<void> > SetDrawingTrajectoryResponse;

typedef boost::shared_ptr< ::open_manipulator_msgs::SetDrawingTrajectoryResponse > SetDrawingTrajectoryResponsePtr;
typedef boost::shared_ptr< ::open_manipulator_msgs::SetDrawingTrajectoryResponse const> SetDrawingTrajectoryResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace open_manipulator_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'open_manipulator_msgs': ['/home/siop/docker_share/catkin_ws/src/open_manipulator_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2638cc2443b1469b0e9e152083d7128d";
  }

  static const char* value(const ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2638cc2443b1469bULL;
  static const uint64_t static_value2 = 0x0e9e152083d7128dULL;
};

template<class ContainerAllocator>
struct DataType< ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "open_manipulator_msgs/SetDrawingTrajectoryResponse";
  }

  static const char* value(const ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool is_planned\n\
\n\
";
  }

  static const char* value(const ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.is_planned);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetDrawingTrajectoryResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::open_manipulator_msgs::SetDrawingTrajectoryResponse_<ContainerAllocator>& v)
  {
    s << indent << "is_planned: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_planned);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPEN_MANIPULATOR_MSGS_MESSAGE_SETDRAWINGTRAJECTORYRESPONSE_H
