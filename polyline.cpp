#include "polyline.h"


std::vector<int> pts;

void Polyline::draw(Canvas& c) {
    c.draw_polyline(pts, style);
};

Point Polyline::p(int x, int y) {
    return Point (x,y);
}

void Polyline::pt_add(Point p) {
    pts.push_back(p);
}