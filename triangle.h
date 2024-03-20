// Made by: Jonathan 03/08/24
#pragma once
#include "shape.h"
#include "vector"

class Triangle : public Shape {
    void draw (Canvas& c) override;
private:
    std::vector<Point> pts;
};