// Generated by gencpp from file open_manipulator_msgs/OpenManipulatorState.msg
// DO NOT EDIT!


#ifndef OPEN_MANIPULATOR_MSGS_MESSAGE_OPENMANIPULATORSTATE_H
#define OPEN_MANIPULATOR_MSGS_MESSAGE_OPENMANIPULATORSTATE_H


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
struct OpenManipulatorState_
{
  typedef OpenManipulatorState_<ContainerAllocator> Type;

  OpenManipulatorState_()
    : open_manipulator_moving_state()
    , open_manipulator_actuator_state()  {
    }
  OpenManipulatorState_(const ContainerAllocator& _alloc)
    : open_manipulator_moving_state(_alloc)
    , open_manipulator_actuator_state(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _open_manipulator_moving_state_type;
  _open_manipulator_moving_state_type open_manipulator_moving_state;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _open_manipulator_actuator_state_type;
  _open_manipulator_actuator_state_type open_manipulator_actuator_state;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  IS_MOVING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  STOPPED;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  ACTUATOR_ENABLED;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  ACTUATOR_DISABLED;

  typedef boost::shared_ptr< ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator> const> ConstPtr;

}; // struct OpenManipulatorState_

typedef ::open_manipulator_msgs::OpenManipulatorState_<std::allocator<void> > OpenManipulatorState;

typedef boost::shared_ptr< ::open_manipulator_msgs::OpenManipulatorState > OpenManipulatorStatePtr;
typedef boost::shared_ptr< ::open_manipulator_msgs::OpenManipulatorState const> OpenManipulatorStateConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      OpenManipulatorState_<ContainerAllocator>::IS_MOVING =
        
          "\"IS_MOVING\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      OpenManipulatorState_<ContainerAllocator>::STOPPED =
        
          "\"STOPPED\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      OpenManipulatorState_<ContainerAllocator>::ACTUATOR_ENABLED =
        
          "\"ACTUATOR_ENABLED\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      OpenManipulatorState_<ContainerAllocator>::ACTUATOR_DISABLED =
        
          "\"ACTUATOR_DISABLED\""
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace open_manipulator_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'open_manipulator_msgs': ['/home/siop/docker_share/catkin_ws/src/open_manipulator_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "35c95327a0dcb52791892bac52df33e8";
  }

  static const char* value(const ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x35c95327a0dcb527ULL;
  static const uint64_t static_value2 = 0x91892bac52df33e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "open_manipulator_msgs/OpenManipulatorState";
  }

  static const char* value(const ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "########################################\n\
# CONSTANTS\n\
########################################\n\
string IS_MOVING = \"IS_MOVING\"\n\
string STOPPED = \"STOPPED\"\n\
string ACTUATOR_ENABLED = \"ACTUATOR_ENABLED\"\n\
string ACTUATOR_DISABLED = \"ACTUATOR_DISABLED\"\n\
\n\
########################################\n\
# Messages\n\
########################################\n\
string open_manipulator_moving_state\n\
string open_manipulator_actuator_state\n\
";
  }

  static const char* value(const ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.open_manipulator_moving_state);
      stream.next(m.open_manipulator_actuator_state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OpenManipulatorState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::open_manipulator_msgs::OpenManipulatorState_<ContainerAllocator>& v)
  {
    s << indent << "open_manipulator_moving_state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.open_manipulator_moving_state);
    s << indent << "open_manipulator_actuator_state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.open_manipulator_actuator_state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPEN_MANIPULATOR_MSGS_MESSAGE_OPENMANIPULATORSTATE_H
