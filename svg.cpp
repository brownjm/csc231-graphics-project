#include <fstream>
#include "svg.h"

// Misc. Helpers
std::string quote(const std::string& s);

// Pair to svg headers; pair<header, value>
std::string points_to_string(const std::pair<std::string, std::string>& p); // string + string
std::string points_to_string(const std::pair<std::string, double>& p); // string + double

void SVG::draw_ellipse(Point center, Point radii, Style s) {
    std::string entry = "<ellipse rx=" + quote(std::to_string(radii.x))
                        + " ry=" + quote(std::to_string(radii.y))
                        + " cx=" + quote(std::to_string(center.x))
                        + " cy=" + quote(std::to_string(center.y))
                        + s.to_string()
                        + " />";

    data.push_back(entry);
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
    std::string line {"polygon points= "};
    for (Point point : pts) {
        line += (std::to_string(point.x) + " " + std::to_string(point.y) + " ");
    }
    line += "\n\tstroke=" + quote(s.border_color) + " fill=" + quote(s.fill_color) + " stroke-width=" + quote(std::to_string(s.border_thickness));

    data.push_back(line);
}

void SVG::save(const std::string& filename) {
    std::ofstream output {filename};
    output << "<svg width = " << quote(std::to_string(width)) << " height = " << quote(std::to_string(height)) << " xmlns=\"http://www.w3.org/2000/svg\">\n";
    for(std::string line : data) {
        output << line << '\n';
    }
    output << "</svg>\n";
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
