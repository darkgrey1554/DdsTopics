install(
	TARGETS ${PROJECT_NAME}
	EXPORT  ${PROJECT_NAME}Targets
	ARCHIVE DESTINATION ${PATH_INSTALL}/lib
	LIBRARY DESTINATION  ${PATH_INSTALL}/lib
	INCLUDES DESTINATION  ${PATH_INSTALL}/include
)

install(EXPORT ${PROJECT_NAME}Targets
	DESTINATION ${PATH_INSTALL}/cmake
	FILE  ${PROJECT_NAME}Targets.cmake
)

install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME}
    DESTINATION ${PATH_INSTALL}/include
    COMPONENT headers
    FILES_MATCHING
    PATTERN "*.h"
    PATTERN "*.hpp"
)

# Create file config

configure_package_config_file(${CMAKE_SOURCE_DIR}/cmake/Config.cmake.in
   ${CMAKE_SOURCE_DIR}/cmake/${PROJECT_NAME}Config.cmake
	INSTALL_DESTINATION ${CMAKE_SOURCE_DIR}/cmake
)

# Create file version

write_basic_package_version_file(
  ${CMAKE_SOURCE_DIR}/cmake/${PROJECT_NAME}ConfigVersion.cmake
  VERSION ${PROJECT_VERSION}
  COMPATIBILITY AnyNewerVersion
)

install(FILES ${CMAKE_SOURCE_DIR}/cmake/${PROJECT_NAME}ConfigVersion.cmake
	${CMAKE_SOURCE_DIR}/cmake/${PROJECT_NAME}Config.cmake
    DESTINATION ${PATH_INSTALL}/cmake
)

if(MSVC OR MSVC_IDE)
	get_target_property(PDB_FILE ${PROJECT_NAME} COMPILE_PDB_NAME_DEBUG)
    if(PDB_FILE)
        get_target_property(PDB_DIR ${PROJECT_NAME} COMPILE_PDB_OUTPUT_DIRECTORY_DEBUG)
        set(PDB_FILE "${PDB_DIR}/${PDB_FILE}.pdb")
    endif()
        
    if(PDB_FILE)
        install(FILES ${PDB_FILE}
            DESTINATION ${PATH_INSTALL}/lib
            COMPONENT symbols
            CONFIGURATIONS Debug
            )
    endif()
endif()