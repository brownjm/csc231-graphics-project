#include "shape.h"
#include "parrot.h"
#include <vector>
#include <iostream>
#include "ellipse.h"
#include "triangle.h"
#include "flower.h"
#include "heart.h"
#include "svg.h"

int main() {
    Parrot p{{200, 200}};

    Ellipse e{{50, 50},{4,5}};
    e.draw(p);
    p.save("image.svg");

    Triangle t{{0,0}, {2,2}, {5,0}};
    t.draw(p);

    Polyline pl{{{0,0}, {1,2}}};
    pl.draw(p);

    Pentagon pg{{3,2}, {5,2}, {6,4}, {4,5}, {2,4}};
    pg.draw(p);

    Flower f{{10, 10}, 10.0};
    f.draw(p);

    SVG c{500,500};

    Heart{{17,17}};
}