cmake_minimum_required(VERSION 4.0)
project(solutions LANGUAGES CXX)

option(ENABLE_AGGREGATE_TARGETS "Create <prefix>_all targets that build all solutions" OFF)

# C++ STANDARD
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# PUT RUNTIME BINARIES UNDER THE BUILD DIRECTORY:
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# BETTER WARNINGS ACROSS COMPILERS
add_library(project_warnings INTERFACE)
target_compile_options(project_warnings INTERFACE
        $<$<CXX_COMPILER_ID:GNU,Clang>:-Wall -Wextra -Wpedantic>
        $<$<CXX_COMPILER_ID:MSVC>:/W4 /permissive->
)
target_compile_features(project_warnings INTERFACE cxx_std_20)

# HELPER FUNCTION TO MAKE ONE EXECUTABLE PER CPP FILE (RECURSIVELY)
# EXECUTABLE NAMES ARE PREFIX + RELATIVE-PATH AND UNDERSCORES
function(add_executables_from_dir DIR PREFIX)
    if (NOT IS_DIRECTORY "${DIR}")
        message(STATUS "Skipping missing dir: ${DIR}")
        return()
    endif ()

    # RESCAN WHEN FILE CHANGES (CMAKE >= 3.12)
    file(GLOB_RECURSE SRCS CONFIGURE_DEPENDS "${DIR}/*.cpp")

    set(local_targets "")
    foreach (src IN LISTS SRCS)
        # CREATE TARGET NAME (FOR EXAMPLE: "lc_two_sum")
        file(RELATIVE_PATH rel "${DIR}" "${src}")
        string(REPLACE "/" "_" rel_noslash "${rel}")
        get_filename_component(base "${rel_noslash}" NAME_WE)
        set(exe "${PREFIX}_${base}")

        add_executable(${exe} "${src}")
        target_link_libraries(${exe} PRIVATE project_warnings)
        target_include_directories(${exe} PRIVATE "${DIR}")

        # PUT EACH SET OF BINARIES IN ITS OWN SUBFOLDER
        set_target_properties(${exe} PROPERTIES
                RUNTIME_OUTPUT_DIRECTORY "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${PREFIX}"
        )

        list(APPEND local_targets ${exe})
    endforeach ()

    if (ENABLE_AGGREGATE_TARGETS AND local_targets)
        add_custom_target("${PREFIX}_all" DEPENDS ${local_targets})
    endif ()
endfunction()

# ONE CALL PER ROOT DIRECTORY
add_executables_from_dir("${CMAKE_SOURCE_DIR}/lc" "lc")
add_executables_from_dir("${CMAKE_SOURCE_DIR}/cw" "cw")
