cmake_minimum_required (VERSION 2.6)
project (BigInt)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic-errors")

add_executable(playground src/playground.cpp src/BigInt.hpp)
