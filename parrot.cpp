#include "parrot.h"
#include <iostream>
Parrot::Parrot(Point size): size{size}{
    std::cout<<"You made a image of these proportions: " << size.x<<
    " x "<<size.y;
}

void Parrot::draw_polygon(std::vector<Point> pts, Style s) {
   std::cout<<"Verily I say unto thee, these points make up the shape you see: \n";
   for(Point pt : pts){
       std::cout<<"("<<pt.x<<", "<<pt.y<<")"<<'\n';
   }
   std::cout<<"Despite causing me much pain, your desire for colorful shapes is rather vain\n";
   std::cout<<"The color on the inside is probably black, like your soul: "<<s.fill_color;
   std::cout<<"The thicker the border the thicker the skull: "<<s.border_thickness;
   std::cout<<"The color you chose for the outside hides nothing, your evil is still clear"<<s.border_color;
}

void Parrot::draw_polyline(std::vector<Point> pts, Style s) {
    std::cout<<"Through the abuse of this brain of mine, here is your polyline: \n";
    for(Point pt : pts){
        std::cout<<"("<<pt.x<<", "<<pt.y<<")"<<'\n';
    }
    std::cout<<"Despite causing me much pain, your desire for colorful shapes is rather vain\n";
    std::cout<<"The color on the inside is probably black, like your soul: "<<s.fill_color;
    std::cout<<"The thicker the border the thicker the skull: "<<s.border_thickness;
    std::cout<<"The color you chose for the outside hides nothing, your evil is still clear"<<s.border_color;
}

void Parrot::draw_ellipse(Point center, Point radii, Style s) {
    std::cout<<"This shape, like your mother, is round: \n";
    std::cout<<"Its center is as follows: ("<<center.x<<", "<<center.y<<")\n";
    std::cout<<"The horizontal radius is: "<<radii.x<<'\n';
    std::cout<<"The vertical radius is: "<<radii.y<<'\n';
    std::cout<<"Despite causing me much pain, your desire for colorful shapes is rather vain\n";
    std::cout<<"The color on the inside is probably black, like your soul: "<<s.fill_color;
    std::cout<<"The thicker the border the thicker the skull: "<<s.border_thickness;
    std::cout<<"The color you chose for the outside hides nothing, your evil is still clear"<<s.border_color;
}

void Parrot::save(std::string& filename) {
    std::cout<<"Thou hast saved this file: "<<filename<<'\n';
    std::cout<<"Now leavest me alone vile heathen";
}