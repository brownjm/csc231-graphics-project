#pragma once
#include "canvas.h"
#include "style.h"
#include <vector>
#include "point.h"
#include <string>
//repeats what was said to it
class Parrot : public Canvas {
public:
    void draw_polygon(std::vector<Point> pts, Style s) override;
    void draw_polyline(std::vector<Point> pts, Style s) override;
    void draw_ellipse(Point center, Point radii, Style s) override;
    void save(std::string& filename);
    Parrot(Point size);
private:
    Point size;
};