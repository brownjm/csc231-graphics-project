cmake_minimum_required(VERSION 3.26)
project(csc231_graphics_project1)

set(CMAKE_CXX_STANDARD 17)

add_executable(csc231_graphics_project1
        main.cpp
        canvas.cpp
        ellipse.cpp
        flower.cpp
        parallelogram.cpp
        point.cpp
        polygon.cpp
        polyline.cpp
        rectangle.cpp
        shape.cpp
        triangle.cpp
)
