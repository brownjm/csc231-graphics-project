//
// Created by abelje on 3/27/2024.
//
#pragma once
#include "shape.h"
#include "vector"
#include "point.h"

class Star : public Shape {
public:
    Star(double center_x, double center_y, double pent_height, std::string fill_color, std::string border_color);
    void draw(Canvas& c) override;
private:
    double center_x;
    double center_y;
    double pent_height;
    std::string fill_color = "yellow";
    std::string border_color = "yellow";
};