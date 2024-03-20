#include "polyline.h"


std::vector<int> pts;

void Polyline::draw(Canvas& c) {
    c.draw_polyline(pts, s);
};
