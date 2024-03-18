#include "polyline.h"

Polyline:Shape
void draw(Canvas& c) override {
    c.draw_polyline(pts, s);
};
std::vector<int> pts;

