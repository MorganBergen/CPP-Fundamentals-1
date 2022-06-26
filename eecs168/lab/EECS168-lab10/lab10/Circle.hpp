#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>

class Circle{
    
private:
    double radius;
    double xPos;
    double yPos;
public:
    double diameter();
    double area();
    double circumference();
    double getRadius();
    double getX();
    double getY();
    void setX(double x);
    void setY(double y);
    double distanceToOrigin();
    bool intersect(const Circle& otherCircle);
    bool setRadius(double r);
    
};


#endif 
