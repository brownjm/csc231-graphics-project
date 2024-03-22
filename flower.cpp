#include "flower.h"
#include "ellipse.h"
#include "parrot.h"
//Megan 3/8


Flower::Flower(Point center, int radius)
: center{center}, radius{radius} {}

//void Flower::draw(Canvas& c) {
//    //draw ellipses #1-6 using ellipse draw()
//    //style center + petals
//    std::cout << "Enter petal color: ";
//    string color;
//    cin >> color;
//    Style s;
//    style.set_color(color);
//    draw_ellipse((centerx+#, y), radius, radius, s);
//    draw_ellipse((centerx-#, y), radius, radius, s);
//    draw_ellipse((centerx+small#, y+#), radius, radius, s);
//    draw_ellipse((centerx-small#, y+#), radius, radius, s);
//    draw_ellipse((centerx+small#, y-#), radius, radius, s);
//    draw_ellipse((centerx-small#, y-#), radius, radius, s);
//
//    draw_ellipse(center, radius, "yellow"); //center
//}