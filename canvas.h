/*
 * Canvas
 * Draw functions(all virtual)
 * draw polygon
 * draw ellipse
 * draw line
 * Poly and line take a vector of Points
 * Ellipse takes center point, takes another point that contains radii
 * all take stylistic stuff
 */
#include <vector>
#include "point.h"
#pragma once

class Canvas{
    virtual void draw_polygon(std::vector<point> pts, style s) = 0;
    virtual void draw_polyline(std::vector<point> pts, style s) = 0;
    virtual void draw_ellipse(point center, point radii, style s) = 0;
};