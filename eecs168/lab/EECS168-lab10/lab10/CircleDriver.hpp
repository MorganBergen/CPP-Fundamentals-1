#include "Circle.hpp"
#ifndef CircleDriver_hpp
#define CircleDriver_hpp

#include <stdio.h>

class CircleDriver{
    
private:
    Circle circ1;
    Circle circ2;
    void obtainCircles();
    void printCircleInfo();
public:
    void run();
};


#endif
