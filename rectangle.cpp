// Created by Alisa Novak on 03/08/2024

#include "rectangle.h"
#include <stdexcept>

Rectangle::Rectangle(Point center, double length, double width, Style rectangle_style)
    : rectangle_style({rectangle_style}){
    Point point_1 = {center.x - length / 2, center.y + width / 2}; // top left
    Point point_2 = {center.x + length / 2, center.y + width / 2}; // top right
    Point point_3 = {center.x - length / 2, center.y - width / 2}; // bottom left
    Point point_4 = {center.x + length / 2, center.y - width / 2}; // bottom right
    pts = {point_1, point_2, point_3, point_4};
}

void Rectangle::draw(Canvas& c) {
    c.draw_polygon(pts, style);
}




//
//Rectangle::Rectangle(std::vector<Point> pts, Style rectangle_style)
//        :pts{pts}, rectangle_style{rectangle_style} {
//    if(pts.size() > 3) {
//        throw std::runtime_error("Rectangles cannot have more than four points... sorry :(");
//    }
//}
//
//void Rectangle::draw(Canvas& c) {
//    c.draw_polygon(pts, style);
//}






