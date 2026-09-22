cmake_minimum_required(VERSION 3.13)
project(abslutils LANGUAGES CXX)

find_package(pybind11 REQUIRED)
find_package(absl REQUIRED)
pybind11_add_module(abslutils ../src/abslutils.cpp)
target_include_directories(abslutils PUBLIC ${Qt5Core_PRIVATE_INCLUDE_DIRS})
target_link_libraries(abslutils PUBLIC absl::synchronization)
