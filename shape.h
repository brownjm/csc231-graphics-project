#pragma once
#include "canvas.h"

class Shape {
public:
    virtual void draw(Canvas& c) = 0;
};