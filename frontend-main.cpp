#include "shape.h"
#include "parrot.h"
#include <vector>

int main() {
    SVG svg{100, 100};
    Triangle t{};
    t.draw(svg);
    svg.save("image.svg");
}