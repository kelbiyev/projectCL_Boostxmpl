cmake_minimum_required(VERSION 3.29)
project(projectCL_Boostxmpl)

set(CMAKE_CXX_STANDARD 20)

FIND_PACKAGE(Boost 1.40 COMPONENTS program_options REQUIRED)
INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})
add_executable(projectCL_Boostxmpl main.cpp)
TARGET_LINK_LIBRARIES(projectCL_Boostxmpl Boost::program_options)
