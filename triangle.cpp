#include "triangle.h"

void Triangle::draw(Canvas& c) {
    c.draw_polygon(pts, s);
}