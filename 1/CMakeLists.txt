cmake_minimum_required(VERSION 3.10)
project(laba1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Установка Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.0
  TLS_VERIFY false
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Основная библиотека и исполняемый файл
add_library(${CMAKE_PROJECT_NAME}_lib src/solution.cpp)
target_include_directories(${CMAKE_PROJECT_NAME}_lib PUBLIC include)

add_executable(${CMAKE_PROJECT_NAME}_exe main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME}_exe PRIVATE ${CMAKE_PROJECT_NAME}_lib)

# Тесты
enable_testing()

add_executable(tests test/test.cpp)
target_include_directories(tests PRIVATE include)
target_link_libraries(tests ${CMAKE_PROJECT_NAME}_lib gtest_main)

add_test(NAME Laba1Tests COMMAND tests)