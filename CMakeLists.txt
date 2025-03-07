cmake_minimum_required(VERSION 3.30)
project(solutions)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

# Set the default runtime output directory.
# This works well for single-configuration generators.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# If you want to recursively search for all .cpp files in your project:
file(GLOB_RECURSE SOLUTIONS "${PROJECT_SOURCE_DIR}/*.cpp")

# Create an executable target for each .cpp file.
foreach(source_file ${SOLUTIONS})

    # Extract a target name from the file name (without directory/extension).
    get_filename_component(exe_name ${source_file} NAME_WE)
    message(STATUS "Adding target ${exe_name} from ${source_file}")
    add_executable(${exe_name} ${source_file})

    # Explicitly set the runtime output directory for the target.
    set_target_properties(${exe_name} PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
    )

    # For multi-configuration generators, uncomment and modify as needed:
    # set_target_properties(${exe_name} PROPERTIES
    #     RUNTIME_OUTPUT_DIRECTORY_DEBUG   ${CMAKE_BINARY_DIR}/bin/Debug
    #     RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/bin/Release
    # )
endforeach()