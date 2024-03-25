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
    Point radii{3.0, 5.0};
    Point center{13.0, 17.0};


    SVG s(400, 600);
    s.draw_polygon(pts, c);
    s.draw_ellipse(center, radii, c);
    s.draw_polyline(pts, c);
    s.print();
}