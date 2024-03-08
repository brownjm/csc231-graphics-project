//
// Created by anova on 3/8/2024.
//

#pragma once
#include "shape.h"

class Parallelogram : public Shape {
public:
    double area() const override;
    double perimeter() const override;
    Parallelogram(const std::string& color, double base, double height, double side);
protected:
    double base, height, side;
};
