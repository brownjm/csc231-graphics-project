#include "polyline.h"
#include <stdexcept>

Polyline::Polyline(std::vector<Point> pts)
:pts{pts} {
    if (pts.size() <= 0) {
        throw std::runtime_error("Vector must contain at least two points.");
    }
}

void Polyline::draw(Canvas& c) {
    c.draw_polyline(pts, style);
};
