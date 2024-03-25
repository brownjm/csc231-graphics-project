#include "style.h"

std::string quote(const std::string& s) {
    return "\"" + s + "\"";
}

std::string Style::to_string() const {
    return " stroke=" + quote(border_color)
           + " fill=" + quote(fill_color)
           + " stroke-width=" + quote(std::to_string(border_thickness));
}
