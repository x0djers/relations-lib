cmake_minimum_required(VERSION 3.10)

set(LIBRARY_NAME relations)
set(LIBRARY_VERSION 1.0.0)

project(${LIBRARY_NAME} VERSION ${LIBRARY_VERSION} LANGUAGES C DESCRIPTION ${LIBRARY_DESCRIPTION})

set(SOURCE_DIR src)
set(INCLUDE_DIR include)
set(OUTPUT_DIR dist)
set(LIB_OUTPUT_DIR ${OUTPUT_DIR}/lib)
set(HEADER_OUTPUT_DIR ${OUTPUT_DIR}/include)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${LIB_OUTPUT_DIR})

file(GLOB_RECURSE SOURCES "${SOURCE_DIR}/*.c")

add_library(${LIBRARY_NAME} STATIC ${SOURCES})

target_include_directories(${LIBRARY_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/${INCLUDE_DIR}>
        $<INSTALL_INTERFACE:${INCLUDE_DIR}>
        PRIVATE
        ${CMAKE_SOURCE_DIR}/${SOURCE_DIR}
)

target_compile_options(${LIBRARY_NAME} PRIVATE
        -Wall
        -Wextra
        -Werror
)

add_custom_command(TARGET ${LIBRARY_NAME} PRE_BUILD
        COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/${HEADER_OUTPUT_DIR}
        COMMENT "Creating ${HEADER_OUTPUT_DIR} directory"
)

add_custom_command(TARGET ${LIBRARY_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/${INCLUDE_DIR}
        ${CMAKE_BINARY_DIR}/${HEADER_OUTPUT_DIR}
        COMMENT "Copying ALL header files from ${INCLUDE_DIR}/ to ${HEADER_OUTPUT_DIR}/"
)

install(DIRECTORY ${INCLUDE_DIR}/ DESTINATION ${INCLUDE_DIR})
install(TARGETS ${LIBRARY_NAME} DESTINATION lib)

message(STATUS "Project: ${LIBRARY_NAME} v${LIBRARY_VERSION}")
message(STATUS "Library will be built to: ${CMAKE_BINARY_DIR}/${LIB_OUTPUT_DIR}/")
message(STATUS "Headers will be copied to: ${CMAKE_BINARY_DIR}/${HEADER_OUTPUT_DIR}/")
message(STATUS "Source files found: ${SOURCES}")