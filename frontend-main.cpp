#include "shape.h"
#include "parrot.h"
#include <vector>
#include <iostream>
#include "ellipse.h"
#include "polygon.h"
#include "flower.h"

int main() {
    Parrot p{{200, 200}};

    Ellipse e{{50, 50},{4,5}};
    e.draw(p);
    p.save("image.svg");

    Polygon g{{{10, 30}, {50, 30}, {50, 20}}};
    g.draw(p);

    Flower f{{10, 10}, 10.0};
    f.draw(p);
}