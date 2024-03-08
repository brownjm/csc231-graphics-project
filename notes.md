
/* Alisa Novak 03/08/2024 
Front End Notes 

#include "style.h"

Shape class 
    string fill_color
    string border_color
    int border_thickness

Shape class would include style
Each shape has function to draw onto the canvas
    
So 
Shape
    virtual void draw(Canvas& c) = 0; 
    style s; 

Triangle : Shape 
    void draw(Canvas& c) override {
        c.draw_polygon ( pts, s);
}
vector pts
    

Triangle 
    draw(Canvas& c)
        c.draw_(" ", ) -- pass data inside

Shapes we would like: 

#include "point.h"
#include "style.h"

Triangle
Ellipse
Rectangle 
Freeform



end of Alisa Novak */
