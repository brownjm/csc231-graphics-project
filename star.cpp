//
// Created by abelje on 3/27/2024.
//
#include "star.h"
#include "triangle.h"
#include "pentagon.h"
#include "point.h"

Star::Star(Point center, double lower_left)
: center{center}, lower_left{lower_left} {
    //error handling here
    if (lower_left <= 0) {

    }
}

void Star::draw(Canvas& c) {
    // make the center a pentagon and fill line color
    double pt_b = lower_left + 2;
    double pt_c = lower_left + 3;
    double pt_d = lower_left + 1;
    double pt_d2 = (pt_b + lower_left) / 2;
    double pt_e = lower_left - 1;
    Pentagon middle ({lower_left,lower_left},{pt_b, lower_left},{pt_c, pt_b},
                {pt_d, pt_d2},{pt_e, pt_b});
    // make 5 triangles
    Triangle t1 ({pt_e, pt_b}, {lower_left, (lower_left - 2)},
               {lower_left, lower_left});
}