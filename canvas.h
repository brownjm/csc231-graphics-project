
#include <vector>
#include "point.h"
#include "style.h"
#pragma once

class Canvas{
public:
    virtual void draw_polygon(std::vector<Point> pts, Style s) = 0;
    virtual void draw_polyline(std::vector<Point> pts, Style s) = 0;
    virtual void draw_ellipse(Point center, Point radii, Style s) = 0;
};