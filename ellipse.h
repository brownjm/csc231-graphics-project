//Created by Lucas Carter 3/8/24
#pragma once
#include "shape.h"

class Ellipse : public Shape {
public:

    Ellipse(Point center, Point radii);

    void draw (Canvas& c) override;
protected:
    Point center, radii;
};