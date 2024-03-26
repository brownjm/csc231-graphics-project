// Created by Alisa Novak on 3/20/2024

#pragma once
#include "shape.h"
#include "rectangle.h"
#include <vector>

class Rectangular_Prism : public Shape {
public:
    void draw(Canvas& c) override;
    Rectangular_Prism(Point one, Point two, double length, double width, Style style);

protected:
    Rectangle rectangle_1, rectangle_2;
    Style style;
};




//class Rectangular_Prism : public Shape {
//public:
//    void draw(Canvas& c) override;
//    Rectangular_Prism(std::vector<Point> one, std::vector<Point> two, Style style);
//
//protected:
//    Rectangle rectangle_1, rectangle_2;
//    Style style;
//};