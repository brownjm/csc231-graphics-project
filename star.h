//
// Created by abelje on 3/27/2024.
//
#pragma once
#include "shape.h"
#include "vector"
#include "point.h"

class Star : public Shape {
public:
    Star(double center_x, double center_y, double pent_height);
    void draw(Canvas& c) override;
private:
    double center_x{2};
    double center_y{4};
    double pent_height{2};
};