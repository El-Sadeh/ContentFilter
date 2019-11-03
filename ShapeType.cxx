

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ShapeType.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "ShapeType.hpp"
#include "ShapeTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

std::ostream& operator << (std::ostream& o,const ShapeFillKind& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    switch(sample.underlying()){
        case ShapeFillKind::SOLID_FILL:
        o << "ShapeFillKind::SOLID_FILL" << " ";
        break;
        case ShapeFillKind::TRANSPARENT_FILL:
        o << "ShapeFillKind::TRANSPARENT_FILL" << " ";
        break;
        case ShapeFillKind::HORIZONTAL_HATCH_FILL:
        o << "ShapeFillKind::HORIZONTAL_HATCH_FILL" << " ";
        break;
        case ShapeFillKind::VERTICAL_HATCH_FILL:
        o << "ShapeFillKind::VERTICAL_HATCH_FILL" << " ";
        break;
    }
    return o;
}

// ---- ShapeType: 

ShapeType::ShapeType() :
    m_x_ (0) ,
    m_y_ (0) ,
    m_shapesize_ (0)  {
}   

ShapeType::ShapeType (
    const std::string& color,
    int32_t x,
    int32_t y,
    int32_t shapesize)
    :
        m_color_( color ),
        m_x_( x ),
        m_y_( y ),
        m_shapesize_( shapesize ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
ShapeType::ShapeType(ShapeType&& other_) OMG_NOEXCEPT  :m_color_ (std::move(other_.m_color_))
,
m_x_ (std::move(other_.m_x_))
,
m_y_ (std::move(other_.m_y_))
,
m_shapesize_ (std::move(other_.m_shapesize_))
{
} 

ShapeType& ShapeType::operator=(ShapeType&&  other_) OMG_NOEXCEPT {
    ShapeType tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void ShapeType::swap(ShapeType& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_color_, other_.m_color_);
    swap(m_x_, other_.m_x_);
    swap(m_y_, other_.m_y_);
    swap(m_shapesize_, other_.m_shapesize_);
}  

bool ShapeType::operator == (const ShapeType& other_) const {
    if (m_color_ != other_.m_color_) {
        return false;
    }
    if (m_x_ != other_.m_x_) {
        return false;
    }
    if (m_y_ != other_.m_y_) {
        return false;
    }
    if (m_shapesize_ != other_.m_shapesize_) {
        return false;
    }
    return true;
}
bool ShapeType::operator != (const ShapeType& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
std::string& ShapeType::color() OMG_NOEXCEPT {
    return m_color_;
}

const std::string& ShapeType::color() const OMG_NOEXCEPT {
    return m_color_;
}

void ShapeType::color(const std::string& value) {
    m_color_ = value;
}

int32_t& ShapeType::x() OMG_NOEXCEPT {
    return m_x_;
}

const int32_t& ShapeType::x() const OMG_NOEXCEPT {
    return m_x_;
}

void ShapeType::x(int32_t value) {
    m_x_ = value;
}

int32_t& ShapeType::y() OMG_NOEXCEPT {
    return m_y_;
}

const int32_t& ShapeType::y() const OMG_NOEXCEPT {
    return m_y_;
}

void ShapeType::y(int32_t value) {
    m_y_ = value;
}

int32_t& ShapeType::shapesize() OMG_NOEXCEPT {
    return m_shapesize_;
}

const int32_t& ShapeType::shapesize() const OMG_NOEXCEPT {
    return m_shapesize_;
}

void ShapeType::shapesize(int32_t value) {
    m_shapesize_ = value;
}

std::ostream& operator << (std::ostream& o,const ShapeType& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "color: " << sample.color()<<", ";
    o << "x: " << sample.x()<<", ";
    o << "y: " << sample.y()<<", ";
    o << "shapesize: " << sample.shapesize() ;
    o <<"]";
    return o;
}

// ---- ShapeTypeExtended: 

ShapeTypeExtended::ShapeTypeExtended() :
    m_fillKind_(ShapeFillKind::get_default()) ,
    m_angle_ (0.0f)  {
}   

ShapeTypeExtended::ShapeTypeExtended (
    const std::string& color,
    int32_t x,
    int32_t y,
    int32_t shapesize,
    const ShapeFillKind& fillKind,
    float angle)
    :
        ShapeType(color,x,y,shapesize ),
        m_fillKind_( fillKind ),
        m_angle_( angle ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
ShapeTypeExtended::ShapeTypeExtended(ShapeTypeExtended&& other_) OMG_NOEXCEPT  : 
ShapeType(std::move(other_)),
m_fillKind_ (std::move(other_.m_fillKind_))
,
m_angle_ (std::move(other_.m_angle_))
{
} 

ShapeTypeExtended& ShapeTypeExtended::operator=(ShapeTypeExtended&&  other_) OMG_NOEXCEPT {
    ShapeTypeExtended tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void ShapeTypeExtended::swap(ShapeTypeExtended& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    ShapeType::swap(other_);
    swap(m_fillKind_, other_.m_fillKind_);
    swap(m_angle_, other_.m_angle_);
}  

bool ShapeTypeExtended::operator == (const ShapeTypeExtended& other_) const {
    if (!ShapeType::operator == (other_)){
        return false;
    }
    if (m_fillKind_ != other_.m_fillKind_) {
        return false;
    }
    if (m_angle_ != other_.m_angle_) {
        return false;
    }
    return true;
}
bool ShapeTypeExtended::operator != (const ShapeTypeExtended& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
ShapeFillKind& ShapeTypeExtended::fillKind() OMG_NOEXCEPT {
    return m_fillKind_;
}

const ShapeFillKind& ShapeTypeExtended::fillKind() const OMG_NOEXCEPT {
    return m_fillKind_;
}

void ShapeTypeExtended::fillKind(const ShapeFillKind& value) {
    m_fillKind_ = value;
}

float& ShapeTypeExtended::angle() OMG_NOEXCEPT {
    return m_angle_;
}

const float& ShapeTypeExtended::angle() const OMG_NOEXCEPT {
    return m_angle_;
}

void ShapeTypeExtended::angle(float value) {
    m_angle_ = value;
}

std::ostream& operator << (std::ostream& o,const ShapeTypeExtended& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << static_cast<const ShapeType &>(sample);
    o << "fillKind: " << sample.fillKind()<<", ";
    o << "angle: " << std::setprecision(9) <<sample.angle() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code<ShapeFillKind> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ShapeFillKind_g_tc_members[4]=
                {

                    {
                        (char *)"SOLID_FILL",/* Member name */
                        {
                            0, /* Ignored */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        ShapeFillKind::SOLID_FILL, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"TRANSPARENT_FILL",/* Member name */
                        {
                            0, /* Ignored */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        ShapeFillKind::TRANSPARENT_FILL, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"HORIZONTAL_HATCH_FILL",/* Member name */
                        {
                            0, /* Ignored */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        ShapeFillKind::HORIZONTAL_HATCH_FILL, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"VERTICAL_HATCH_FILL",/* Member name */
                        {
                            0, /* Ignored */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        ShapeFillKind::VERTICAL_HATCH_FILL, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode ShapeFillKind_g_tc =
                {{
                        DDS_TK_ENUM,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ShapeFillKind", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        ShapeFillKind_g_tc_members, /* Members */
                        DDS_VM_NONE   /* Type Modifier */        
                    }}; /* Type code for ShapeFillKind*/

                if (is_initialized) {
                    return &ShapeFillKind_g_tc;
                }

                is_initialized = RTI_TRUE;

                return &ShapeFillKind_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::EnumType& dynamic_type<ShapeFillKind>::get()
        {
            return static_cast<const dds::core::xtypes::EnumType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<ShapeFillKind>::get())));
        }

        template<>
        struct native_type_code<ShapeType> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ShapeType_g_tc_color_string = DDS_INITIALIZE_STRING_TYPECODE((128));
                static DDS_TypeCode_Member ShapeType_g_tc_members[4]=
                {

                    {
                        (char *)"color",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"x",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"y",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"shapesize",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode ShapeType_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ShapeType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        ShapeType_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ShapeType*/

                if (is_initialized) {
                    return &ShapeType_g_tc;
                }

                ShapeType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&ShapeType_g_tc_color_string;

                ShapeType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                ShapeType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                ShapeType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                is_initialized = RTI_TRUE;

                return &ShapeType_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<ShapeType>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<ShapeType>::get())));
        }

        template<>
        struct native_type_code<ShapeTypeExtended> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ShapeTypeExtended_g_tc_members[2]=
                {

                    {
                        (char *)"fillKind",/* Member name */
                        {
                            4,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"angle",/* Member name */
                        {
                            5,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode ShapeTypeExtended_g_tc =
                {{
                        DDS_TK_VALUE,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ShapeTypeExtended", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ShapeTypeExtended_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ShapeTypeExtended*/

                if (is_initialized) {
                    return &ShapeTypeExtended_g_tc;
                }

                ShapeTypeExtended_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&rti::topic::dynamic_type< ShapeFillKind>::get().native();

                ShapeTypeExtended_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                ShapeTypeExtended_g_tc._data._typeCode = (RTICdrTypeCode *)&rti::topic::dynamic_type<ShapeType>::get().native(); /* Base class */

                is_initialized = RTI_TRUE;

                return &ShapeTypeExtended_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<ShapeTypeExtended>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<ShapeTypeExtended>::get())));
        }

    }
}  

namespace dds { 
    namespace topic {
        void topic_type_support<ShapeType>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                ShapeTypePlugin_new,
                ShapeTypePlugin_delete);
        }

        std::vector<char>& topic_type_support<ShapeType>::to_cdr_buffer(
            std::vector<char>& buffer, const ShapeType& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ShapeTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ShapeTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<ShapeType>::from_cdr_buffer(ShapeType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ShapeTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ShapeType from cdr buffer");
        }

        void topic_type_support<ShapeType>::reset_sample(ShapeType& sample) 
        {
            rti::topic::reset_sample(sample.color());
            rti::topic::reset_sample(sample.x());
            rti::topic::reset_sample(sample.y());
            rti::topic::reset_sample(sample.shapesize());
        }

        void topic_type_support<ShapeType>::allocate_sample(ShapeType& sample, int, int) 
        {
            rti::topic::allocate_sample(sample.color(),  -1, 128);
        }

        void topic_type_support<ShapeTypeExtended>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                ShapeTypeExtendedPlugin_new,
                ShapeTypeExtendedPlugin_delete);
        }

        std::vector<char>& topic_type_support<ShapeTypeExtended>::to_cdr_buffer(
            std::vector<char>& buffer, const ShapeTypeExtended& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ShapeTypeExtendedPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ShapeTypeExtendedPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<ShapeTypeExtended>::from_cdr_buffer(ShapeTypeExtended& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ShapeTypeExtendedPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ShapeTypeExtended from cdr buffer");
        }

        void topic_type_support<ShapeTypeExtended>::reset_sample(ShapeTypeExtended& sample) 
        {
            // Initialize base
            topic_type_support<ShapeType>::reset_sample(sample);

            rti::topic::reset_sample(sample.fillKind());
            rti::topic::reset_sample(sample.angle());
        }

        void topic_type_support<ShapeTypeExtended>::allocate_sample(ShapeTypeExtended& sample, int, int) 
        {
            // Initialize base
            topic_type_support<ShapeType>::allocate_sample(sample, -1, -1);
            rti::topic::allocate_sample(sample.fillKind(),  -1, -1);
        }

    }
}  

