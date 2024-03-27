//
// Created by abelje on 3/27/2024.
//
#pragma once
#include "shape.h"
#include "vector"
#include "point.h"

class Star : public Shape {
public:
    void draw(Canvas& c) override;
    Star(Point center, Point length);
private:
    Point center;
    Point length;
};