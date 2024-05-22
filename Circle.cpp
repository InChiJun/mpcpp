#include <iostream>
#include "Circle.h"

Circle::Circle() {radius=1;}
Circle::~Circle()
{
    std::cout<<"Destroying Circle";
}
Circle::Circle(int r) {radius=r;}
int Circle::getRadius() {return radius;}
double Circle::getArea() {return 3.14*radius*radius;}

Ecllipse::Ecllipse(int r, int w){
    setRadius(r);
    setWidth(w);
}
double Ecllipse::getArea(){
    return getRadius()*getWidth();
}
void Ecllipse::setWidth(int w){
    width = w;
}
void Ecllipse::setRadius(int r){
    radius = r;
}