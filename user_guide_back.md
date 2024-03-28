# Making Use of the SVG Canvas

## Getting Started
Simply put, there are 4 steps involved in this program<br>
1. Create an SVG canvas
2. Add shapes to it
3. Stylize shapes
4. Save it

There's more to it than that, so lets take a look
## Creating an SVG canvas
Constructing an SVG canvas is rather simple, all that is 
needed is the size of the viewbox(width, height)
```c++
int main(){
    SVG img{16.0, 9.0};
}
```
## Adding Shapes
There are 3 base shapes one can make with this program:
Polylines, Polygons, and Ellipses. All of them however, 
require points.<br>
**Points**<br>
A point is just like that on a coordinate plane, with a number
representing the x and y-axis respectively. They are made like so:
```c++
int main(){
    Point point{2.0, 2.0};
}
```
**Polyline**<br>
A polyline is a line that goes through any number of points. The 
construction of a polyline might look like this:
* First a series of points is put into a vector
```c++
int main(){
    vector<Point> points;
    points.emplace_back(2.0, 2.0);
    points.emplace_back(1.0, 1.0);
    //etc
}
```
* Then using the provided function, create a polyline
```c++
int main(){
    img.draw_polyline(points);
}
```
**Polygon**<br>
When creating a Polygon, the steps are the exact same, except the
name of the function: *draw_polygon*, so we can move on to ellipses<br>
**Ellipse**<br>
An ellipse is made using a center point, and the lengths of the
two radii, which are, for simplicity, represented by a point
(length of x radius, length of y radius)
* First make the points
```c++
int main(){
    Point center{0.0, 0.0};
    Point radii{1.0,1.0};
}
```
* Then plug them into the function
```c++
int main(){
    img.draw_ellipse{center, radii};
}
```
## Adding a bit of *Style*
In order to make stylistic changes to the shapes, you must create
a style class, and simply insert it alongside the points in a 
shape constructor
* The color of the object, the border color, and the border width
can be altered
```c++
int main(){
    Style style_a;
    style_a.fill_color{"white"};
    style_a.border_thickness{1};
    style_a.border_color{"black"};
}
```
* Quick Note, these are the possible colors:
  * aqua
  * black
  * blue
  * fuchsia
  * gray
  * green
  * lime
  * maroon
  * navy
  * olive
  * purple
  * red
  * silver
  * teal
  * white
  * yellow
* And the same style class can be used for any shape
```c++
int main(){
    img.draw_polyline(points, style_a);
    img.draw_polygon(points, style_a);
    img.draw_ellipse(center, radii, style_a);
}
```
## Saving
To save an image is rather simple, you use the function and enter
the name with which to save your file under:
```c++
int main(){
    img.save("image.svg");
}
```
## Congratulations!!!
You have now saved a svg image file to your computer



