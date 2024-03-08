// Made by: Jonathan 03/08/24
#include "triangle.h"

void Triangle::draw(Canvas& c) {
    c.draw_polygon(pts, s);
}