#include "polygon.h"
//Megan 3/8

Polygon::Polygon(vector<Point> pts, Style style)
    :pts{pts}, style{style} {}

void Polygon::draw(Canvas& c) {
    c.draw_polygon(pts, style);
}