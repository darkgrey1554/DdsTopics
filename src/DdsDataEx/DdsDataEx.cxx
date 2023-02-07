// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file DdsDataEx.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include <DdsTopics/DdsDataEx/DdsDataEx.h>
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

DataExInt::DataExInt()
{
    // m_time_source com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1ef45e3
    m_time_source = 0;
    // m_id_tag com.eprosima.idl.parser.typecode.PrimitiveTypeCode@18067a5
    m_id_tag = 0;
    // m_value com.eprosima.idl.parser.typecode.PrimitiveTypeCode@ecd4b
    m_value = 0;
    // m_quality com.eprosima.idl.parser.typecode.PrimitiveTypeCode@bf9759
    m_quality = 0;

}

DataExInt::~DataExInt()
{




}

DataExInt::DataExInt(
        const DataExInt& x)
{
    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = x.m_value;
    m_quality = x.m_quality;
}

DataExInt::DataExInt(
        DataExInt&& x)
{
    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = x.m_value;
    m_quality = x.m_quality;
}

DataExInt& DataExInt::operator =(
        const DataExInt& x)
{

    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = x.m_value;
    m_quality = x.m_quality;

    return *this;
}

DataExInt& DataExInt::operator =(
        DataExInt&& x)
{

    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = x.m_value;
    m_quality = x.m_quality;

    return *this;
}

bool DataExInt::operator ==(
        const DataExInt& x) const
{

    return (m_time_source == x.m_time_source && m_id_tag == x.m_id_tag && m_value == x.m_value && m_quality == x.m_quality);
}

bool DataExInt::operator !=(
        const DataExInt& x) const
{
    return !(*this == x);
}

size_t DataExInt::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t DataExInt::getCdrSerializedSize(
        const DataExInt& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void DataExInt::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_time_source;
    scdr << m_id_tag;
    scdr << m_value;
    scdr << m_quality;

}

void DataExInt::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_time_source;
    dcdr >> m_id_tag;
    dcdr >> m_value;
    dcdr >> m_quality;
}

/*!
 * @brief This function sets a value in member time_source
 * @param _time_source New value for member time_source
 */
void DataExInt::time_source(
        int64_t _time_source)
{
    m_time_source = _time_source;
}

/*!
 * @brief This function returns the value of member time_source
 * @return Value of member time_source
 */
int64_t DataExInt::time_source() const
{
    return m_time_source;
}

/*!
 * @brief This function returns a reference to member time_source
 * @return Reference to member time_source
 */
int64_t& DataExInt::time_source()
{
    return m_time_source;
}

/*!
 * @brief This function sets a value in member id_tag
 * @param _id_tag New value for member id_tag
 */
void DataExInt::id_tag(
        uint32_t _id_tag)
{
    m_id_tag = _id_tag;
}

/*!
 * @brief This function returns the value of member id_tag
 * @return Value of member id_tag
 */
uint32_t DataExInt::id_tag() const
{
    return m_id_tag;
}

/*!
 * @brief This function returns a reference to member id_tag
 * @return Reference to member id_tag
 */
uint32_t& DataExInt::id_tag()
{
    return m_id_tag;
}

/*!
 * @brief This function sets a value in member value
 * @param _value New value for member value
 */
void DataExInt::value(
        int32_t _value)
{
    m_value = _value;
}

/*!
 * @brief This function returns the value of member value
 * @return Value of member value
 */
int32_t DataExInt::value() const
{
    return m_value;
}

/*!
 * @brief This function returns a reference to member value
 * @return Reference to member value
 */
int32_t& DataExInt::value()
{
    return m_value;
}

/*!
 * @brief This function sets a value in member quality
 * @param _quality New value for member quality
 */
void DataExInt::quality(
        char _quality)
{
    m_quality = _quality;
}

/*!
 * @brief This function returns the value of member quality
 * @return Value of member quality
 */
char DataExInt::quality() const
{
    return m_quality;
}

/*!
 * @brief This function returns a reference to member quality
 * @return Reference to member quality
 */
char& DataExInt::quality()
{
    return m_quality;
}


size_t DataExInt::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;







    return current_align;
}

bool DataExInt::isKeyDefined()
{
    return false;
}

void DataExInt::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
        
}

DataExFloat::DataExFloat()
{
    // m_time_source com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1ec2012
    m_time_source = 0;
    // m_id_tag com.eprosima.idl.parser.typecode.PrimitiveTypeCode@f777e8
    m_id_tag = 0;
    // m_value com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1686d1f
    m_value = 0.0;
    // m_quality com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1ee9989
    m_quality = 0;

}

DataExFloat::~DataExFloat()
{




}

DataExFloat::DataExFloat(
        const DataExFloat& x)
{
    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = x.m_value;
    m_quality = x.m_quality;
}

DataExFloat::DataExFloat(
        DataExFloat&& x)
{
    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = x.m_value;
    m_quality = x.m_quality;
}

DataExFloat& DataExFloat::operator =(
        const DataExFloat& x)
{

    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = x.m_value;
    m_quality = x.m_quality;

    return *this;
}

DataExFloat& DataExFloat::operator =(
        DataExFloat&& x)
{

    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = x.m_value;
    m_quality = x.m_quality;

    return *this;
}

bool DataExFloat::operator ==(
        const DataExFloat& x) const
{

    return (m_time_source == x.m_time_source && m_id_tag == x.m_id_tag && m_value == x.m_value && m_quality == x.m_quality);
}

bool DataExFloat::operator !=(
        const DataExFloat& x) const
{
    return !(*this == x);
}

size_t DataExFloat::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t DataExFloat::getCdrSerializedSize(
        const DataExFloat& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void DataExFloat::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_time_source;
    scdr << m_id_tag;
    scdr << m_value;
    scdr << m_quality;

}

void DataExFloat::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_time_source;
    dcdr >> m_id_tag;
    dcdr >> m_value;
    dcdr >> m_quality;
}

/*!
 * @brief This function sets a value in member time_source
 * @param _time_source New value for member time_source
 */
void DataExFloat::time_source(
        int64_t _time_source)
{
    m_time_source = _time_source;
}

/*!
 * @brief This function returns the value of member time_source
 * @return Value of member time_source
 */
int64_t DataExFloat::time_source() const
{
    return m_time_source;
}

/*!
 * @brief This function returns a reference to member time_source
 * @return Reference to member time_source
 */
int64_t& DataExFloat::time_source()
{
    return m_time_source;
}

/*!
 * @brief This function sets a value in member id_tag
 * @param _id_tag New value for member id_tag
 */
void DataExFloat::id_tag(
        uint32_t _id_tag)
{
    m_id_tag = _id_tag;
}

/*!
 * @brief This function returns the value of member id_tag
 * @return Value of member id_tag
 */
uint32_t DataExFloat::id_tag() const
{
    return m_id_tag;
}

/*!
 * @brief This function returns a reference to member id_tag
 * @return Reference to member id_tag
 */
uint32_t& DataExFloat::id_tag()
{
    return m_id_tag;
}

/*!
 * @brief This function sets a value in member value
 * @param _value New value for member value
 */
void DataExFloat::value(
        float _value)
{
    m_value = _value;
}

/*!
 * @brief This function returns the value of member value
 * @return Value of member value
 */
float DataExFloat::value() const
{
    return m_value;
}

/*!
 * @brief This function returns a reference to member value
 * @return Reference to member value
 */
float& DataExFloat::value()
{
    return m_value;
}

/*!
 * @brief This function sets a value in member quality
 * @param _quality New value for member quality
 */
void DataExFloat::quality(
        char _quality)
{
    m_quality = _quality;
}

/*!
 * @brief This function returns the value of member quality
 * @return Value of member quality
 */
char DataExFloat::quality() const
{
    return m_quality;
}

/*!
 * @brief This function returns a reference to member quality
 * @return Reference to member quality
 */
char& DataExFloat::quality()
{
    return m_quality;
}


size_t DataExFloat::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;







    return current_align;
}

bool DataExFloat::isKeyDefined()
{
    return false;
}

void DataExFloat::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
        
}

DataExDouble::DataExDouble()
{
    // m_time_source com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1a5c39e
    m_time_source = 0;
    // m_id_tag com.eprosima.idl.parser.typecode.PrimitiveTypeCode@149dace
    m_id_tag = 0;
    // m_value com.eprosima.idl.parser.typecode.PrimitiveTypeCode@397ed7
    m_value = 0.0;
    // m_quality com.eprosima.idl.parser.typecode.PrimitiveTypeCode@10ab905
    m_quality = 0;

}

DataExDouble::~DataExDouble()
{




}

DataExDouble::DataExDouble(
        const DataExDouble& x)
{
    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = x.m_value;
    m_quality = x.m_quality;
}

DataExDouble::DataExDouble(
        DataExDouble&& x)
{
    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = x.m_value;
    m_quality = x.m_quality;
}

DataExDouble& DataExDouble::operator =(
        const DataExDouble& x)
{

    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = x.m_value;
    m_quality = x.m_quality;

    return *this;
}

DataExDouble& DataExDouble::operator =(
        DataExDouble&& x)
{

    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = x.m_value;
    m_quality = x.m_quality;

    return *this;
}

bool DataExDouble::operator ==(
        const DataExDouble& x) const
{

    return (m_time_source == x.m_time_source && m_id_tag == x.m_id_tag && m_value == x.m_value && m_quality == x.m_quality);
}

bool DataExDouble::operator !=(
        const DataExDouble& x) const
{
    return !(*this == x);
}

size_t DataExDouble::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t DataExDouble::getCdrSerializedSize(
        const DataExDouble& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void DataExDouble::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_time_source;
    scdr << m_id_tag;
    scdr << m_value;
    scdr << m_quality;

}

void DataExDouble::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_time_source;
    dcdr >> m_id_tag;
    dcdr >> m_value;
    dcdr >> m_quality;
}

/*!
 * @brief This function sets a value in member time_source
 * @param _time_source New value for member time_source
 */
void DataExDouble::time_source(
        int64_t _time_source)
{
    m_time_source = _time_source;
}

/*!
 * @brief This function returns the value of member time_source
 * @return Value of member time_source
 */
int64_t DataExDouble::time_source() const
{
    return m_time_source;
}

/*!
 * @brief This function returns a reference to member time_source
 * @return Reference to member time_source
 */
int64_t& DataExDouble::time_source()
{
    return m_time_source;
}

/*!
 * @brief This function sets a value in member id_tag
 * @param _id_tag New value for member id_tag
 */
void DataExDouble::id_tag(
        uint32_t _id_tag)
{
    m_id_tag = _id_tag;
}

/*!
 * @brief This function returns the value of member id_tag
 * @return Value of member id_tag
 */
uint32_t DataExDouble::id_tag() const
{
    return m_id_tag;
}

/*!
 * @brief This function returns a reference to member id_tag
 * @return Reference to member id_tag
 */
uint32_t& DataExDouble::id_tag()
{
    return m_id_tag;
}

/*!
 * @brief This function sets a value in member value
 * @param _value New value for member value
 */
void DataExDouble::value(
        double _value)
{
    m_value = _value;
}

/*!
 * @brief This function returns the value of member value
 * @return Value of member value
 */
double DataExDouble::value() const
{
    return m_value;
}

/*!
 * @brief This function returns a reference to member value
 * @return Reference to member value
 */
double& DataExDouble::value()
{
    return m_value;
}

/*!
 * @brief This function sets a value in member quality
 * @param _quality New value for member quality
 */
void DataExDouble::quality(
        char _quality)
{
    m_quality = _quality;
}

/*!
 * @brief This function returns the value of member quality
 * @return Value of member quality
 */
char DataExDouble::quality() const
{
    return m_quality;
}

/*!
 * @brief This function returns a reference to member quality
 * @return Reference to member quality
 */
char& DataExDouble::quality()
{
    return m_quality;
}


size_t DataExDouble::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;







    return current_align;
}

bool DataExDouble::isKeyDefined()
{
    return false;
}

void DataExDouble::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
        
}

DataExChar::DataExChar()
{
    // m_time_source com.eprosima.idl.parser.typecode.PrimitiveTypeCode@235b8e
    m_time_source = 0;
    // m_id_tag com.eprosima.idl.parser.typecode.PrimitiveTypeCode@32be31
    m_id_tag = 0;
    // m_value com.eprosima.idl.parser.typecode.SequenceTypeCode@bca1e0

    // m_quality com.eprosima.idl.parser.typecode.PrimitiveTypeCode@9ba398
    m_quality = 0;

}

DataExChar::~DataExChar()
{




}

DataExChar::DataExChar(
        const DataExChar& x)
{
    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = x.m_value;
    m_quality = x.m_quality;
}

DataExChar::DataExChar(
        DataExChar&& x)
{
    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = std::move(x.m_value);
    m_quality = x.m_quality;
}

DataExChar& DataExChar::operator =(
        const DataExChar& x)
{

    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = x.m_value;
    m_quality = x.m_quality;

    return *this;
}

DataExChar& DataExChar::operator =(
        DataExChar&& x)
{

    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = std::move(x.m_value);
    m_quality = x.m_quality;

    return *this;
}

bool DataExChar::operator ==(
        const DataExChar& x) const
{

    return (m_time_source == x.m_time_source && m_id_tag == x.m_id_tag && m_value == x.m_value && m_quality == x.m_quality);
}

bool DataExChar::operator !=(
        const DataExChar& x) const
{
    return !(*this == x);
}

size_t DataExChar::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (atech::common::SizeTopics::GetMaxSizeDataExVectorChar() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t DataExChar::getCdrSerializedSize(
        const DataExChar& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.value().size() > 0)
    {
        current_alignment += (data.value().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }



    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void DataExChar::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_time_source;
    scdr << m_id_tag;
    scdr << m_value;
    scdr << m_quality;

}

void DataExChar::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_time_source;
    dcdr >> m_id_tag;
    dcdr >> m_value;
    dcdr >> m_quality;
}

/*!
 * @brief This function sets a value in member time_source
 * @param _time_source New value for member time_source
 */
void DataExChar::time_source(
        int64_t _time_source)
{
    m_time_source = _time_source;
}

/*!
 * @brief This function returns the value of member time_source
 * @return Value of member time_source
 */
int64_t DataExChar::time_source() const
{
    return m_time_source;
}

/*!
 * @brief This function returns a reference to member time_source
 * @return Reference to member time_source
 */
int64_t& DataExChar::time_source()
{
    return m_time_source;
}

/*!
 * @brief This function sets a value in member id_tag
 * @param _id_tag New value for member id_tag
 */
void DataExChar::id_tag(
        uint32_t _id_tag)
{
    m_id_tag = _id_tag;
}

/*!
 * @brief This function returns the value of member id_tag
 * @return Value of member id_tag
 */
uint32_t DataExChar::id_tag() const
{
    return m_id_tag;
}

/*!
 * @brief This function returns a reference to member id_tag
 * @return Reference to member id_tag
 */
uint32_t& DataExChar::id_tag()
{
    return m_id_tag;
}

/*!
 * @brief This function copies the value in member value
 * @param _value New value to be copied in member value
 */
void DataExChar::value(
        const std::vector<char>& _value)
{
    m_value = _value;
}

/*!
 * @brief This function moves the value in member value
 * @param _value New value to be moved in member value
 */
void DataExChar::value(
        std::vector<char>&& _value)
{
    m_value = std::move(_value);
}

/*!
 * @brief This function returns a constant reference to member value
 * @return Constant reference to member value
 */
const std::vector<char>& DataExChar::value() const
{
    return m_value;
}

/*!
 * @brief This function returns a reference to member value
 * @return Reference to member value
 */
std::vector<char>& DataExChar::value()
{
    return m_value;
}
/*!
 * @brief This function sets a value in member quality
 * @param _quality New value for member quality
 */
void DataExChar::quality(
        char _quality)
{
    m_quality = _quality;
}

/*!
 * @brief This function returns the value of member quality
 * @return Value of member quality
 */
char DataExChar::quality() const
{
    return m_quality;
}

/*!
 * @brief This function returns a reference to member quality
 * @return Reference to member quality
 */
char& DataExChar::quality()
{
    return m_quality;
}


size_t DataExChar::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;







    return current_align;
}

bool DataExChar::isKeyDefined()
{
    return false;
}

void DataExChar::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
        
}

DdsDataEx::DdsDataEx()
{
    // m_time_service com.eprosima.idl.parser.typecode.PrimitiveTypeCode@43fe0e
    m_time_service = 0;
    // m_data_int com.eprosima.idl.parser.typecode.SequenceTypeCode@1943d71

    // m_data_float com.eprosima.idl.parser.typecode.SequenceTypeCode@80503

    // m_data_double com.eprosima.idl.parser.typecode.SequenceTypeCode@1553d26

    // m_data_char com.eprosima.idl.parser.typecode.SequenceTypeCode@9a3d1d


}

DdsDataEx::~DdsDataEx()
{





}

DdsDataEx::DdsDataEx(
        const DdsDataEx& x)
{
    m_time_service = x.m_time_service;
    m_data_int = x.m_data_int;
    m_data_float = x.m_data_float;
    m_data_double = x.m_data_double;
    m_data_char = x.m_data_char;
}

DdsDataEx::DdsDataEx(
        DdsDataEx&& x)
{
    m_time_service = x.m_time_service;
    m_data_int = std::move(x.m_data_int);
    m_data_float = std::move(x.m_data_float);
    m_data_double = std::move(x.m_data_double);
    m_data_char = std::move(x.m_data_char);
}

DdsDataEx& DdsDataEx::operator =(
        const DdsDataEx& x)
{

    m_time_service = x.m_time_service;
    m_data_int = x.m_data_int;
    m_data_float = x.m_data_float;
    m_data_double = x.m_data_double;
    m_data_char = x.m_data_char;

    return *this;
}

DdsDataEx& DdsDataEx::operator =(
        DdsDataEx&& x)
{

    m_time_service = x.m_time_service;
    m_data_int = std::move(x.m_data_int);
    m_data_float = std::move(x.m_data_float);
    m_data_double = std::move(x.m_data_double);
    m_data_char = std::move(x.m_data_char);

    return *this;
}

bool DdsDataEx::operator ==(
        const DdsDataEx& x) const
{

    return (m_time_service == x.m_time_service && m_data_int == x.m_data_int && m_data_float == x.m_data_float && m_data_double == x.m_data_double && m_data_char == x.m_data_char);
}

bool DdsDataEx::operator !=(
        const DdsDataEx& x) const
{
    return !(*this == x);
}

size_t DdsDataEx::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < atech::common::SizeTopics::GetMaxSizeDdsDataExVectorInt(); ++a)
    {
        current_alignment += DataExInt::getMaxCdrSerializedSize(current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < atech::common::SizeTopics::GetMaxSizeDdsDataExVectorFloat(); ++a)
    {
        current_alignment += DataExFloat::getMaxCdrSerializedSize(current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < atech::common::SizeTopics::GetMaxSizeDdsDataExVectorDouble(); ++a)
    {
        current_alignment += DataExDouble::getMaxCdrSerializedSize(current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < atech::common::SizeTopics::GetMaxSizeDdsDataExVectorChar(); ++a)
    {
        current_alignment += DataExChar::getMaxCdrSerializedSize(current_alignment);}


    return current_alignment - initial_alignment;
}

size_t DdsDataEx::getCdrSerializedSize(
        const DdsDataEx& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.data_int().size(); ++a)
    {
        current_alignment += DataExInt::getCdrSerializedSize(data.data_int().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.data_float().size(); ++a)
    {
        current_alignment += DataExFloat::getCdrSerializedSize(data.data_float().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.data_double().size(); ++a)
    {
        current_alignment += DataExDouble::getCdrSerializedSize(data.data_double().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.data_char().size(); ++a)
    {
        current_alignment += DataExChar::getCdrSerializedSize(data.data_char().at(a), current_alignment);}


    return current_alignment - initial_alignment;
}

void DdsDataEx::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_time_service;
    scdr << m_data_int;
    scdr << m_data_float;
    scdr << m_data_double;
    scdr << m_data_char;

}

void DdsDataEx::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_time_service;
    dcdr >> m_data_int;
    dcdr >> m_data_float;
    dcdr >> m_data_double;
    dcdr >> m_data_char;
}

/*!
 * @brief This function sets a value in member time_service
 * @param _time_service New value for member time_service
 */
void DdsDataEx::time_service(
        int64_t _time_service)
{
    m_time_service = _time_service;
}

/*!
 * @brief This function returns the value of member time_service
 * @return Value of member time_service
 */
int64_t DdsDataEx::time_service() const
{
    return m_time_service;
}

/*!
 * @brief This function returns a reference to member time_service
 * @return Reference to member time_service
 */
int64_t& DdsDataEx::time_service()
{
    return m_time_service;
}

/*!
 * @brief This function copies the value in member data_int
 * @param _data_int New value to be copied in member data_int
 */
void DdsDataEx::data_int(
        const std::vector<DataExInt>& _data_int)
{
    m_data_int = _data_int;
}

/*!
 * @brief This function moves the value in member data_int
 * @param _data_int New value to be moved in member data_int
 */
void DdsDataEx::data_int(
        std::vector<DataExInt>&& _data_int)
{
    m_data_int = std::move(_data_int);
}

/*!
 * @brief This function returns a constant reference to member data_int
 * @return Constant reference to member data_int
 */
const std::vector<DataExInt>& DdsDataEx::data_int() const
{
    return m_data_int;
}

/*!
 * @brief This function returns a reference to member data_int
 * @return Reference to member data_int
 */
std::vector<DataExInt>& DdsDataEx::data_int()
{
    return m_data_int;
}
/*!
 * @brief This function copies the value in member data_float
 * @param _data_float New value to be copied in member data_float
 */
void DdsDataEx::data_float(
        const std::vector<DataExFloat>& _data_float)
{
    m_data_float = _data_float;
}

/*!
 * @brief This function moves the value in member data_float
 * @param _data_float New value to be moved in member data_float
 */
void DdsDataEx::data_float(
        std::vector<DataExFloat>&& _data_float)
{
    m_data_float = std::move(_data_float);
}

/*!
 * @brief This function returns a constant reference to member data_float
 * @return Constant reference to member data_float
 */
const std::vector<DataExFloat>& DdsDataEx::data_float() const
{
    return m_data_float;
}

/*!
 * @brief This function returns a reference to member data_float
 * @return Reference to member data_float
 */
std::vector<DataExFloat>& DdsDataEx::data_float()
{
    return m_data_float;
}
/*!
 * @brief This function copies the value in member data_double
 * @param _data_double New value to be copied in member data_double
 */
void DdsDataEx::data_double(
        const std::vector<DataExDouble>& _data_double)
{
    m_data_double = _data_double;
}

/*!
 * @brief This function moves the value in member data_double
 * @param _data_double New value to be moved in member data_double
 */
void DdsDataEx::data_double(
        std::vector<DataExDouble>&& _data_double)
{
    m_data_double = std::move(_data_double);
}

/*!
 * @brief This function returns a constant reference to member data_double
 * @return Constant reference to member data_double
 */
const std::vector<DataExDouble>& DdsDataEx::data_double() const
{
    return m_data_double;
}

/*!
 * @brief This function returns a reference to member data_double
 * @return Reference to member data_double
 */
std::vector<DataExDouble>& DdsDataEx::data_double()
{
    return m_data_double;
}
/*!
 * @brief This function copies the value in member data_char
 * @param _data_char New value to be copied in member data_char
 */
void DdsDataEx::data_char(
        const std::vector<DataExChar>& _data_char)
{
    m_data_char = _data_char;
}

/*!
 * @brief This function moves the value in member data_char
 * @param _data_char New value to be moved in member data_char
 */
void DdsDataEx::data_char(
        std::vector<DataExChar>&& _data_char)
{
    m_data_char = std::move(_data_char);
}

/*!
 * @brief This function returns a constant reference to member data_char
 * @return Constant reference to member data_char
 */
const std::vector<DataExChar>& DdsDataEx::data_char() const
{
    return m_data_char;
}

/*!
 * @brief This function returns a reference to member data_char
 * @return Reference to member data_char
 */
std::vector<DataExChar>& DdsDataEx::data_char()
{
    return m_data_char;
}

size_t DdsDataEx::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;








    return current_align;
}

bool DdsDataEx::isKeyDefined()
{
    return false;
}

void DdsDataEx::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
         
}
