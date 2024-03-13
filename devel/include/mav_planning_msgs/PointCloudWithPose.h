// Generated by gencpp from file mav_planning_msgs/PointCloudWithPose.msg
// DO NOT EDIT!


#ifndef MAV_PLANNING_MSGS_MESSAGE_POINTCLOUDWITHPOSE_H
#define MAV_PLANNING_MSGS_MESSAGE_POINTCLOUDWITHPOSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/TransformStamped.h>
#include <sensor_msgs/PointCloud2.h>

namespace mav_planning_msgs
{
template <class ContainerAllocator>
struct PointCloudWithPose_
{
  typedef PointCloudWithPose_<ContainerAllocator> Type;

  PointCloudWithPose_()
    : header()
    , sensor_pose()
    , cloud_in_sensor_frame()  {
    }
  PointCloudWithPose_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , sensor_pose(_alloc)
    , cloud_in_sensor_frame(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::TransformStamped_<ContainerAllocator>  _sensor_pose_type;
  _sensor_pose_type sensor_pose;

   typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _cloud_in_sensor_frame_type;
  _cloud_in_sensor_frame_type cloud_in_sensor_frame;





  typedef boost::shared_ptr< ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator> const> ConstPtr;

}; // struct PointCloudWithPose_

typedef ::mav_planning_msgs::PointCloudWithPose_<std::allocator<void> > PointCloudWithPose;

typedef boost::shared_ptr< ::mav_planning_msgs::PointCloudWithPose > PointCloudWithPosePtr;
typedef boost::shared_ptr< ::mav_planning_msgs::PointCloudWithPose const> PointCloudWithPoseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator1> & lhs, const ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.sensor_pose == rhs.sensor_pose &&
    lhs.cloud_in_sensor_frame == rhs.cloud_in_sensor_frame;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator1> & lhs, const ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mav_planning_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2a8b498d41262fbae6e2ab39e0965442";
  }

  static const char* value(const ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2a8b498d41262fbaULL;
  static const uint64_t static_value2 = 0xe6e2ab39e0965442ULL;
};

template<class ContainerAllocator>
struct DataType< ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mav_planning_msgs/PointCloudWithPose";
  }

  static const char* value(const ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"geometry_msgs/TransformStamped sensor_pose\n"
"sensor_msgs/PointCloud2 cloud_in_sensor_frame\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/TransformStamped\n"
"# This expresses a transform from coordinate frame header.frame_id\n"
"# to the coordinate frame child_frame_id\n"
"#\n"
"# This message is mostly used by the \n"
"# <a href=\"http://wiki.ros.org/tf\">tf</a> package. \n"
"# See its documentation for more information.\n"
"\n"
"Header header\n"
"string child_frame_id # the frame id of the child frame\n"
"Transform transform\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Transform\n"
"# This represents the transform between two coordinate frames in free space.\n"
"\n"
"Vector3 translation\n"
"Quaternion rotation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/PointCloud2\n"
"# This message holds a collection of N-dimensional points, which may\n"
"# contain additional information such as normals, intensity, etc. The\n"
"# point data is stored as a binary blob, its layout described by the\n"
"# contents of the \"fields\" array.\n"
"\n"
"# The point cloud data may be organized 2d (image-like) or 1d\n"
"# (unordered). Point clouds organized as 2d images may be produced by\n"
"# camera depth sensors such as stereo or time-of-flight.\n"
"\n"
"# Time of sensor data acquisition, and the coordinate frame ID (for 3d\n"
"# points).\n"
"Header header\n"
"\n"
"# 2D structure of the point cloud. If the cloud is unordered, height is\n"
"# 1 and width is the length of the point cloud.\n"
"uint32 height\n"
"uint32 width\n"
"\n"
"# Describes the channels and their layout in the binary data blob.\n"
"PointField[] fields\n"
"\n"
"bool    is_bigendian # Is this data bigendian?\n"
"uint32  point_step   # Length of a point in bytes\n"
"uint32  row_step     # Length of a row in bytes\n"
"uint8[] data         # Actual point data, size is (row_step*height)\n"
"\n"
"bool is_dense        # True if there are no invalid points\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/PointField\n"
"# This message holds the description of one point entry in the\n"
"# PointCloud2 message format.\n"
"uint8 INT8    = 1\n"
"uint8 UINT8   = 2\n"
"uint8 INT16   = 3\n"
"uint8 UINT16  = 4\n"
"uint8 INT32   = 5\n"
"uint8 UINT32  = 6\n"
"uint8 FLOAT32 = 7\n"
"uint8 FLOAT64 = 8\n"
"\n"
"string name      # Name of field\n"
"uint32 offset    # Offset from start of point struct\n"
"uint8  datatype  # Datatype enumeration, see above\n"
"uint32 count     # How many elements in the field\n"
;
  }

  static const char* value(const ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.sensor_pose);
      stream.next(m.cloud_in_sensor_frame);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PointCloudWithPose_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mav_planning_msgs::PointCloudWithPose_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "sensor_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::TransformStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.sensor_pose);
    s << indent << "cloud_in_sensor_frame: ";
    s << std::endl;
    Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "  ", v.cloud_in_sensor_frame);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAV_PLANNING_MSGS_MESSAGE_POINTCLOUDWITHPOSE_H
