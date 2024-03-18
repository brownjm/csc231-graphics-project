#pragma once
#include "canvas.h"
#include "style.h"
#include <vector>
//repeats what was said to it
Class Parrot : public Canvas {
public:
    void draw_polygon(std::vector<point> pts, style s) override;
    void draw_polyline(std::vector<point> pts, style s) override;
    void draw_ellipse(point center, point radii, style s) override;
    void save(std::string filename);
    Parrot(point size):size{size}{}
private:
    point size;
};