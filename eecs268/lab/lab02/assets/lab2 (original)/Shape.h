/*
 file - Shape.h
 brief - this file has no implementation since it is an abstract base class. This just allows for
 the derived classes to be linked together in some way. Derived classes will have implementation.
 */
#ifndef SHAPE_H
#define SHAPE_H
#include <string>

class Shape
{
public:
    virtual double area() const = 0; // derived class defines this
    virtual std::string shapeName() const = 0; // derived class defines this
    virtual ~Shape() {}; //derived class defines this
};

#endif
