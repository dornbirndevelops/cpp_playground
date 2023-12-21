find_package(GTest REQUIRED)

add_library(mylib STATIC)

target_sources(mylib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include/mylib.hpp
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src/mylib.cpp
)

target_include_directories(mylib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(mylib_test)

target_sources(mylib_test
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/test/mylib_test.cpp
)

target_link_libraries(mylib_test
    PRIVATE
        mylib
        GTest::gtest
        GTest::gtest_main
)
