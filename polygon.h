#pragma once
#include "style.h"
#include "shape.h"
#include <vector>
//Megan 3/8

class Polygon : public Shape {
public:
    Polygon(std::vector<Point> pts);
    void draw(Canvas& c) override;
private:
    std::vector<Point> pts;
};
