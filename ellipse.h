//Created by Lucas Carter 3/8/24
#pragma once
#include "shape.h"

class Ellipse : public Shape {
public:

    Ellipse (int x, int y, int rx, int ry) : x(x), y(y), rx(rx), ry(ry) {}
    //where pts is the midpoint and rx is the horizontal radius and ry is the vertical radius

    void draw (Canvas& c) override;
protected:
    int x, y, rx, ry;
};