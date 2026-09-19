cmake_minimum_required(VERSION 3.15)
project(LeetCode C CXX)

include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/setup_googletests.cmake)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src/two_sum)
add_subdirectory(tests/two_sum)
add_subdirectory(src/binary_search)
add_subdirectory(tests/binary_search)
add_subdirectory(src/add_two_numbers)
add_subdirectory(tests/add_two_numbers)
