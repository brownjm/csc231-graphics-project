#include "svg.h"

int main() {
    SVG svg{300, 500};
    svg.draw_ellipse({150,200}, {50,50}, Style{});
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

    svg.save("filedagainname.svg");

}