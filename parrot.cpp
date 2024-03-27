#include "parrot.h"
#include <iostream>
//Outputs data
//Aiden Martin
Parrot::Parrot(Point size): size{size}{
    std::cout<<"You made a image of these proportions: " << size.x<<
    " x "<<size.y;
}

void Parrot::draw_polygon(std::vector<Point> pts, Style s) {
   std::cout<<"Points: \n";
   for(Point pt : pts){
       std::cout<<"("<<pt.x<<", "<<pt.y<<")"<<'\n';
   }
   std::cout<<"Style:\n";
   std::cout<<"Fill: "<<s.fill_color;
   std::cout<<"Border: "<<s.border_thickness;
   std::cout<<"Border color"<<s.border_color;
}

void Parrot::draw_polyline(std::vector<Point> pts, Style s) {
    std::cout<<"Points: \n";
    for(Point pt : pts){
        std::cout<<"("<<pt.x<<", "<<pt.y<<")"<<'\n';
    }
    std::cout<<"Style:\n";
    std::cout<<"Fill: "<<s.fill_color;
    std::cout<<"Border: "<<s.border_thickness;
    std::cout<<"Border color"<<s.border_color;
   }

void Parrot::draw_ellipse(Point center, Point radii, Style s) {
    std::cout<<"Ellipse: \n";
    std::cout<<"Center point: ("<<center.x<<", "<<center.y<<")\n";
    std::cout<<"The horizontal radius is: "<<radii.x<<'\n';
    std::cout<<"The vertical radius is: "<<radii.y<<'\n';
    std::cout<<"Style:\n";
    std::cout<<"Fill: "<<s.fill_color;
    std::cout<<"Border: "<<s.border_thickness;
    std::cout<<"Border color"<<s.border_color;}

void Parrot::save(const std::string& filename) {
    std::cout<<"Saved: "<<filename<<'\n';
}