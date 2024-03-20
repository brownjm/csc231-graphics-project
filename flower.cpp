#include "flower.h"
#include "ellipse.h"
//Megan 3/8

void Flower::draw(Canvas& c) {
    //draw ellipses #1-6 using ellipse draw()
    //style center + petals
    std::cout << "Enter petal color: ";
    string color;
    cin >> color;
    draw_ellipse((centerx+#, y), radius, radius, color);
    draw_ellipse((centerx-#, y), radius, radius, color);
    draw_ellipse((centerx+small#, y+#), radius, radius, color);
    draw_ellipse((centerx-small#, y+#), radius, radius, color);
    draw_ellipse((centerx+small#, y-#), radius, radius, color);
    draw_ellipse((centerx-small#, y-#), radius, radius, color);

    draw_ellipse(center, radius, "yellow"); //center
}