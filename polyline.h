#pragma once
#include "shape.h"
#include "style.h"

class Polyline : public Shape {
public:
    void draw (Canvas& c) override;
private:
    std::vector<Point> pts;
    Point p (int x, int y);
    void pt_add(Point p);
};