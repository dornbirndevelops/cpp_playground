cmake_minimum_required(VERSION 3.27) # for debugging
project(cpp_playground)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(mylib)
add_subdirectory(myapp)
