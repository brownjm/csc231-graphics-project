#include "shape.h"
#include "parrot.h"
#include <vector>
#include <iostream>
#include "ellipse.h"
#include "triangle.h"
#include "flower.h"

int main() {
    Parrot p{{200, 200}};

    Ellipse e{{50, 50},{4,5}};
    e.draw(p);
    p.save("image.svg");

    Triangle t{{0,0}, {2,2}, {5,0}};

    Flower f{{10, 10}, 10.0};
    f.draw(p);
}