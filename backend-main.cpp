#include "svg.h"

int main() {
    SVG svg{300, 500};
    svg.draw_ellipse({150,200}, {50,50}, Style{});
    svg.draw_polygon();
    svg.save("filedagainname.svg");

}