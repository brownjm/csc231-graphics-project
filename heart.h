#pragma once
#include "shape.h"

class Heart : public Shape {
    void draw (Canvas& c) override;

protected:
    std::vector<int> pts;
};