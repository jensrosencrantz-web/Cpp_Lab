cmake_minimum_required(VERSION 3.10)

project(lab1)

find_package(OpenCV REQUIRED)

add_executable(lab1 main.cpp)

target_include_directories(lab1 PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(lab1 PRIVATE ${OpenCV_LIBS})