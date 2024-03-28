//
// Created by abelje on 3/27/2024.
//
#pragma once
#include "shape.h"
#include "vector"
#include "point.h"

class Star : public Shape {
public:
    Star(Point center, double lower_left);
    void draw(Canvas& c) override;
private:
    Point center{0,0};
    double lower_left{1};
};