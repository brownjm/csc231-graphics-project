// Created by Alisa Novak on 03/20/2024

#include "rectangular-prism.h"
#include "parallelogram.h"
#include "rectangle.h"
#include "polyline.h"

Rectangular_Prism::Rectangular_Prism(Point one, Point two, double length, double width, Style style)
    : rectangle_1{one, length, width, style}, rectangle_2{two, length, width,style} {}

void Rectangular_Prism::draw(Canvas& c) {
    rectangle_1.draw(c);
    rectangle_2.draw(c);
    for (int i = 0; i < rectangle_1.pts.size(); ++i) {
        std::vector<Point> line = {rectangle_1.pts.at(i), rectangle_2.pts.at(i)};
        c.draw_polyline(line, style);
    }
}




//Rectangular_Prism::Rectangular_Prism(std::vector<Point> one, std::vector<Point> two, Style style)
//        : rectangle_1{one, style}, rectangle_2{two, style} {}
//
//void Rectangular_Prism::draw(Canvas& c) {
//    rectangle_1.draw(c);
//    rectangle_2.draw(c);
//    for (int i = 0; i < rectangle_1.pts.size(); ++i) {
//        std::vector<Point> line = {rectangle_1.pts.at(i), rectangle_2.pts.at(i)};
//        c.draw_polyline(line, style);
//    }
//}



// user manual - tell the person to put the points of the rectangle in the same order
// upper left corner, upper right corner,