#pragma once
#include "shape.h"
#include "style.h"
#include "point.h"

class Polyline : public Shape {
public:
    Polyline(std::vector<Point> pts);
    void draw (Canvas& c) override;
private:
    std::vector<Point> pts;
};