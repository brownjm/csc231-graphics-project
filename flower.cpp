#include "flower.h"
#include "parrot.h"
//Megan 3/8


Flower::Flower(Point center, double radius)
: center{center}, radius{radius} {}

void Flower::draw(Canvas& c) {
    Point radii{radius, radius};
    Style style;
    c.draw_ellipse(center, radii, style);
    c.draw_ellipse({center.x + radius*2, center.y}, radii, style);
    c.draw_ellipse({center.x - radius*2, center.y}, radii, style);
    c.draw_ellipse({center.x + radius, center.y + (radius + radius/2)}, radii, style);
    c.draw_ellipse({center.x - radius, center.y + (radius + radius/2)}, radii, style);
    c.draw_ellipse({center.x + radius, center.y - (radius + radius/2)}, radii, style);
    c.draw_ellipse({center.x - radius, center.y - (radius + radius/2)}, radii, style);
};
