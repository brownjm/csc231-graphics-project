#include "svg.h"
#include "style.h"
int main() {
    std::vector<Point> pts;
    Point point{2.0, 4.5};
    pts.push_back(point);
    Point point1{3.0, 4.5};
    pts.push_back(point1);
    Point point2{3.0, 2.5};
    pts.push_back(point2);
    Point point3{2.0, 2.5};
    pts.push_back(point3);
    Style c;

    SVG s(400, 600);
    s.draw_polygon(pts, c);
}