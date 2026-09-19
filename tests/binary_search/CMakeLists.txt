add_executable(test_binary_search test_binary_search.cpp)

target_include_directories(test_binary_search PRIVATE ${CMAKE_SOURCE_DIR}/src/binary_search)
target_link_libraries(test_binary_search PRIVATE
        binary_search
        GTest::gtest_main
)

include(GoogleTest)

gtest_discover_tests(test_binary_search)
