#pragma once
#include "shape.h"
#include "point.h"
//Megan 3/8

class Flower : public Shape {
public:
    Flower(Point center, double radius);
    void draw(Canvas& c) override;
private:
    double radius; //allows all 6 petals to be circles with identical radii
    Point center;
};