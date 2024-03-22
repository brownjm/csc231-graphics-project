#pragma once

#include <vector>

#include "canvas.h"

class SVG : Canvas {
public:
    void draw_polygon(std::vector<Point> pts, Style s) override;
    void draw_polyline(std::vector<Point> pts, Style s) override;
    void draw_ellipse(Point center, Point radii, Style s) override;

    void save(std::string& filename);

    SVG(int width, int height);

private:
    std::vector<std::string> data;
    int width, height;


};