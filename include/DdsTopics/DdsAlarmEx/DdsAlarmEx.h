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
 * @file DdsAlarmEx.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_DDSALARMEX_H_
#define _FAST_DDS_GENERATED_DDSALARMEX_H_


#include <fastrtps/utils/fixed_size_string.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>
#include <DdsTopics/SizeTopics.h>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(DdsAlarmEx_SOURCE)
#define DdsAlarmEx_DllAPI __declspec( dllexport )
#else
#define DdsAlarmEx_DllAPI __declspec( dllimport )
#endif // DdsAlarmEx_SOURCE
#else
#define DdsAlarmEx_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define DdsAlarmEx_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


/*!
 * @brief This class represents the structure Alarm defined by the user in the IDL file.
 * @ingroup DdsAlarmEx
 */
class Alarm
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport Alarm();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~Alarm();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object Alarm that will be copied.
     */
    eProsima_user_DllExport Alarm(
            const Alarm& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object Alarm that will be copied.
     */
    eProsima_user_DllExport Alarm(
            Alarm&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object Alarm that will be copied.
     */
    eProsima_user_DllExport Alarm& operator =(
            const Alarm& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object Alarm that will be copied.
     */
    eProsima_user_DllExport Alarm& operator =(
            Alarm&& x);

    /*!
     * @brief Comparison operator.
     * @param x Alarm object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const Alarm& x) const;

    /*!
     * @brief Comparison operator.
     * @param x Alarm object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const Alarm& x) const;

    /*!
     * @brief This function sets a value in member time_source
     * @param _time_source New value for member time_source
     */
    eProsima_user_DllExport void time_source(
            int64_t _time_source);

    /*!
     * @brief This function returns the value of member time_source
     * @return Value of member time_source
     */
    eProsima_user_DllExport int64_t time_source() const;

    /*!
     * @brief This function returns a reference to member time_source
     * @return Reference to member time_source
     */
    eProsima_user_DllExport int64_t& time_source();

    /*!
     * @brief This function sets a value in member id_tag
     * @param _id_tag New value for member id_tag
     */
    eProsima_user_DllExport void id_tag(
            uint32_t _id_tag);

    /*!
     * @brief This function returns the value of member id_tag
     * @return Value of member id_tag
     */
    eProsima_user_DllExport uint32_t id_tag() const;

    /*!
     * @brief This function returns a reference to member id_tag
     * @return Reference to member id_tag
     */
    eProsima_user_DllExport uint32_t& id_tag();

    /*!
     * @brief This function sets a value in member value
     * @param _value New value for member value
     */
    eProsima_user_DllExport void value(
            char _value);

    /*!
     * @brief This function returns the value of member value
     * @return Value of member value
     */
    eProsima_user_DllExport char value() const;

    /*!
     * @brief This function returns a reference to member value
     * @return Reference to member value
     */
    eProsima_user_DllExport char& value();

    /*!
     * @brief This function sets a value in member quality
     * @param _quality New value for member quality
     */
    eProsima_user_DllExport void quality(
            char _quality);

    /*!
     * @brief This function returns the value of member quality
     * @return Value of member quality
     */
    eProsima_user_DllExport char quality() const;

    /*!
     * @brief This function returns a reference to member quality
     * @return Reference to member quality
     */
    eProsima_user_DllExport char& quality();


    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const Alarm& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    int64_t m_time_source;
    uint32_t m_id_tag;
    char m_value;
    char m_quality;
};
/*!
 * @brief This class represents the structure DdsAlarmEx defined by the user in the IDL file.
 * @ingroup DdsAlarmEx
 */
class DdsAlarmEx
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport DdsAlarmEx();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~DdsAlarmEx();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object DdsAlarmEx that will be copied.
     */
    eProsima_user_DllExport DdsAlarmEx(
            const DdsAlarmEx& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object DdsAlarmEx that will be copied.
     */
    eProsima_user_DllExport DdsAlarmEx(
            DdsAlarmEx&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object DdsAlarmEx that will be copied.
     */
    eProsima_user_DllExport DdsAlarmEx& operator =(
            const DdsAlarmEx& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object DdsAlarmEx that will be copied.
     */
    eProsima_user_DllExport DdsAlarmEx& operator =(
            DdsAlarmEx&& x);

    /*!
     * @brief Comparison operator.
     * @param x DdsAlarmEx object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const DdsAlarmEx& x) const;

    /*!
     * @brief Comparison operator.
     * @param x DdsAlarmEx object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const DdsAlarmEx& x) const;

    /*!
     * @brief This function sets a value in member time_service
     * @param _time_service New value for member time_service
     */
    eProsima_user_DllExport void time_service(
            int64_t _time_service);

    /*!
     * @brief This function returns the value of member time_service
     * @return Value of member time_service
     */
    eProsima_user_DllExport int64_t time_service() const;

    /*!
     * @brief This function returns a reference to member time_service
     * @return Reference to member time_service
     */
    eProsima_user_DllExport int64_t& time_service();

    /*!
     * @brief This function copies the value in member alarms
     * @param _alarms New value to be copied in member alarms
     */
    eProsima_user_DllExport void alarms(
            const std::vector<Alarm>& _alarms);

    /*!
     * @brief This function moves the value in member alarms
     * @param _alarms New value to be moved in member alarms
     */
    eProsima_user_DllExport void alarms(
            std::vector<Alarm>&& _alarms);

    /*!
     * @brief This function returns a constant reference to member alarms
     * @return Constant reference to member alarms
     */
    eProsima_user_DllExport const std::vector<Alarm>& alarms() const;

    /*!
     * @brief This function returns a reference to member alarms
     * @return Reference to member alarms
     */
    eProsima_user_DllExport std::vector<Alarm>& alarms();

    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const DdsAlarmEx& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    int64_t m_time_service;
    std::vector<Alarm> m_alarms;
};

#endif // _FAST_DDS_GENERATED_DDSALARMEX_H_