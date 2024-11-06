// Generated by gencpp from file astra_camera/GetCameraParamsResponse.msg
// DO NOT EDIT!


#ifndef ASTRA_CAMERA_MESSAGE_GETCAMERAPARAMSRESPONSE_H
#define ASTRA_CAMERA_MESSAGE_GETCAMERAPARAMSRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace astra_camera
{
template <class ContainerAllocator>
struct GetCameraParamsResponse_
{
  typedef GetCameraParamsResponse_<ContainerAllocator> Type;

  GetCameraParamsResponse_()
    : l_intr_p()
    , r_intr_p()
    , r2l_r()
    , r2l_t()
    , l_k()
    , r_k()
    , success(false)
    , message()  {
      l_intr_p.assign(0.0);

      r_intr_p.assign(0.0);

      r2l_r.assign(0.0);

      r2l_t.assign(0.0);

      l_k.assign(0.0);

      r_k.assign(0.0);
  }
  GetCameraParamsResponse_(const ContainerAllocator& _alloc)
    : l_intr_p()
    , r_intr_p()
    , r2l_r()
    , r2l_t()
    , l_k()
    , r_k()
    , success(false)
    , message(_alloc)  {
  (void)_alloc;
      l_intr_p.assign(0.0);

      r_intr_p.assign(0.0);

      r2l_r.assign(0.0);

      r2l_t.assign(0.0);

      l_k.assign(0.0);

      r_k.assign(0.0);
  }



   typedef boost::array<float, 4>  _l_intr_p_type;
  _l_intr_p_type l_intr_p;

   typedef boost::array<float, 4>  _r_intr_p_type;
  _r_intr_p_type r_intr_p;

   typedef boost::array<float, 9>  _r2l_r_type;
  _r2l_r_type r2l_r;

   typedef boost::array<float, 3>  _r2l_t_type;
  _r2l_t_type r2l_t;

   typedef boost::array<float, 5>  _l_k_type;
  _l_k_type l_k;

   typedef boost::array<float, 5>  _r_k_type;
  _r_k_type r_k;

   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::astra_camera::GetCameraParamsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::astra_camera::GetCameraParamsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetCameraParamsResponse_

typedef ::astra_camera::GetCameraParamsResponse_<std::allocator<void> > GetCameraParamsResponse;

typedef boost::shared_ptr< ::astra_camera::GetCameraParamsResponse > GetCameraParamsResponsePtr;
typedef boost::shared_ptr< ::astra_camera::GetCameraParamsResponse const> GetCameraParamsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::astra_camera::GetCameraParamsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::astra_camera::GetCameraParamsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::astra_camera::GetCameraParamsResponse_<ContainerAllocator1> & lhs, const ::astra_camera::GetCameraParamsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.l_intr_p == rhs.l_intr_p &&
    lhs.r_intr_p == rhs.r_intr_p &&
    lhs.r2l_r == rhs.r2l_r &&
    lhs.r2l_t == rhs.r2l_t &&
    lhs.l_k == rhs.l_k &&
    lhs.r_k == rhs.r_k &&
    lhs.success == rhs.success &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::astra_camera::GetCameraParamsResponse_<ContainerAllocator1> & lhs, const ::astra_camera::GetCameraParamsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace astra_camera

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::astra_camera::GetCameraParamsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::astra_camera::GetCameraParamsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::astra_camera::GetCameraParamsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::astra_camera::GetCameraParamsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::astra_camera::GetCameraParamsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::astra_camera::GetCameraParamsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::astra_camera::GetCameraParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "82a0d82977d6826869eb4772054042e0";
  }

  static const char* value(const ::astra_camera::GetCameraParamsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x82a0d82977d68268ULL;
  static const uint64_t static_value2 = 0x69eb4772054042e0ULL;
};

template<class ContainerAllocator>
struct DataType< ::astra_camera::GetCameraParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "astra_camera/GetCameraParamsResponse";
  }

  static const char* value(const ::astra_camera::GetCameraParamsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::astra_camera::GetCameraParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[4] l_intr_p\n"
"float32[4] r_intr_p\n"
"float32[9] r2l_r\n"
"float32[3] r2l_t\n"
"float32[5] l_k\n"
"float32[5] r_k\n"
"bool success\n"
"string message\n"
"\n"
;
  }

  static const char* value(const ::astra_camera::GetCameraParamsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::astra_camera::GetCameraParamsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.l_intr_p);
      stream.next(m.r_intr_p);
      stream.next(m.r2l_r);
      stream.next(m.r2l_t);
      stream.next(m.l_k);
      stream.next(m.r_k);
      stream.next(m.success);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetCameraParamsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::astra_camera::GetCameraParamsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::astra_camera::GetCameraParamsResponse_<ContainerAllocator>& v)
  {
    s << indent << "l_intr_p[]" << std::endl;
    for (size_t i = 0; i < v.l_intr_p.size(); ++i)
    {
      s << indent << "  l_intr_p[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.l_intr_p[i]);
    }
    s << indent << "r_intr_p[]" << std::endl;
    for (size_t i = 0; i < v.r_intr_p.size(); ++i)
    {
      s << indent << "  r_intr_p[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.r_intr_p[i]);
    }
    s << indent << "r2l_r[]" << std::endl;
    for (size_t i = 0; i < v.r2l_r.size(); ++i)
    {
      s << indent << "  r2l_r[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.r2l_r[i]);
    }
    s << indent << "r2l_t[]" << std::endl;
    for (size_t i = 0; i < v.r2l_t.size(); ++i)
    {
      s << indent << "  r2l_t[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.r2l_t[i]);
    }
    s << indent << "l_k[]" << std::endl;
    for (size_t i = 0; i < v.l_k.size(); ++i)
    {
      s << indent << "  l_k[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.l_k[i]);
    }
    s << indent << "r_k[]" << std::endl;
    for (size_t i = 0; i < v.r_k.size(); ++i)
    {
      s << indent << "  r_k[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.r_k[i]);
    }
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ASTRA_CAMERA_MESSAGE_GETCAMERAPARAMSRESPONSE_H
