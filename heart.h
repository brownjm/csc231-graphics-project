#pragma once
#include "shape.h"

class Heart : public Shape {
public:

    void draw (Canvas& c) override;

protected:
    std::vector<int> pts;
};

//we are just going to have the user indicate
//the point for the vertex and make the hearts
//the same size every time