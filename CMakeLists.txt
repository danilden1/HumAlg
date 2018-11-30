cmake_minimum_required(VERSION 3.9)
project(HumAlg)

set(CMAKE_Cxx_STANDARD 11)

add_library(HumAlg_lib STATIC HumAlg_lib)


add_executable(HumAlg HumAlg_main.cpp)

add_executable(HumAlg_test test/HumAlg_test.cpp)

target_link_libraries(HumAlg HumAlg_lib)
target_link_libraries(HumAlg_test HumAlg_lib)

add_test(NAME HATest COMMAND HumAlg_test)



