//
// Created by abelje on 3/27/2024.
//
#include "star.h"
#include "triangle.h"
#include "pentagon.h"
#include "point.h"
#include <stdexcept>

Star::Star(double center_x, double center_y, double pent_height, std::string fill_color, std::string border_color)
: center_x{center_x}, center_y{center_y}, pent_height{pent_height}, fill_color{fill_color}, border_color{border_color} {
    if (center_x <= 0 || center_y <= 0) {
        throw std::runtime_error("Center point values must be positive.");
    }
    if (pent_height == 0) {
        throw std::runtime_error("Pentagon Height must be positive.");
    }
    if (fill_color.empty() || border_color.empty()) {
        throw std::runtime_error("Fill and border color cannot be empty");
    }

}

void Star::draw(Canvas& c) {
    double half_height = pent_height / 2;
    // points start at bottom of shape and go counterclockwise
    Point pt_a = {center_x, center_y + pent_height};
    Point pt_b = {center_x + pent_height, center_y};
    Point pt_c = {center_x + half_height , center_y + pent_height};
    Point pt_d = {center_x - half_height, center_y + pent_height};
    Point pt_e = {center_x - pent_height, center_y};

    Pentagon middle (pt_a, pt_b, pt_c, pt_d, pt_e);

    middle.style.fill_color = fill_color;
    middle.style.border_color = fill_color;

    middle.draw(c);

    // make 5 triangles for the points of the star
    Triangle t1 (pt_a, {center_x + pent_height, center_y - pent_height - half_height}, pt_b);
    Triangle t2 (pt_b, {center_x + pent_height + half_height, center_y + pent_height}, pt_c);
    Triangle t3 (pt_c, {center_x, center_y + pent_height + half_height}, pt_d);
    Triangle t4 (pt_d, {center_x + pent_height + half_height, center_y + pent_height}, pt_e);
    Triangle t5 (pt_e, {center_x - pent_height, center_y + pent_height + half_height}, pt_a);

    t1.style.fill_color = fill_color;
    t2.style.fill_color = fill_color;
    t3.style.fill_color = fill_color;
    t4.style.fill_color = fill_color;
    t5.style.fill_color = fill_color;

    t1.style.border_color = border_color;
    t2.style.border_color = border_color;
    t3.style.border_color = border_color;
    t4.style.border_color = border_color;
    t5.style.border_color = border_color;

    t1.draw(c);
    t2.draw(c);
    t3.draw(c);
    t4.draw(c);
    t5.draw(c);
}