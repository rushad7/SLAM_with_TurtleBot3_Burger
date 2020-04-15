// Generated by gencpp from file cartographer_ros_msgs/HistogramBucket.msg
// DO NOT EDIT!


#ifndef CARTOGRAPHER_ROS_MSGS_MESSAGE_HISTOGRAMBUCKET_H
#define CARTOGRAPHER_ROS_MSGS_MESSAGE_HISTOGRAMBUCKET_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cartographer_ros_msgs
{
template <class ContainerAllocator>
struct HistogramBucket_
{
  typedef HistogramBucket_<ContainerAllocator> Type;

  HistogramBucket_()
    : bucket_boundary(0.0)
    , count(0.0)  {
    }
  HistogramBucket_(const ContainerAllocator& _alloc)
    : bucket_boundary(0.0)
    , count(0.0)  {
  (void)_alloc;
    }



   typedef double _bucket_boundary_type;
  _bucket_boundary_type bucket_boundary;

   typedef double _count_type;
  _count_type count;





  typedef boost::shared_ptr< ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator> const> ConstPtr;

}; // struct HistogramBucket_

typedef ::cartographer_ros_msgs::HistogramBucket_<std::allocator<void> > HistogramBucket;

typedef boost::shared_ptr< ::cartographer_ros_msgs::HistogramBucket > HistogramBucketPtr;
typedef boost::shared_ptr< ::cartographer_ros_msgs::HistogramBucket const> HistogramBucketConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cartographer_ros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'cartographer_ros_msgs': ['/home/rushad/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b579df35b32758cf09f65ae223aea0ad";
  }

  static const char* value(const ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb579df35b32758cfULL;
  static const uint64_t static_value2 = 0x09f65ae223aea0adULL;
};

template<class ContainerAllocator>
struct DataType< ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cartographer_ros_msgs/HistogramBucket";
  }

  static const char* value(const ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# 2018 The Cartographer Authors\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#      http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"# A histogram bucket counts values x for which:\n"
"#   previous_boundary < x <= bucket_boundary\n"
"# holds.\n"
"float64 bucket_boundary\n"
"float64 count\n"
;
  }

  static const char* value(const ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.bucket_boundary);
      stream.next(m.count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HistogramBucket_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cartographer_ros_msgs::HistogramBucket_<ContainerAllocator>& v)
  {
    s << indent << "bucket_boundary: ";
    Printer<double>::stream(s, indent + "  ", v.bucket_boundary);
    s << indent << "count: ";
    Printer<double>::stream(s, indent + "  ", v.count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARTOGRAPHER_ROS_MSGS_MESSAGE_HISTOGRAMBUCKET_H
