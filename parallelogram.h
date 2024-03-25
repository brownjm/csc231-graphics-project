//
// Created by anova on 3/8/2024
//

#pragma once
#include "shape.h"
#include <stdexcept>

class Parallelogram : public Shape {
public:
    void draw(Canvas& c) override;
    Style parallelogram_style;
    Parallelogram(Point height);
    Parallelogram(const std::string& color, double base, double height, double side);
    double base, height, side;

protected:
    std::vector<Point> pts;
};

//EXAMPLE
//Parallelogram p { style};
//p.style.width = 1;
//
//Shape
//    set_width();

/*
class Parallelogram : public Shape {
public:
    double area() const override;
    double perimeter() const override;
    Parallelogram(const std::string& color, double base, double height, double side);
protected:
    double base, height, side;
};
*/