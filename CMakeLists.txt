cmake_minimum_required(VERSION 3.26)
project(csc231_graphics_project1)

set(CMAKE_CXX_STANDARD 17)

# backend team source files
add_library(canvas
        style.cpp
        canvas.cpp
        parrot.cpp
        point.cpp
        svg.cpp
)

# main() for testing
add_executable(backend
        backend-main.cpp
        polyline.cpp
)
target_link_libraries(backend PUBLIC canvas)


# frontend team source files
add_library(shapes
        shape.cpp
        rectangular-prism.cpp
        ellipse.cpp
        flower.cpp
        heart.cpp
        parallelogram.cpp
        polygon.cpp
        polyline.cpp
        rectangle.cpp
        triangle.cpp
        pentagon.cpp
        pentagon.h
        star.cpp
)
target_link_libraries(shapes PUBLIC canvas)

add_executable(frontend
        frontend-main.cpp
)
target_link_libraries(frontend PUBLIC shapes)
