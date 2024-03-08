//Created by Lucas Carter 3/8/24
#pragma once
#include "shape.h"

class Ellipse : public Shape {
    void draw (Canvas& c) override;
protected:
    std::vector<int> pts;
    int a,b;
};