// Generated by gencpp from file turtlebot3_msgs/TakePanoramaRequest.msg
// DO NOT EDIT!


#ifndef TURTLEBOT3_MSGS_MESSAGE_TAKEPANORAMAREQUEST_H
#define TURTLEBOT3_MSGS_MESSAGE_TAKEPANORAMAREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlebot3_msgs
{
template <class ContainerAllocator>
struct TakePanoramaRequest_
{
  typedef TakePanoramaRequest_<ContainerAllocator> Type;

  TakePanoramaRequest_()
    : mode(0)
    , pano_angle(0.0)
    , snap_interval(0.0)
    , rot_vel(0.0)  {
    }
  TakePanoramaRequest_(const ContainerAllocator& _alloc)
    : mode(0)
    , pano_angle(0.0)
    , snap_interval(0.0)
    , rot_vel(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _mode_type;
  _mode_type mode;

   typedef float _pano_angle_type;
  _pano_angle_type pano_angle;

   typedef float _snap_interval_type;
  _snap_interval_type snap_interval;

   typedef float _rot_vel_type;
  _rot_vel_type rot_vel;



  enum {
    SNAPANDROTATE = 0u,
    CONTINUOUS = 1u,
    STOP = 2u,
    STARTED = 0u,
    IN_PROGRESS = 1u,
    STOPPED = 2u,
  };


  typedef boost::shared_ptr< ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TakePanoramaRequest_

typedef ::turtlebot3_msgs::TakePanoramaRequest_<std::allocator<void> > TakePanoramaRequest;

typedef boost::shared_ptr< ::turtlebot3_msgs::TakePanoramaRequest > TakePanoramaRequestPtr;
typedef boost::shared_ptr< ::turtlebot3_msgs::TakePanoramaRequest const> TakePanoramaRequestConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace turtlebot3_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'turtlebot3_msgs': ['/home/itolab/catkin_ws/src/turtlebot3_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ee720ee47c4798b7447cb7a5755b0062";
  }

  static const char* value(const ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xee720ee47c4798b7ULL;
  static const uint64_t static_value2 = 0x447cb7a5755b0062ULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot3_msgs/TakePanoramaRequest";
  }

  static const char* value(const ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
uint8 SNAPANDROTATE=0\n\
uint8 CONTINUOUS=1\n\
uint8 STOP=2\n\
\n\
uint8 STARTED=0\n\
uint8 IN_PROGRESS=1\n\
uint8 STOPPED=2\n\
\n\
\n\
\n\
\n\
uint8 mode\n\
float32 pano_angle\n\
float32 snap_interval\n\
float32 rot_vel\n\
";
  }

  static const char* value(const ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode);
      stream.next(m.pano_angle);
      stream.next(m.snap_interval);
      stream.next(m.rot_vel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TakePanoramaRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlebot3_msgs::TakePanoramaRequest_<ContainerAllocator>& v)
  {
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "pano_angle: ";
    Printer<float>::stream(s, indent + "  ", v.pano_angle);
    s << indent << "snap_interval: ";
    Printer<float>::stream(s, indent + "  ", v.snap_interval);
    s << indent << "rot_vel: ";
    Printer<float>::stream(s, indent + "  ", v.rot_vel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT3_MSGS_MESSAGE_TAKEPANORAMAREQUEST_H