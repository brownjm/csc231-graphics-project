// Created by Lucas Carter on 3/18/24.
#include "heart.h"
#include "triangle.h"
#include "ellipse.h"
#include "style.h"
#include <vector>

Heart::Heart(Point vertex)
    :vertex{vertex} {}

void Heart::draw(Canvas& c){
    Style s;
    s.border_color = "red";
    s.fill_color = "red";
    Point left_vertex{vertex.x + 5, vertex.y + 5}; //left vertex of triangle
    Point right_vertex{vertex.x - 5, vertex.y + 5}; //right vertex of triangle
    Triangle t{{left_vertex}, {vertex}, {right_vertex}}; //triangle part of heart
    Point left_top{vertex.x + 5, vertex.y + 6.5}; //where curve(ellipse) meets the rest of shape (rectangle)
    Point right_top{vertex.x - 5, vertex.y + 6.5}; //same
    std::vector<Point> pts;
    pts.push_back(left_vertex);
    pts.push_back(right_vertex);
    pts.push_back(right_top);
    pts.push_back(left_top);
    c.draw_polygon(pts, style); //creates rectangle to cover up bottom of ellipses
    Ellipse left{{vertex.x-2.5, vertex.y+6.5}, {2.5,2.5}};
    Ellipse right{{vertex.x+2.5, vertex.y+6.5}, {2.5,2.5}};
}