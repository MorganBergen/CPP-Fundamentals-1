#include "Circle.hpp"
#include <math.h>

double Circle::diameter(){
    return(2*radius);
}

double Circle::area(){
    return(M_PI*radius*radius);
}

double Circle::circumference(){
    return(2*M_PI*radius);
}

double Circle::getRadius(){
    return(radius);
}

double Circle::getX(){
    return(xPos);
}

double Circle::getY(){
    return(yPos);
}

void Circle::setX(double x){
    xPos = x;
}

void Circle::setY(double y){
    yPos = y;
}

double Circle::distanceToOrigin(){
    return sqrt(pow(xPos, 2) + pow(yPos, 2));
}

bool Circle::intersect(const Circle& otherCircle){
    float dist_squared = ((xPos - otherCircle.xPos) * (xPos - otherCircle.xPos) )+( (yPos - otherCircle.yPos) * (yPos - otherCircle.yPos));
    if (((radius - otherCircle.radius) * (radius - otherCircle.radius)) > dist_squared)
        return false;
    return ((radius - otherCircle.radius) * (radius - otherCircle.radius)) <= dist_squared;
}

bool Circle::setRadius(double r){
    
    if (r > 0){
        radius = r;
        return true;
    } else {
        radius = 0;
        return false;
    }
}
