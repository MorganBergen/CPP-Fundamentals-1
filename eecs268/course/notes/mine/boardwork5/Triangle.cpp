//Triangle.cpp

#include "Triangle.h"
#include <iostream>

Triangle::Triangle(double base, double height){
    mBase = base;
    mHeight = height;
}

double Triangle::area() const{
    return(0.5(base*height));
}
