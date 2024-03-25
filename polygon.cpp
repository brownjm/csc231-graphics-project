#include "polygon.h"
#include <vector>
#include <stdexcept>
//Megan 3/8

Polygon::Polygon(std::vector<Point> pts)
    : pts{pts} {
    if (pts.size() == 0) {
        throw std::runtime_error("Vector must contain at least one point!");
    }
}

void Polygon::draw(Canvas& c) {
    c.draw_polygon(pts, style);
}