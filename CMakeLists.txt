cmake_minimum_required(VERSION 3.26)
project(csc231_graphics_project1)

set(CMAKE_CXX_STANDARD 17)

add_executable(csc231_graphics_project1
        main.cpp
        shape.cpp
        triangle.cpp
        polygon.cpp
        ellipse.cpp
)
