# @file CMakeLists.txt
#
# CMake files for the add project

# Can be run by any version of CMake >= this
cmake_minimum_required(VERSION 3.29)

# Project info
project(Add VERSION 1.0.0)

# testAdd executable
add_executable(testAdd testAdd.cpp add.cpp)
target_compile_features(testAdd PRIVATE cxx_std_17)

# testAddZeroZero executable
add_executable(testAddZeroZero testAddZeroZero.cpp add.cpp)
target_compile_features(testAddZeroZero PRIVATE cxx_std_17)

# testAddZeroOne executable
add_executable(testAddZeroOne testAddZeroOne.cpp add.cpp)
target_compile_features(testAddZeroOne PRIVATE cxx_std_17)
