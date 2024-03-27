
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

/* Lucas Carter 03/27/2024
(frontend)
User Guide:
    User = person writing main()
    How to create canvas 
    How to create shapes and draw them on canvas
    How to change  properties
    Example code 

For each of us:
    add relevant and good comments  
    put name on file that you did 

Development Guide: 
    explain code organization 
    explain how to create new shape
end of Lucas Carter */
    


