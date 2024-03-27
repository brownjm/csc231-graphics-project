#include "svg.h"

int main() {
    SVG svg{300, 500};

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
    Point center{150,200};
    Point radii {50,50};
    c.border_color = "red";
    svg.draw_ellipse(center, radii, c);

    svg.save("filename.svg");

}