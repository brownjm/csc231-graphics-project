//
// Created by abelje on 3/27/2024.
//
#include "star.h"
#include "triangle.h"
#include "pentagon.h"
#include "point.h"

Star::Star(double center_x, double center_y, double pent_height)
: center_x{center_x}, center_y{center_y}, pent_height{pent_height} {
    //error handling here
    if (pent_height <= 0) {

    }
}

void Star::draw(Canvas& c) {
    // make the center a pentagon and fill line color
    // points start at bottom of shape and go counterclockwise
    Point pt_a = {center_x, center_y + pent_height};
    Point pt_b = {center_x + pent_height, center_y};
    Point pt_c = {center_x + (pent_height / 2) , center_y + pent_height};
    Point pt_d = {center_x - (pent_height / 2), center_y + pent_height};
    Point pt_e = {center_x - pent_height, center_y};
    Pentagon middle (pt_a, pt_b, pt_c, pt_d, pt_e);
    // make 5 triangles for the points of the star
    double half_height = {pent_height / 2};
    Triangle t1 (pt_a, {center_x + pent_height, center_y - pent_height - half_height}, pt_b);
    Triangle t2 (pt_b, {center_x + pent_height + half_height, center_y + pent_height}, pt_c);
    Triangle t3 (pt_c, {center_x, center_y + pent_height + half_height}, pt_d);
    Triangle t4 (pt_d, {center_x + pent_height + half_height, center_y + pent_height}, pt_e);
    Triangle t5 (pt_e, {center_x - pent_height, center_y + pent_height + half_height}, pt_a);
}