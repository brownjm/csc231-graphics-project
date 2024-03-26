#include <fstream>
#include "svg.h"

// Misc. Helpers
std::string quote(const std::string& s);

// Pair to svg headers; pair<header, value>
std::string points_to_string(const std::pair<std::string, std::string>& p); // string + string
std::string points_to_string(const std::pair<std::string, double>& p); // string + double

void SVG::draw_ellipse(Point center, Point radii, Style s) {

}

void SVG::draw_polyline(std::vector<Point> pts, Style s) {

}

void SVG::draw_polygon(std::vector<Point> pts, Style s) {

}

void SVG::save(const std::string& filename) {
    std::ofstream output {filename};
    output << "<svg ";
}

SVG::SVG(int width, int height): width {width}, height {height} {}

std::string quote(const std::string& s) {
    return "\"" + s + "\"";
}

std::string points_to_string(const std::pair<std::string, std::string>& p) {
    return p.first + "=" + quote(p.second);
}

std::string points_to_string(const std::pair<std::string, double>& p) {
    return p.first + "=" + std::to_string(p.second);
}
