#pragma once
#include "style.h"
#include "shape.h"
#include <vector>
//Megan 3/8

class Polygon : public Shape {
public:
    //connects all points entered (i.e. 6 points = hexagon...)
    Polygon(std::vector<Point> pts);
    void draw(Canvas& c) override;
private:
    std::vector<Point> pts;
};
