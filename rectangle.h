//
// Created by anova on 3/8/2024.
//

#pragma once
#include "shape.h"

class Rectangle : public Shape {
public:
    Rectangle(std::vector<Point> pts, Style rectangle_style);
    void draw(Canvas& c) override;
//    Style rectangle_style;

protected:
    std::vector<Point> pts;
};