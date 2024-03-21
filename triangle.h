// Made by: Jonathan 03/08/24
#pragma once
#include "shape.h"
#include "vector"
#include "point.h"

class Triangle : public Shape {
    void draw (Canvas& c) override;
private:
    std::vector<Point> pts;
    Point p (int x, int y);
    void pt_add(Point p);
};