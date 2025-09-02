cmake_minimum_required(VERSION 3.15)
project(hftpp VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

option(BUILD_TESTS "Build tests" ON)

add_subdirectory(src)

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(tests)
endif()

install(TARGETS hftpp
  RUNTIME DESTINATION bin
)
