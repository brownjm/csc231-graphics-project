#include <fstream>

#include "svg.h"

// Misc. Helpers
std::string quote(const std::string& s);

// Pair to svg headers; pair<header, value>
std::string pair_to_string(const std::pair<std::string, std::string>& p); // string + string
std::string pair_to_string(const std::pair<std::string, double>& p); // string + double

void SVG::draw_ellipse(Point center, Point radii, Style s) {

}

void SVG::draw_polyline(std::vector<Point> pts, Style s) {
    std::string line {"polyline points="};
    std::string points;
    for(Point pt : pts){
        points += std::to_string(pt.x) +","+std::to_string(pt.y)+" ";
    }
    quote(points);
    line += points;
    line += "stroke=" + quote(s.border_color) + "fill=" + quote(s.fill_color) + "stroke-width=" + quote(std::to_string(s.border_thickness));
    data.push_back(line);
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
