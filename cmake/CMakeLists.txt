cmake_minimum_required(VERSION 3.13)
project(qtinterval LANGUAGES CXX)

find_package(pybind11 REQUIRED)
find_package(Qt5Core REQUIRED)
pybind11_add_module(qtinterval ../src/qtinterval.cpp)
target_include_directories(qtinterval PUBLIC ${Qt5Core_PRIVATE_INCLUDE_DIRS})
target_link_libraries(qtinterval PUBLIC Qt5::Core)
