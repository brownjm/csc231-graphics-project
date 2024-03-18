
#include <vector>
#include "point.h"
#pragma once

class Canvas{
    virtual void draw_polygon(std::vector<point> pts, style s) = 0;
    virtual void draw_polyline(std::vector<point> pts, style s) = 0;
    virtual void draw_ellipse(point center, point radii, style s) = 0;
};