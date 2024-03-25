#pragma once
#include <string>
class Style {
public:
    std::string to_string() const;

    std::string fill_color{"white"};
    int border_thickness{1};
    std::string border_color{"black"};
};
