/* -----------------------------------------------------------------------------
 *
 * @file:       Circle.cpp
 * @author:     Morgan Bergen
 * Assignment:  EECS-268 Lab 2
 * @brief:      Implementations of Circle:  simple to understand
 * @date:       Mon Sep 13 10:15:48 CDT 2021
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#include "Circle.h"
#include <string>  

Circle::Circle(){
    
}

Circle::Circle(double radius){
    mRadius = radius;
}

double Circle::area() const {
    return (3.14159265358979323*mRadius*mRadius);
}

std::string Circle::shapeName() const {
    return("Circle");
}

void Circle::setRadius(double radius){
    mRadius = radius;
}

Circle::~Circle(){}
