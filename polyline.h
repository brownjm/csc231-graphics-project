#pragma once
#include "shape.h"

class Polyline : public Shape {
public:
    void draw (Canvas& c) override;
protected:
    std::vector<int> pts;
};