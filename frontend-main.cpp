#include "shape.h"
#include "parrot.h"
#include <vector>
#include <iostream>
#include "ellipse.h"

int main() {
    SVG svg{100, 100};
    Triangle t{};
    t.draw(svg);
    svg.save("image.svg");

    Parrot p{{200, 200}};

    Ellipse e{{50, 50},{4,5}};
    e.style.width = 4;
    e.draw(p);
    p.save("image.svg");
}