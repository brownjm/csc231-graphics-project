// Created by Alisa Novak on 03/08/2024

#pragma once
#include "shape.h"
#include <vector>

class Rectangle : public Shape {
public:
    Rectangle(Point center, double length, double width, Style rectangle_style);
    void draw(Canvas& c) override;
    std::vector<Point> pts;
    Style rectangle_style;
};





//
//class Rectangle : public Shape {
//public:
//    Rectangle(std::vector<Point> pts, Style rectangle_style);
//    void draw(Canvas& c) override;
//    std::vector<Point> pts;
//    Style rectangle_style;
//};
