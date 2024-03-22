//Created by Lucas Carter 3/8/24
#include "ellipse.h"

Ellipse (int x, int y, int rx, int ry) : x(x), y(y), rx(rx), ry(ry) {}

void Ellipse::draw() {
    Canvas canvas;
    canvas.draw_ellipse(x, y, rx, ry);
}