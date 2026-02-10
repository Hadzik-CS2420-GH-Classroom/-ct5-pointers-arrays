cmake_minimum_required(VERSION 3.20)
project(ct5-pointers-arrays LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/pointers_and_arrays.cpp
    src/pointers_as_arrays.cpp
    src/arrays_as_pointers.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE include)
