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
 * @file DdsAlarmEx.cpp
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

#include <DdsTopics/DdsAlarmEx/DdsAlarmEx.h>
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

Alarm::Alarm()
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

Alarm::~Alarm()
{




}

Alarm::Alarm(
        const Alarm& x)
{
    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = x.m_value;
    m_quality = x.m_quality;
}

Alarm::Alarm(
        Alarm&& x)
{
    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = x.m_value;
    m_quality = x.m_quality;
}

Alarm& Alarm::operator =(
        const Alarm& x)
{

    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = x.m_value;
    m_quality = x.m_quality;

    return *this;
}

Alarm& Alarm::operator =(
        Alarm&& x)
{

    m_time_source = x.m_time_source;
    m_id_tag = x.m_id_tag;
    m_value = x.m_value;
    m_quality = x.m_quality;

    return *this;
}

bool Alarm::operator ==(
        const Alarm& x) const
{

    return (m_time_source == x.m_time_source && m_id_tag == x.m_id_tag && m_value == x.m_value && m_quality == x.m_quality);
}

bool Alarm::operator !=(
        const Alarm& x) const
{
    return !(*this == x);
}

size_t Alarm::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t Alarm::getCdrSerializedSize(
        const Alarm& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void Alarm::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_time_source;
    scdr << m_id_tag;
    scdr << m_value;
    scdr << m_quality;

}

void Alarm::deserialize(
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
void Alarm::time_source(
        int64_t _time_source)
{
    m_time_source = _time_source;
}

/*!
 * @brief This function returns the value of member time_source
 * @return Value of member time_source
 */
int64_t Alarm::time_source() const
{
    return m_time_source;
}

/*!
 * @brief This function returns a reference to member time_source
 * @return Reference to member time_source
 */
int64_t& Alarm::time_source()
{
    return m_time_source;
}

/*!
 * @brief This function sets a value in member id_tag
 * @param _id_tag New value for member id_tag
 */
void Alarm::id_tag(
        uint32_t _id_tag)
{
    m_id_tag = _id_tag;
}

/*!
 * @brief This function returns the value of member id_tag
 * @return Value of member id_tag
 */
uint32_t Alarm::id_tag() const
{
    return m_id_tag;
}

/*!
 * @brief This function returns a reference to member id_tag
 * @return Reference to member id_tag
 */
uint32_t& Alarm::id_tag()
{
    return m_id_tag;
}

/*!
 * @brief This function sets a value in member value
 * @param _value New value for member value
 */
void Alarm::value(
        char _value)
{
    m_value = _value;
}

/*!
 * @brief This function returns the value of member value
 * @return Value of member value
 */
char Alarm::value() const
{
    return m_value;
}

/*!
 * @brief This function returns a reference to member value
 * @return Reference to member value
 */
char& Alarm::value()
{
    return m_value;
}

/*!
 * @brief This function sets a value in member quality
 * @param _quality New value for member quality
 */
void Alarm::quality(
        char _quality)
{
    m_quality = _quality;
}

/*!
 * @brief This function returns the value of member quality
 * @return Value of member quality
 */
char Alarm::quality() const
{
    return m_quality;
}

/*!
 * @brief This function returns a reference to member quality
 * @return Reference to member quality
 */
char& Alarm::quality()
{
    return m_quality;
}


size_t Alarm::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;







    return current_align;
}

bool Alarm::isKeyDefined()
{
    return false;
}

void Alarm::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
        
}

DdsAlarmEx::DdsAlarmEx()
{
    // m_time_service com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4a52ec
    m_time_service = 0;
    // m_alarms com.eprosima.idl.parser.typecode.SequenceTypeCode@e52dcd


}

DdsAlarmEx::~DdsAlarmEx()
{


}

DdsAlarmEx::DdsAlarmEx(
        const DdsAlarmEx& x)
{
    m_time_service = x.m_time_service;
    m_alarms = x.m_alarms;
}

DdsAlarmEx::DdsAlarmEx(
        DdsAlarmEx&& x)
{
    m_time_service = x.m_time_service;
    m_alarms = std::move(x.m_alarms);
}

DdsAlarmEx& DdsAlarmEx::operator =(
        const DdsAlarmEx& x)
{

    m_time_service = x.m_time_service;
    m_alarms = x.m_alarms;

    return *this;
}

DdsAlarmEx& DdsAlarmEx::operator =(
        DdsAlarmEx&& x)
{

    m_time_service = x.m_time_service;
    m_alarms = std::move(x.m_alarms);

    return *this;
}

bool DdsAlarmEx::operator ==(
        const DdsAlarmEx& x) const
{

    return (m_time_service == x.m_time_service && m_alarms == x.m_alarms);
}

bool DdsAlarmEx::operator !=(
        const DdsAlarmEx& x) const
{
    return !(*this == x);
}

size_t DdsAlarmEx::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < atech::common::SizeTopics::GetMaxSizeDdsAlarmExVectorAlarms(); ++a)
    {
        current_alignment += Alarm::getMaxCdrSerializedSize(current_alignment);}


    return current_alignment - initial_alignment;
}

size_t DdsAlarmEx::getCdrSerializedSize(
        const DdsAlarmEx& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.alarms().size(); ++a)
    {
        current_alignment += Alarm::getCdrSerializedSize(data.alarms().at(a), current_alignment);}


    return current_alignment - initial_alignment;
}

void DdsAlarmEx::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_time_service;
    scdr << m_alarms;

}

void DdsAlarmEx::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_time_service;
    dcdr >> m_alarms;
}

/*!
 * @brief This function sets a value in member time_service
 * @param _time_service New value for member time_service
 */
void DdsAlarmEx::time_service(
        int64_t _time_service)
{
    m_time_service = _time_service;
}

/*!
 * @brief This function returns the value of member time_service
 * @return Value of member time_service
 */
int64_t DdsAlarmEx::time_service() const
{
    return m_time_service;
}

/*!
 * @brief This function returns a reference to member time_service
 * @return Reference to member time_service
 */
int64_t& DdsAlarmEx::time_service()
{
    return m_time_service;
}

/*!
 * @brief This function copies the value in member alarms
 * @param _alarms New value to be copied in member alarms
 */
void DdsAlarmEx::alarms(
        const std::vector<Alarm>& _alarms)
{
    m_alarms = _alarms;
}

/*!
 * @brief This function moves the value in member alarms
 * @param _alarms New value to be moved in member alarms
 */
void DdsAlarmEx::alarms(
        std::vector<Alarm>&& _alarms)
{
    m_alarms = std::move(_alarms);
}

/*!
 * @brief This function returns a constant reference to member alarms
 * @return Constant reference to member alarms
 */
const std::vector<Alarm>& DdsAlarmEx::alarms() const
{
    return m_alarms;
}

/*!
 * @brief This function returns a reference to member alarms
 * @return Reference to member alarms
 */
std::vector<Alarm>& DdsAlarmEx::alarms()
{
    return m_alarms;
}

size_t DdsAlarmEx::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool DdsAlarmEx::isKeyDefined()
{
    return false;
}

void DdsAlarmEx::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}
