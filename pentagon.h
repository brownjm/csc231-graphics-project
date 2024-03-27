#pragma once
#include "style.h"
#include "shape.h"
#include "point.h"
#include <vector>

class Pentagon : public Shape {
public:
    Pentagon(Point point_a, Point point_b, Point point_c, Point point_d, Point point_e);
    void draw (Canvas& c) override;
private:
    std::vector<Point> pts;
};

