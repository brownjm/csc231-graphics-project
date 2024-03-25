// Made by: Jonathan 03/08/24
#pragma once
#include "shape.h"
#include "vector"
#include "point.h"

class Triangle : public Shape {
public:
    void draw (Canvas& c) override;
    Triangle(Point point_a, Point point_b, Point point_c);
private:
    std::vector<Point> pts;
};