#include "polygon.h"
//Megan 3/8

void Polygon::draw(Canvas& c) {
    c.draw_polygon(pts, style);
}
