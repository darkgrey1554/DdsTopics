
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was Config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/c:/Program Files" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

if(fastrtps_FOUND)
	if(NOT (fastrtps_VERSION VERSION_EQUAL 2.7.0))
		message(WARNING "Using FastDDS version: ${fastrtps_VERSION}, DdsTopics configured for version 2.7.0")
	endif()
else()
	find_package(fastrtps 2.7.0 EXACT)
	if(NOT fastrtps_FOUND)
		find_package(fastrtps REQURED)
		message(WARNING "Using FastDDS version: ${fastrtps_VERSION}, DdsTopics configured for version 2.7.0")
	endif()
endif()

include(${CMAKE_CURRENT_LIST_DIR}/DdsTopicsTargets.cmake)
