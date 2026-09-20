cmake_minimum_required(VERSION 3.16)
project(LeetCode C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/setup_googletests.cmake)

add_library(leetcode_stdafx INTERFACE)
target_include_directories(leetcode_stdafx INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_precompile_headers(leetcode_stdafx INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include/shared/stdafx.h)

add_subdirectory(src/two_sum)
add_subdirectory(tests/two_sum)

add_subdirectory(src/binary_search)
add_subdirectory(tests/binary_search)

add_subdirectory(src/add_two_numbers)
add_subdirectory(tests/add_two_numbers)

add_subdirectory(src/max_points_on_a_line)
add_subdirectory(tests/max_points_on_a_line)
