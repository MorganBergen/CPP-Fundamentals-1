/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Morgan Bergen
 * Assignment:   EECS-168/169 Lab 10
 * Description: Defining Circle type and Creating a Driver
 
 Circle class:
 Public member variables:
    double radius
    double xPos
    double yPos
 Public member methods:
    double diameter()
        get the diameter of the Circle. It returns a value, diameter
    double area()
        calculate the area of the Circle
    double circumference()
        calculate the circumference of the circle
    double distanceToOrigin()
        returns the distance from the center of the circle to the origin
        HINT: Find out how to calculate the distance between two points and recall the origin is at (0, 0)
    bool intersect(Circle otherCircle)
        Take another Circle
        Returns true if the other Circle intersects with it, false otherwise
    Remember, you will need a header file(.h) and an implementation file (.cpp)
    You'll also need to update your Makefile
 NOTE:  The Circle class should not do any input or output
 
 CircleDriver class:
 Public members
    Circle circ1;
    Circle circ2;
    void obtainCircles()
        Talk with teh user to obtain the positions and radii for two Circles from the user
 Sample Output:
 Enter information for Circle 1:
 Radius: 100
 X Position: 0
 Y Position: 50
 
 Enter information for Circle 2:
 Radius: 100
 X Position: 50
 Y Position: 0
 
    void printCircleInfo()
        Prints the following information about each of the Circles to the screen:
            The location of the Circle's center (xPos, yPos), the distance from the origin,
            each area, circumference, diameter
            Lastly print whether or not the two circles intersect
 
 Sample output from printCircleInfo():
 Information for Circle1:
 location: (0, 50)
 diameter: 200
 area: 31415.9
 circumference: 628.318
 distance from the origin: 50
 
 Information for Circle 2:
 location: (50, 0)
 diameter: 200
 area: 31415.9
 circumference: 628.318
 distance from the origin: 50
 
 The cricles intersect
 
    void run()
        run merely calls all the other methods.  Here's your definition for run()
    //This wil go in your CircleDriver.cpp
    void CircleDriver::run() {
    obtainCircles();
    printCircleInfo();
    }
 
 Main:
    main does very little. In fact, here is your main:
 
    int main(){
        CircleDriver myDriver;
        myDriver.run();
        return(0);
    }
 
 * Date: Thu Apr 29 08:50:00 CDT 2021
 *
 ---------------------------------------------------------------------------- */

#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES
#include "CircleDriver.hpp"

int main(){
    
    CircleDriver myDriver;
    myDriver.run();
    
    return(0);
}
