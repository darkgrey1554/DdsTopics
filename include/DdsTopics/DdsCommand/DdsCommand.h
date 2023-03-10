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
 * @file DdsCommand.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_DDSCOMMAND_H_
#define _FAST_DDS_GENERATED_DDSCOMMAND_H_


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
#if defined(DdsCommand_SOURCE)
#define DdsCommand_DllAPI __declspec( dllexport )
#else
#define DdsCommand_DllAPI __declspec( dllimport )
#endif // DdsCommand_SOURCE
#else
#define DdsCommand_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define DdsCommand_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


/*!
 * @brief This class represents the structure DdsCommand defined by the user in the IDL file.
 * @ingroup DDSCOMMAND
 */
class DdsCommand
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport DdsCommand();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~DdsCommand();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object DdsCommand that will be copied.
     */
    eProsima_user_DllExport DdsCommand(
            const DdsCommand& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object DdsCommand that will be copied.
     */
    eProsima_user_DllExport DdsCommand(
            DdsCommand&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object DdsCommand that will be copied.
     */
    eProsima_user_DllExport DdsCommand& operator =(
            const DdsCommand& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object DdsCommand that will be copied.
     */
    eProsima_user_DllExport DdsCommand& operator =(
            DdsCommand&& x);

    /*!
     * @brief Comparison operator.
     * @param x DdsCommand object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const DdsCommand& x) const;

    /*!
     * @brief Comparison operator.
     * @param x DdsCommand object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const DdsCommand& x) const;

    /*!
     * @brief This function sets a value in member id_source
     * @param _id_source New value for member id_source
     */
    eProsima_user_DllExport void id_source(
            uint32_t _id_source);

    /*!
     * @brief This function returns the value of member id_source
     * @return Value of member id_source
     */
    eProsima_user_DllExport uint32_t id_source() const;

    /*!
     * @brief This function returns a reference to member id_source
     * @return Reference to member id_source
     */
    eProsima_user_DllExport uint32_t& id_source();

    /*!
     * @brief This function sets a value in member id_target
     * @param _id_target New value for member id_target
     */
    eProsima_user_DllExport void id_target(
            uint32_t _id_target);

    /*!
     * @brief This function returns the value of member id_target
     * @return Value of member id_target
     */
    eProsima_user_DllExport uint32_t id_target() const;

    /*!
     * @brief This function returns a reference to member id_target
     * @return Reference to member id_target
     */
    eProsima_user_DllExport uint32_t& id_target();

    /*!
     * @brief This function sets a value in member cmd_time
     * @param _cmd_time New value for member cmd_time
     */
    eProsima_user_DllExport void cmd_time(
            int64_t _cmd_time);

    /*!
     * @brief This function returns the value of member cmd_time
     * @return Value of member cmd_time
     */
    eProsima_user_DllExport int64_t cmd_time() const;

    /*!
     * @brief This function returns a reference to member cmd_time
     * @return Reference to member cmd_time
     */
    eProsima_user_DllExport int64_t& cmd_time();

    /*!
     * @brief This function sets a value in member cmd_code
     * @param _cmd_code New value for member cmd_code
     */
    eProsima_user_DllExport void cmd_code(
            uint32_t _cmd_code);

    /*!
     * @brief This function returns the value of member cmd_code
     * @return Value of member cmd_code
     */
    eProsima_user_DllExport uint32_t cmd_code() const;

    /*!
     * @brief This function returns a reference to member cmd_code
     * @return Reference to member cmd_code
     */
    eProsima_user_DllExport uint32_t& cmd_code();

    /*!
     * @brief This function copies the value in member cmd_parameter
     * @param _cmd_parameter New value to be copied in member cmd_parameter
     */
    eProsima_user_DllExport void cmd_parameter(
            const std::array<char, 256>& _cmd_parameter);

    /*!
     * @brief This function moves the value in member cmd_parameter
     * @param _cmd_parameter New value to be moved in member cmd_parameter
     */
    eProsima_user_DllExport void cmd_parameter(
            std::array<char, 256>&& _cmd_parameter);

    /*!
     * @brief This function returns a constant reference to member cmd_parameter
     * @return Constant reference to member cmd_parameter
     */
    eProsima_user_DllExport const std::array<char, 256>& cmd_parameter() const;

    /*!
     * @brief This function returns a reference to member cmd_parameter
     * @return Reference to member cmd_parameter
     */
    eProsima_user_DllExport std::array<char, 256>& cmd_parameter();

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
            const DdsCommand& data,
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

    uint32_t m_id_source;
    uint32_t m_id_target;
    int64_t m_cmd_time;
    uint32_t m_cmd_code;
    std::array<char, 256> m_cmd_parameter;
};

#endif // _FAST_DDS_GENERATED_DDSCOMMAND_H_