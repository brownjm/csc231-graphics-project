#pragma once
#include "shape.h"
#include "point.h"
//Megan 3/8

class Flower : public Shape {
public:
    Flower(Point center, double radius);
    void draw(Canvas& c) override;
private:
    std::vector<Point> pts;
    double radius;
    Point center;
};