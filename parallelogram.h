// Created by Alisa Novak on 03/08/2024

#pragma once
#include "shape.h"
#include "vector"
#include "point.h"
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


// #include "shape.h"
//#include "vector"
//#include "point.h"
//
//class Triangle : public Shape {
//    void draw (Canvas& c) override;
//private:
//    std::vector<Point> pts;
//    Point p (int x, int y);
//    void pt_add(Point p);
//};