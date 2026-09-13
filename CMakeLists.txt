cmake_minimum_required(VERSION 3.25)

project(coding_problems LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(
    GLOB_RECURSE PROBLEM_SOURCES
    CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/src/*/main.cpp"
)

foreach(SOURCE_FILE IN LISTS PROBLEM_SOURCES)
    file(RELATIVE_PATH RELATIVE_PATH "${CMAKE_SOURCE_DIR}/src" "${SOURCE_FILE}")
    get_filename_component(PROBLEM_DIR "${RELATIVE_PATH}" DIRECTORY)

    string(REPLACE "/" "-" TARGET_NAME "${PROBLEM_DIR}")

    add_executable("${TARGET_NAME}" "${SOURCE_FILE}")

    target_include_directories(
        "${TARGET_NAME}"
        PRIVATE
            "${CMAKE_SOURCE_DIR}/include"
    )

    target_compile_options(
        "${TARGET_NAME}"
        PRIVATE
            -Wall
            -Wextra
            -Wpedantic
    )
endforeach()
