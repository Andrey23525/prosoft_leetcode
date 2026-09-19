add_library(binary_search STATIC binary_search.cpp)
target_precompile_headers(binary_search PRIVATE ${CMAKE_SOURCE_DIR}/shared/stdafx.h)

