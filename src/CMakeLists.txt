# building and installing DDSFormat
# default installation path on Linux:	/usr/local/atech
# default installation path on Windows: c:/Program Files/atech


include(GNUInstallDirs)
include(CMakePackageConfigHelpers)
set(ATECH_DIR "atech")
set(PATH_INSTALL  "${ATECH_DIR}/${PROJECT_NAME}-${PROJECT_VERSION}")
set(INCLUDE_DDSFORMAT_TARGETS "include(\${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}Targets.cmake)")

# FastDDS package connection

find_package(fastrtps ${VERSION_DDS} EXACT)
if(NOT fastrtps_FOUND)
	message(WARNING "FastDDS version: ${VERSION_DDS} not found")
	find_package(fastrtps)
	if(NOT fastrtps_FOUND)
		message(FATAL_ERROR "FastDDS not found. Install the FastDDS resource.")
	endif()
endif()

message(STATUS "Using FastDDS version: ${fastrtps_VERSION}")



# take source files
file(GLOB_RECURSE ALL_HEADERS "${CMAKE_SOURCE_DIR}/include/*.h")

file(GLOB_RECURSE ALL_SOURCES 
	"${CMAKE_SOURCE_DIR}/src/*.cxx" 
	"${CMAKE_SOURCE_DIR}/src/*.cpp" 
)

# Create library

add_library(${PROJECT_NAME} STATIC ${ALL_HEADERS} ${ALL_SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC  $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>)
target_link_libraries(${PROJECT_NAME} PUBLIC fastrtps fastcdr)

set_target_properties(${PROJECT_NAME} PROPERTIES RELEASE_POSTFIX -${PROJECT_VERSION})
set_target_properties(${PROJECT_NAME} PROPERTIES DEBUG_POSTFIX d-${PROJECT_VERSION})
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME lib${PROJECT_NAME})
set_target_properties(${PROJECT_NAME} PROPERTIES
	COMPILE_PDB_NAME_DEBUG "lib${PROJECT_NAME}d-${PROJECT_VERSION}"
)

set_target_properties(${PROJECT_NAME} PROPERTIES
            PDB_NAME_DEBUG "${PROJECT_NAME}d-${PROJECT_VERSION}"
            COMPILE_PDB_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/symbols"
)

include(${CMAKE_SOURCE_DIR}/cmake/InstallPackage.cmake)




