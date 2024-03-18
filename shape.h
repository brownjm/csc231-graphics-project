#pragma once
#include "canvas.h"
#include "style.h"

class Shape {
public:
    virtual void draw(Canvas& c) = 0;
    Style style;
};