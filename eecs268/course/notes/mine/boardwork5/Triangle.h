/*
 Boardwork 4
 Morgan Bergen
 Ethan Jones
 Joe Rubalcava
 */

//Triangle.h

#include "Shape.h"
#ifndef SHAPE_H
#define SHAPE_H

class Triangle : public Shape {
    
private:
    double mBase;
    double mHeight;
    
public:
    Triangle(double base, double height);
    //must be const why
    double area() const;
};

#endif
