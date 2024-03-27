// Created by Silas Ebeling on 3/26/24.
#include "pentagon.h"

Pentagon::Pentagon(Point point_a, Point point_b, Point point_c, Point point_d, Point point_e)
        :pts{point_a, point_b, point_c, point_d, point_e} {
}

void Pentagon::draw(Canvas& c) {
    c.draw_polygon(pts, style);
}

