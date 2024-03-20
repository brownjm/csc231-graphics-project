#include <fstream>

#include "svg.h"

// Misc. Helpers
std::string quote(const std::string& s);

// Pair to svg headers; pair<header, value>
std::string pts(const std::pair<std::string, std::string>& p); // string + string
std::string pts(const std::pair<std::string, double>& p); // string + double

void SVG::draw_ellipse(Point center, Point radii, Style s) {

}

void SVG::draw_polyline(std::vector<Point> pts, Style s) {

}

void SVG::draw_polygon(std::vector<Point> pts, Style s) {

}

void SVG::save(std::string& filename) {

}

std::string quote(const std::string& s) {
    return "\"" + s + "\"";
}

std::string pts(const std::pair<std::string, std::string>& p) {
    return p.first + "=" + quote(p.second);
}

std::string pts(const std::pair<std::string, double>& p) {
    return p.first + "=" + std::to_string(p.second);
}
