cmake_minimum_required(VERSION 3.13)
project(qtinterval LANGUAGES CXX)

add_subdirectory(cmake)

execute_process(
  COMMAND ${PYTHON_EXECUTABLE} -c "from distutils.sysconfig import get_python_lib; from os.path import relpath; print(relpath(get_python_lib(1,prefix='${CMAKE_INSTALL_PREFIX}'),'${CMAKE_INSTALL_PREFIX}'))"
  OUTPUT_VARIABLE PYTHON_INSTALL_DIR OUTPUT_STRIP_TRAILING_WHITESPACE
  WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")

install(TARGETS qtinterval DESTINATION ${PYTHON_INSTALL_DIR})
