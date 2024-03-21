// Made by: Jonathan 03/08/24
#include "triangle.h"

void Triangle::draw(Canvas& c) {
    c.draw_polygon(pts, style);
}

Point Triangle::p(int x, int y) {
    return Point(x, y);
}

void Triangle::pt_add(Point p) {
    pts.push_back(p);
}