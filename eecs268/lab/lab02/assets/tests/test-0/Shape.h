#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape{

public:
    //derived class defines this
    virtual double area() const = 0;
    
    //derived class defines this
    virtual std::string shapeName() const = 0;
    
    virtual ~Shape() {
        //derived class defines this
    };
};

#endif
