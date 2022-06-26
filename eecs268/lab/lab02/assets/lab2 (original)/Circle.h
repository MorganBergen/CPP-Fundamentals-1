/* -----------------------------------------------------------------------------
 *
 * @file:       Circle.h
 * @author:     Morgan Bergen
 * Assignment:  EECS-268 Lab 2
 * @brief:      This is the header file for the Circle Class that derives from the Shape Class.
                It has methods that,
                can return area,
                can return the name of the object (always Circle in this case)
                can change the radius
                has a constructor
                has a destructor
 * @date:       Mon Sep 13 10:15:48 CDT 2021
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#ifndef CIRCLE_H
#define CIRCLE_H
#include <string>
#include "Shape.h"

//this is use for inheriting from the Shape Interface
class Circle : public Shape {
    
private:
    double mRadius;

public:
    
    Circle();
    
    //nothing changes, returns the area
    double area() const;
    
    //radius previously unassigned, member radius becomes assigned to 0, constructor
    Circle(double radius);
    
    //default, does nothing
    ~Circle();
    
    //returns the name of the shape as a string, nothing changes
    std::string shapeName() const;
    
    //radius can be changed, nothing returns
    void setRadius(double radius);
    
};

#endif /* CIRCLE_H */
