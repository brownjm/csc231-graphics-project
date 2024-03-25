#include "style.h"

std::string quote2(const std::string& s) {
    return "\"" + s + "\"";
}

std::string Style::to_string() const {
    return " stroke=" + quote2(border_color)
           + " fill=" + quote2(fill_color)
           + " stroke-width=" + quote2(std::to_string(border_thickness));
}
