#include "svg.h"

int main() {
    SVG svg{300, 500};
    svg.draw_ellipse({150,200}, {50,50}, Style{});
    svg.draw_ellipse({250,300}, {50,50}, Style{});

    svg.save("filedagainname.svg");

}