#include <fstream>
#include <format>

#include "svg.h"

// Misc. Helpers
std::string quote(const std::string& s);

// Pair to svg headers; pair<header, value>
std::string pair_to_string(const std::pair<std::string, std::string>& p); // string + string
std::string pair_to_string(const std::pair<std::string, double>& p); // string + double

void SVG::draw_ellipse(Point center, Point radii, Style s) {
    /* // std::format() is only c++ v. 20 or higher (project runs v. 17)
    std::string entry = std::format(
            R"(<ellipse rx="{}" ry="{}" cx="{}" cy="{} />")",
            std::to_string(radii.x),
            std::to_string(radii.y),
            std::to_string(center.x),
            std::to_string(center.x)
    );
    */

    std::string entry = "<ellipse rx=" + quote(std::to_string(radii.x))
            + " ry=" + quote(std::to_string(radii.y))
            + " cx=" + quote(std::to_string(center.x))
            + " cy=" + quote(std::to_string(center.y))
            + s.to_string()
            + " />";

    data.push_back(entry);
}

void SVG::draw_polyline(std::vector<Point> pts, Style s) {

}

void SVG::draw_polygon(std::vector<Point> pts, Style s) {
    std::string line {"polyline"};
    for (Point point : pts) {
        line += quote(std::to_string(point.x) + " " + std::to_string(point.y) + " ") + "\n";
        line += "stroke=" + quote(s.border_color) + "fill=" + quote(s.fill_color) + "stroke-width=" + quote(std::to_string(s.border_thickness));
    }
    data.push_back(line);
}

void SVG::save(const std::string& filename) {
    std::ofstream output {filename};
    output << "<svg ";
}

SVG::SVG(int width, int height): width {width}, height {height} {}

std::string quote(const std::string& s) {
    return "\"" + s + "\"";
}

std::string pair_to_string(const std::pair<std::string, std::string>& p) {
    return p.first + "=" + quote(p.second);
}

std::string pair_to_string(const std::pair<std::string, double>& p) {
    return p.first + "=" + std::to_string(p.second);
}
