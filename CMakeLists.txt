cmake_minimum_required(VERSION 3.0)
project(toolbox CXX)
set(CMAKE_BUILD_TYPE Release)

# version string 0.1
set(VERSION "0.1" CACHE STRING "version" FORCE)

enable_testing()

# use c++14 standard
set(CMAKE_CXX_STANDARD 14)

# if g++ show all warnings
if(CMAKE_COMPILER_IS_GNUCXX)
  set(CMAKE_CXX_FLAGS "-w")
endif(CMAKE_COMPILER_IS_GNUCXX)

option(BUILD_TESTS "Set ON to enable tests" OFF)

add_subdirectory(src)

#add_library(toolbox INTERFACE)
#target_include_directories(toolbox INTERFACE
#  $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
#  $<INSTALL_INTERFACE:include>)
#
#include(CMakePackageConfigHelpers)
#set(PROJECT_CMAKE_DIR "lib/cmake/toolbox")
#set(version_config "${PROJECT_BINARY_DIR}/toolbox-config-version.cmake")
#set(project_config "${PROJECT_BINARY_DIR}/toolbox-config.cmake")
#set(targets_export_name toolbox-targets)
#
#write_basic_package_version_file(
#  ${version_config}
#  VERSION ${VERSION}
#  COMPATIBILITY AnyNewerVersion)
#
#configure_package_config_file(
#  ${PROJECT_SOURCE_DIR}/toolbox-config.cmake.in
#  ${project_config}
#  INSTALL_DESTINATION ${PROJECT_CMAKE_DIR})
#
#export(TARGETS toolbox FILE
#  ${PROJECT_BINARY_DIR}/${targets_export_name}.cmake)
#
#install(
#  FILES ${project_config} ${version_config}
#  DESTINATION ${PROJECT_CMAKE_DIR})
#
#install(
#  EXPORT ${targets_export_name}
#  DESTINATION ${PROJECT_CMAKE_DIR})
#
#install(
#  TARGETS toolbox
#  EXPORT ${targets_export_name}
#  DESTINATION lib)
#
#install(
#  DIRECTORY ${PROJECT_SOURCE_DIR}/include
#  DESTINATION ${CMAKE_INSTALL_PREFIX})

add_subdirectory(test)
