add_library(two_sum STATIC two_sum.cpp)
target_precompile_headers(two_sum PRIVATE ${CMAKE_SOURCE_DIR}/shared/stdafx.h)

