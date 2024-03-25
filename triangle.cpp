// Made by: Jonathan 03/08/24
#include "triangle.h"

void Triangle::draw(Canvas& c) {
    c.draw_polygon(pts, style);
}

Triangle::Triangle(Point point_a, Point point_b, Point point_c)
:pts{point_a, point_b, point_c} {

}