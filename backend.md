# Classes

```cpp
class Point {
    double x, y;
};
```

```cpp
class Style {
    string fill_color;
    int border_thickness;
};
```

```cpp
class Canvas {
    int height, width;
    
    virtual void draw_polygon(vector<Point> pts, Style style) = 0;
    virtual void draw_elipse(Point center, Point radii, Style style) = 0;
};
```
From `Canvas`, the following two classes are derived
```cpp
class SVG : Canvas {
    void draw_polygon(vector<Point> pts, Style style) override;
    void draw_elipse(Point center, Point radii, Style style) override;
};
```

```cpp
class Mock : Canvas {
    void draw_polygon(vector<Point> pts, Style style) override;
    void draw_elipse(Point center, Point radii, Style style) override;
};
```
