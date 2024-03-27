#include "flower.h"
#include "parrot.h"
#include <stdexcept>
//Megan 3/8

Flower::Flower(Point center, double radius)
: center{center}, radius{radius} {
    if (radius <= 0) {
        throw std::runtime_error("Radius must be positive!");
    }
}

void Flower::draw(Canvas& c) {
    //sets the x and y radii to the same value
    Point radii{radius, radius};
    Style s;
    s.border_color = "yellow";
    s.fill_color = "yellow";

    //center of flower
    c.draw_ellipse(center, radii, style);

    //draw 6 petals by creating center-points based on center circle
    s.border_color = "pink";
    s.fill_color = "pink";

    //draws petals on left and right of center
    c.draw_ellipse({center.x + radius*2, center.y}, radii, style);
    c.draw_ellipse({center.x - radius*2, center.y}, radii, style);

    //draws petals on the top right and top left of center
    c.draw_ellipse({center.x + radius, center.y + (radius + radius/2)}, radii, style);
    c.draw_ellipse({center.x - radius, center.y + (radius + radius/2)}, radii, style);

    //draws petals on the bottom right and bottom left of center
    c.draw_ellipse({center.x + radius, center.y - (radius + radius/2)}, radii, style);
    c.draw_ellipse({center.x - radius, center.y - (radius + radius/2)}, radii, style);
};
