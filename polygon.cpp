#include "polygon.h"
//Megan 3/8

Polygon::Polygon(vector<Point> pts)
    :pts{pts} {}

void Polygon::draw(Canvas& c) {
    c.draw_polygon(pts, style);
}