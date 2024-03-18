#pragma once
#include "style.h"
//Megan 3/8

class Polygon : public Shape {
public:
    void draw(Canvas& c) override;
private:
    std::vector<int> pts;
};
