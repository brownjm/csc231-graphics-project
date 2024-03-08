#include "shape.h"

int main() {
    SVG svg{100, 100};
    Triangle t{};
    t.draw(svg);
    svg.save("image.svg");
}