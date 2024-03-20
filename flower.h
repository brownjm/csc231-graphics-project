#pragma once
#include "shape.h"
//Megan 3/8

class Flower : public Shape {
public:
    void draw(Canvas& c) override;
private:
    std::vector<int> pts;
    int radius;
    int center;
};