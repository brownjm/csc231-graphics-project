# Classes

```cpp
class Point:
    double x, y;
```

```cpp
class Style {
    string fill_color;
    int border_thickness;
};
```

```cpp
class Canvas {
    virtual draw_polygon(vector<Point> pts, Style style) = 0;
    virtual draw_elipse(Point center, Point radii, Style style) = 0;
};
```
