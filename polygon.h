#pragma once
#include "style.h"
//Megan 3/8

class Polygon : public Shape {
public:
    Polygon (Point start, int sides);
    void draw(Canvas& c) override;
private:
    std::vector<Point> pts;
};
