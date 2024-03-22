#include "shape.h"
#include "parrot.h"
#include <vector>

int main() {
    SVG svg{100, 100};
    Triangle t{};
    t.draw(svg);
    svg.save("image.svg");

    Parrot parrot{{200, 100}};
    Polygon p{{{30, 50}, {40, 60}, {20, 40}, {30, 60}, {70, 50}}, polygon_style};
    p.draw(parrot);

}