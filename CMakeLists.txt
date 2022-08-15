cmake_minimum_required(VERSION 3.11)

set(CMAKE_INCLUDE_CURRENT_DIR on)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

include(GNUInstallDirs)
include(FindPkgConfig)
project(VulkanExample LANGUAGES CXX)

add_subdirectory(example_setup)
add_subdirectory(example_triangle)