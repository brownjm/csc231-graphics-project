#pragma once
#include <vector>
#include "shape.h"

class Heart : public Shape {
public:

    Heart(Point vertex);

    void draw (Canvas& c) override;

protected:
    Point vertex;
};

//we are just going to have the user indicate
//the point for the vertex and make the hearts
//the same size every time