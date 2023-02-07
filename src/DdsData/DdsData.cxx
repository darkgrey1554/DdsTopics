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
 * @file DdsData.cpp
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

#include <DdsTopics/DdsData/DdsData.h>
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

DataCollectionInt::DataCollectionInt()
{
    // m_value com.eprosima.idl.parser.typecode.SequenceTypeCode@1928643

    // m_quality com.eprosima.idl.parser.typecode.SequenceTypeCode@1993335


}

DataCollectionInt::~DataCollectionInt()
{


}

DataCollectionInt::DataCollectionInt(
        const DataCollectionInt& x)
{
    m_value = x.m_value;
    m_quality = x.m_quality;
}

DataCollectionInt::DataCollectionInt(
        DataCollectionInt&& x)
{
    m_value = std::move(x.m_value);
    m_quality = std::move(x.m_quality);
}

DataCollectionInt& DataCollectionInt::operator =(
        const DataCollectionInt& x)
{

    m_value = x.m_value;
    m_quality = x.m_quality;

    return *this;
}

DataCollectionInt& DataCollectionInt::operator =(
        DataCollectionInt&& x)
{

    m_value = std::move(x.m_value);
    m_quality = std::move(x.m_quality);

    return *this;
}

bool DataCollectionInt::operator ==(
        const DataCollectionInt& x) const
{

    return (m_value == x.m_value && m_quality == x.m_quality);
}

bool DataCollectionInt::operator !=(
        const DataCollectionInt& x) const
{
    return !(*this == x);
}

size_t DataCollectionInt::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (atech::common::SizeTopics::GetMaxSizeDataCollectionInt() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (atech::common::SizeTopics::GetMaxSizeDataCollectionInt() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);




    return current_alignment - initial_alignment;
}

size_t DataCollectionInt::getCdrSerializedSize(
        const DataCollectionInt& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.value().size() > 0)
    {
        current_alignment += (data.value().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.quality().size() > 0)
    {
        current_alignment += (data.quality().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }




    return current_alignment - initial_alignment;
}

void DataCollectionInt::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_value;
    scdr << m_quality;
}

void DataCollectionInt::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_value;
    dcdr >> m_quality;
}

/*!
 * @brief This function copies the value in member value
 * @param _value New value to be copied in member value
 */
void DataCollectionInt::value(
        const std::vector<int32_t>& _value)
{
    m_value = _value;
}

/*!
 * @brief This function moves the value in member value
 * @param _value New value to be moved in member value
 */
void DataCollectionInt::value(
        std::vector<int32_t>&& _value)
{
    m_value = std::move(_value);
}

/*!
 * @brief This function returns a constant reference to member value
 * @return Constant reference to member value
 */
const std::vector<int32_t>& DataCollectionInt::value() const
{
    return m_value;
}

/*!
 * @brief This function returns a reference to member value
 * @return Reference to member value
 */
std::vector<int32_t>& DataCollectionInt::value()
{
    return m_value;
}
/*!
 * @brief This function copies the value in member quality
 * @param _quality New value to be copied in member quality
 */
void DataCollectionInt::quality(
        const std::vector<char>& _quality)
{
    m_quality = _quality;
}

/*!
 * @brief This function moves the value in member quality
 * @param _quality New value to be moved in member quality
 */
void DataCollectionInt::quality(
        std::vector<char>&& _quality)
{
    m_quality = std::move(_quality);
}

/*!
 * @brief This function returns a constant reference to member quality
 * @return Constant reference to member quality
 */
const std::vector<char>& DataCollectionInt::quality() const
{
    return m_quality;
}

/*!
 * @brief This function returns a reference to member quality
 * @return Reference to member quality
 */
std::vector<char>& DataCollectionInt::quality()
{
    return m_quality;
}

size_t DataCollectionInt::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool DataCollectionInt::isKeyDefined()
{
    return false;
}

void DataCollectionInt::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}

DataCollectionFloat::DataCollectionFloat()
{
    // m_value com.eprosima.idl.parser.typecode.SequenceTypeCode@17faa95

    // m_quality com.eprosima.idl.parser.typecode.SequenceTypeCode@127982


}

DataCollectionFloat::~DataCollectionFloat()
{


}

DataCollectionFloat::DataCollectionFloat(
        const DataCollectionFloat& x)
{
    m_value = x.m_value;
    m_quality = x.m_quality;
}

DataCollectionFloat::DataCollectionFloat(
        DataCollectionFloat&& x)
{
    m_value = std::move(x.m_value);
    m_quality = std::move(x.m_quality);
}

DataCollectionFloat& DataCollectionFloat::operator =(
        const DataCollectionFloat& x)
{

    m_value = x.m_value;
    m_quality = x.m_quality;

    return *this;
}

DataCollectionFloat& DataCollectionFloat::operator =(
        DataCollectionFloat&& x)
{

    m_value = std::move(x.m_value);
    m_quality = std::move(x.m_quality);

    return *this;
}

bool DataCollectionFloat::operator ==(
        const DataCollectionFloat& x) const
{

    return (m_value == x.m_value && m_quality == x.m_quality);
}

bool DataCollectionFloat::operator !=(
        const DataCollectionFloat& x) const
{
    return !(*this == x);
}

size_t DataCollectionFloat::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (atech::common::SizeTopics::GetMaxSizeDataCollectionFloat() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (atech::common::SizeTopics::GetMaxSizeDataCollectionFloat() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);




    return current_alignment - initial_alignment;
}

size_t DataCollectionFloat::getCdrSerializedSize(
        const DataCollectionFloat& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.value().size() > 0)
    {
        current_alignment += (data.value().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.quality().size() > 0)
    {
        current_alignment += (data.quality().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }




    return current_alignment - initial_alignment;
}

void DataCollectionFloat::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_value;
    scdr << m_quality;
}

void DataCollectionFloat::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_value;
    dcdr >> m_quality;
}

/*!
 * @brief This function copies the value in member value
 * @param _value New value to be copied in member value
 */
void DataCollectionFloat::value(
        const std::vector<float>& _value)
{
    m_value = _value;
}

/*!
 * @brief This function moves the value in member value
 * @param _value New value to be moved in member value
 */
void DataCollectionFloat::value(
        std::vector<float>&& _value)
{
    m_value = std::move(_value);
}

/*!
 * @brief This function returns a constant reference to member value
 * @return Constant reference to member value
 */
const std::vector<float>& DataCollectionFloat::value() const
{
    return m_value;
}

/*!
 * @brief This function returns a reference to member value
 * @return Reference to member value
 */
std::vector<float>& DataCollectionFloat::value()
{
    return m_value;
}
/*!
 * @brief This function copies the value in member quality
 * @param _quality New value to be copied in member quality
 */
void DataCollectionFloat::quality(
        const std::vector<char>& _quality)
{
    m_quality = _quality;
}

/*!
 * @brief This function moves the value in member quality
 * @param _quality New value to be moved in member quality
 */
void DataCollectionFloat::quality(
        std::vector<char>&& _quality)
{
    m_quality = std::move(_quality);
}

/*!
 * @brief This function returns a constant reference to member quality
 * @return Constant reference to member quality
 */
const std::vector<char>& DataCollectionFloat::quality() const
{
    return m_quality;
}

/*!
 * @brief This function returns a reference to member quality
 * @return Reference to member quality
 */
std::vector<char>& DataCollectionFloat::quality()
{
    return m_quality;
}

size_t DataCollectionFloat::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool DataCollectionFloat::isKeyDefined()
{
    return false;
}

void DataCollectionFloat::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}

DataCollectionDouble::DataCollectionDouble()
{
    // m_value com.eprosima.idl.parser.typecode.SequenceTypeCode@1610302

    // m_quality com.eprosima.idl.parser.typecode.SequenceTypeCode@1318ec4


}

DataCollectionDouble::~DataCollectionDouble()
{


}

DataCollectionDouble::DataCollectionDouble(
        const DataCollectionDouble& x)
{
    m_value = x.m_value;
    m_quality = x.m_quality;
}

DataCollectionDouble::DataCollectionDouble(
        DataCollectionDouble&& x)
{
    m_value = std::move(x.m_value);
    m_quality = std::move(x.m_quality);
}

DataCollectionDouble& DataCollectionDouble::operator =(
        const DataCollectionDouble& x)
{

    m_value = x.m_value;
    m_quality = x.m_quality;

    return *this;
}

DataCollectionDouble& DataCollectionDouble::operator =(
        DataCollectionDouble&& x)
{

    m_value = std::move(x.m_value);
    m_quality = std::move(x.m_quality);

    return *this;
}

bool DataCollectionDouble::operator ==(
        const DataCollectionDouble& x) const
{

    return (m_value == x.m_value && m_quality == x.m_quality);
}

bool DataCollectionDouble::operator !=(
        const DataCollectionDouble& x) const
{
    return !(*this == x);
}

size_t DataCollectionDouble::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (atech::common::SizeTopics::GetMaxSizeDataCollectionDouble() * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (atech::common::SizeTopics::GetMaxSizeDataCollectionDouble() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);




    return current_alignment - initial_alignment;
}

size_t DataCollectionDouble::getCdrSerializedSize(
        const DataCollectionDouble& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.value().size() > 0)
    {
        current_alignment += (data.value().size() * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.quality().size() > 0)
    {
        current_alignment += (data.quality().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }




    return current_alignment - initial_alignment;
}

void DataCollectionDouble::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_value;
    scdr << m_quality;
}

void DataCollectionDouble::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_value;
    dcdr >> m_quality;
}

/*!
 * @brief This function copies the value in member value
 * @param _value New value to be copied in member value
 */
void DataCollectionDouble::value(
        const std::vector<double>& _value)
{
    m_value = _value;
}

/*!
 * @brief This function moves the value in member value
 * @param _value New value to be moved in member value
 */
void DataCollectionDouble::value(
        std::vector<double>&& _value)
{
    m_value = std::move(_value);
}

/*!
 * @brief This function returns a constant reference to member value
 * @return Constant reference to member value
 */
const std::vector<double>& DataCollectionDouble::value() const
{
    return m_value;
}

/*!
 * @brief This function returns a reference to member value
 * @return Reference to member value
 */
std::vector<double>& DataCollectionDouble::value()
{
    return m_value;
}
/*!
 * @brief This function copies the value in member quality
 * @param _quality New value to be copied in member quality
 */
void DataCollectionDouble::quality(
        const std::vector<char>& _quality)
{
    m_quality = _quality;
}

/*!
 * @brief This function moves the value in member quality
 * @param _quality New value to be moved in member quality
 */
void DataCollectionDouble::quality(
        std::vector<char>&& _quality)
{
    m_quality = std::move(_quality);
}

/*!
 * @brief This function returns a constant reference to member quality
 * @return Constant reference to member quality
 */
const std::vector<char>& DataCollectionDouble::quality() const
{
    return m_quality;
}

/*!
 * @brief This function returns a reference to member quality
 * @return Reference to member quality
 */
std::vector<char>& DataCollectionDouble::quality()
{
    return m_quality;
}

size_t DataCollectionDouble::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool DataCollectionDouble::isKeyDefined()
{
    return false;
}

void DataCollectionDouble::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}

DataChar::DataChar()
{
    // m_value com.eprosima.idl.parser.typecode.SequenceTypeCode@480dd7


}

DataChar::~DataChar()
{
}

DataChar::DataChar(
        const DataChar& x)
{
    m_value = x.m_value;
}

DataChar::DataChar(
        DataChar&& x)
{
    m_value = std::move(x.m_value);
}

DataChar& DataChar::operator =(
        const DataChar& x)
{

    m_value = x.m_value;

    return *this;
}

DataChar& DataChar::operator =(
        DataChar&& x)
{

    m_value = std::move(x.m_value);

    return *this;
}

bool DataChar::operator ==(
        const DataChar& x) const
{

    return (m_value == x.m_value);
}

bool DataChar::operator !=(
        const DataChar& x) const
{
    return !(*this == x);
}

size_t DataChar::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (atech::common::SizeTopics::GetMaxSizeDataChar() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t DataChar::getCdrSerializedSize(
        const DataChar& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.value().size() > 0)
    {
        current_alignment += (data.value().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }



    return current_alignment - initial_alignment;
}

void DataChar::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_value;
}

void DataChar::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_value;}

/*!
 * @brief This function copies the value in member value
 * @param _value New value to be copied in member value
 */
void DataChar::value(
        const std::vector<char>& _value)
{
    m_value = _value;
}

/*!
 * @brief This function moves the value in member value
 * @param _value New value to be moved in member value
 */
void DataChar::value(
        std::vector<char>&& _value)
{
    m_value = std::move(_value);
}

/*!
 * @brief This function returns a constant reference to member value
 * @return Constant reference to member value
 */
const std::vector<char>& DataChar::value() const
{
    return m_value;
}

/*!
 * @brief This function returns a reference to member value
 * @return Reference to member value
 */
std::vector<char>& DataChar::value()
{
    return m_value;
}

size_t DataChar::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool DataChar::isKeyDefined()
{
    return false;
}

void DataChar::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}

DataCollectionChar::DataCollectionChar()
{
    // m_value com.eprosima.idl.parser.typecode.SequenceTypeCode@77ab81

    // m_quality com.eprosima.idl.parser.typecode.SequenceTypeCode@5fd85d


}

DataCollectionChar::~DataCollectionChar()
{


}

DataCollectionChar::DataCollectionChar(
        const DataCollectionChar& x)
{
    m_value = x.m_value;
    m_quality = x.m_quality;
}

DataCollectionChar::DataCollectionChar(
        DataCollectionChar&& x)
{
    m_value = std::move(x.m_value);
    m_quality = std::move(x.m_quality);
}

DataCollectionChar& DataCollectionChar::operator =(
        const DataCollectionChar& x)
{

    m_value = x.m_value;
    m_quality = x.m_quality;

    return *this;
}

DataCollectionChar& DataCollectionChar::operator =(
        DataCollectionChar&& x)
{

    m_value = std::move(x.m_value);
    m_quality = std::move(x.m_quality);

    return *this;
}

bool DataCollectionChar::operator ==(
        const DataCollectionChar& x) const
{

    return (m_value == x.m_value && m_quality == x.m_quality);
}

bool DataCollectionChar::operator !=(
        const DataCollectionChar& x) const
{
    return !(*this == x);
}

size_t DataCollectionChar::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < atech::common::SizeTopics::GetMaxSizeDataCollectionChar(); ++a)
    {
        current_alignment += DataChar::getMaxCdrSerializedSize(current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (atech::common::SizeTopics::GetMaxSizeDataCollectionChar() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);




    return current_alignment - initial_alignment;
}

size_t DataCollectionChar::getCdrSerializedSize(
        const DataCollectionChar& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.value().size(); ++a)
    {
        current_alignment += DataChar::getCdrSerializedSize(data.value().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.quality().size() > 0)
    {
        current_alignment += (data.quality().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }




    return current_alignment - initial_alignment;
}

void DataCollectionChar::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_value;
    scdr << m_quality;
}

void DataCollectionChar::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_value;
    dcdr >> m_quality;
}

/*!
 * @brief This function copies the value in member value
 * @param _value New value to be copied in member value
 */
void DataCollectionChar::value(
        const std::vector<DataChar>& _value)
{
    m_value = _value;
}

/*!
 * @brief This function moves the value in member value
 * @param _value New value to be moved in member value
 */
void DataCollectionChar::value(
        std::vector<DataChar>&& _value)
{
    m_value = std::move(_value);
}

/*!
 * @brief This function returns a constant reference to member value
 * @return Constant reference to member value
 */
const std::vector<DataChar>& DataCollectionChar::value() const
{
    return m_value;
}

/*!
 * @brief This function returns a reference to member value
 * @return Reference to member value
 */
std::vector<DataChar>& DataCollectionChar::value()
{
    return m_value;
}
/*!
 * @brief This function copies the value in member quality
 * @param _quality New value to be copied in member quality
 */
void DataCollectionChar::quality(
        const std::vector<char>& _quality)
{
    m_quality = _quality;
}

/*!
 * @brief This function moves the value in member quality
 * @param _quality New value to be moved in member quality
 */
void DataCollectionChar::quality(
        std::vector<char>&& _quality)
{
    m_quality = std::move(_quality);
}

/*!
 * @brief This function returns a constant reference to member quality
 * @return Constant reference to member quality
 */
const std::vector<char>& DataCollectionChar::quality() const
{
    return m_quality;
}

/*!
 * @brief This function returns a reference to member quality
 * @return Reference to member quality
 */
std::vector<char>& DataCollectionChar::quality()
{
    return m_quality;
}

size_t DataCollectionChar::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool DataCollectionChar::isKeyDefined()
{
    return false;
}

void DataCollectionChar::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}

DdsData::DdsData()
{
    // m_time_source com.eprosima.idl.parser.typecode.PrimitiveTypeCode@a3107a
    m_time_source = 0;
    // m_time_service com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1c7e1bb
    m_time_service = 0;
    // m_data_int com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@14c4973

    // m_data_float com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@feb982

    // m_data_double com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@765367

    // m_data_char com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@b0bfab


}

DdsData::~DdsData()
{






}

DdsData::DdsData(
        const DdsData& x)
{
    m_time_source = x.m_time_source;
    m_time_service = x.m_time_service;
    m_data_int = x.m_data_int;
    m_data_float = x.m_data_float;
    m_data_double = x.m_data_double;
    m_data_char = x.m_data_char;
}

DdsData::DdsData(
        DdsData&& x)
{
    m_time_source = x.m_time_source;
    m_time_service = x.m_time_service;
    m_data_int = std::move(x.m_data_int);
    m_data_float = std::move(x.m_data_float);
    m_data_double = std::move(x.m_data_double);
    m_data_char = std::move(x.m_data_char);
}

DdsData& DdsData::operator =(
        const DdsData& x)
{

    m_time_source = x.m_time_source;
    m_time_service = x.m_time_service;
    m_data_int = x.m_data_int;
    m_data_float = x.m_data_float;
    m_data_double = x.m_data_double;
    m_data_char = x.m_data_char;

    return *this;
}

DdsData& DdsData::operator =(
        DdsData&& x)
{

    m_time_source = x.m_time_source;
    m_time_service = x.m_time_service;
    m_data_int = std::move(x.m_data_int);
    m_data_float = std::move(x.m_data_float);
    m_data_double = std::move(x.m_data_double);
    m_data_char = std::move(x.m_data_char);

    return *this;
}

bool DdsData::operator ==(
        const DdsData& x) const
{

    return (m_time_source == x.m_time_source && m_time_service == x.m_time_service && m_data_int == x.m_data_int && m_data_float == x.m_data_float && m_data_double == x.m_data_double && m_data_char == x.m_data_char);
}

bool DdsData::operator !=(
        const DdsData& x) const
{
    return !(*this == x);
}

size_t DdsData::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += DataCollectionInt::getMaxCdrSerializedSize(current_alignment);
    current_alignment += DataCollectionFloat::getMaxCdrSerializedSize(current_alignment);
    current_alignment += DataCollectionDouble::getMaxCdrSerializedSize(current_alignment);
    current_alignment += DataCollectionChar::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t DdsData::getCdrSerializedSize(
        const DdsData& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += DataCollectionInt::getCdrSerializedSize(data.data_int(), current_alignment);
    current_alignment += DataCollectionFloat::getCdrSerializedSize(data.data_float(), current_alignment);
    current_alignment += DataCollectionDouble::getCdrSerializedSize(data.data_double(), current_alignment);
    current_alignment += DataCollectionChar::getCdrSerializedSize(data.data_char(), current_alignment);

    return current_alignment - initial_alignment;
}

void DdsData::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_time_source;
    scdr << m_time_service;
    scdr << m_data_int;
    scdr << m_data_float;
    scdr << m_data_double;
    scdr << m_data_char;

}

void DdsData::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_time_source;
    dcdr >> m_time_service;
    dcdr >> m_data_int;
    dcdr >> m_data_float;
    dcdr >> m_data_double;
    dcdr >> m_data_char;
}

/*!
 * @brief This function sets a value in member time_source
 * @param _time_source New value for member time_source
 */
void DdsData::time_source(
        int64_t _time_source)
{
    m_time_source = _time_source;
}

/*!
 * @brief This function returns the value of member time_source
 * @return Value of member time_source
 */
int64_t DdsData::time_source() const
{
    return m_time_source;
}

/*!
 * @brief This function returns a reference to member time_source
 * @return Reference to member time_source
 */
int64_t& DdsData::time_source()
{
    return m_time_source;
}

/*!
 * @brief This function sets a value in member time_service
 * @param _time_service New value for member time_service
 */
void DdsData::time_service(
        int64_t _time_service)
{
    m_time_service = _time_service;
}

/*!
 * @brief This function returns the value of member time_service
 * @return Value of member time_service
 */
int64_t DdsData::time_service() const
{
    return m_time_service;
}

/*!
 * @brief This function returns a reference to member time_service
 * @return Reference to member time_service
 */
int64_t& DdsData::time_service()
{
    return m_time_service;
}

/*!
 * @brief This function copies the value in member data_int
 * @param _data_int New value to be copied in member data_int
 */
void DdsData::data_int(
        const DataCollectionInt& _data_int)
{
    m_data_int = _data_int;
}

/*!
 * @brief This function moves the value in member data_int
 * @param _data_int New value to be moved in member data_int
 */
void DdsData::data_int(
        DataCollectionInt&& _data_int)
{
    m_data_int = std::move(_data_int);
}

/*!
 * @brief This function returns a constant reference to member data_int
 * @return Constant reference to member data_int
 */
const DataCollectionInt& DdsData::data_int() const
{
    return m_data_int;
}

/*!
 * @brief This function returns a reference to member data_int
 * @return Reference to member data_int
 */
DataCollectionInt& DdsData::data_int()
{
    return m_data_int;
}
/*!
 * @brief This function copies the value in member data_float
 * @param _data_float New value to be copied in member data_float
 */
void DdsData::data_float(
        const DataCollectionFloat& _data_float)
{
    m_data_float = _data_float;
}

/*!
 * @brief This function moves the value in member data_float
 * @param _data_float New value to be moved in member data_float
 */
void DdsData::data_float(
        DataCollectionFloat&& _data_float)
{
    m_data_float = std::move(_data_float);
}

/*!
 * @brief This function returns a constant reference to member data_float
 * @return Constant reference to member data_float
 */
const DataCollectionFloat& DdsData::data_float() const
{
    return m_data_float;
}

/*!
 * @brief This function returns a reference to member data_float
 * @return Reference to member data_float
 */
DataCollectionFloat& DdsData::data_float()
{
    return m_data_float;
}
/*!
 * @brief This function copies the value in member data_double
 * @param _data_double New value to be copied in member data_double
 */
void DdsData::data_double(
        const DataCollectionDouble& _data_double)
{
    m_data_double = _data_double;
}

/*!
 * @brief This function moves the value in member data_double
 * @param _data_double New value to be moved in member data_double
 */
void DdsData::data_double(
        DataCollectionDouble&& _data_double)
{
    m_data_double = std::move(_data_double);
}

/*!
 * @brief This function returns a constant reference to member data_double
 * @return Constant reference to member data_double
 */
const DataCollectionDouble& DdsData::data_double() const
{
    return m_data_double;
}

/*!
 * @brief This function returns a reference to member data_double
 * @return Reference to member data_double
 */
DataCollectionDouble& DdsData::data_double()
{
    return m_data_double;
}
/*!
 * @brief This function copies the value in member data_char
 * @param _data_char New value to be copied in member data_char
 */
void DdsData::data_char(
        const DataCollectionChar& _data_char)
{
    m_data_char = _data_char;
}

/*!
 * @brief This function moves the value in member data_char
 * @param _data_char New value to be moved in member data_char
 */
void DdsData::data_char(
        DataCollectionChar&& _data_char)
{
    m_data_char = std::move(_data_char);
}

/*!
 * @brief This function returns a constant reference to member data_char
 * @return Constant reference to member data_char
 */
const DataCollectionChar& DdsData::data_char() const
{
    return m_data_char;
}

/*!
 * @brief This function returns a reference to member data_char
 * @return Reference to member data_char
 */
DataCollectionChar& DdsData::data_char()
{
    return m_data_char;
}

size_t DdsData::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;









    return current_align;
}

bool DdsData::isKeyDefined()
{
    return false;
}

void DdsData::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
          
}