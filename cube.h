//
// Created by anova on 3/20/2024.
//

#pragma once
#include "shape.h"

class Cube : public Shape {
public:
    void draw(Canvas& c) override;
//    Style cube_style;

protected:
    std::vector<Point> pts;
};