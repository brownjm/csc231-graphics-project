#include "shape.h"
//Megan 3/8

int main() {
    SVG svg{100, 100};
    Triangle t{};
    t.draw(svg);
    svg.save("image.svg");
}