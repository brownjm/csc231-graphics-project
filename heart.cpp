// Created by Lucas Carter on 3/18/24.
#include "heart.h"
#include "triangle.h"
#include "ellipse.h"

Heart::Heart(Point vertex)
    :vertex{vertex} {}

void Heart::draw(Canvas& c){
    Point left_vertex{vertex.x + 5, vertex.y + 5};
    Point right_vertex{vertex.x - 5, vertex.y + 5};
    Triangle t{{left_vertex}, {vertex}, {right_vertex}};

}