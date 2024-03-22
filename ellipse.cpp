//Created by Lucas Carter 3/8/24
#include "ellipse.h"

Ellipse::Ellipse(Point center, Point radii)
    :center{center}, radii{radii}{}

void Ellipse::draw(Canvas& c) {

    c.draw_ellipse(center, radii, style);
}