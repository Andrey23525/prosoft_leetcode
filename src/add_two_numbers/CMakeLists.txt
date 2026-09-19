add_library(add_two_numbers STATIC add_two_numbers.cpp)
target_precompile_headers(add_two_numbers PRIVATE ${CMAKE_SOURCE_DIR}/shared/stdafx.h)

