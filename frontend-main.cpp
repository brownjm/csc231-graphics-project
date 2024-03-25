#include "shape.h"
#include "parrot.h"
#include <vector>
#include <iostream>
#include "ellipse.h"
#include "polygon.h"

int main() {
    Parrot p{{200, 200}};

    Ellipse e{{50, 50},{4,5}};
    e.draw(p);
    p.save("image.svg");

    Polygon g{{{10, 30}, {50, 30}, {50, 20}}};
    g.draw(p);
}