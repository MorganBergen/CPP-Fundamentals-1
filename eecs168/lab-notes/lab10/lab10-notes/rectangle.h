//ifndef define block surround your header file code
//#ifndef FILE_NAME_H

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
    
    //everything is defined as pulic
public:
    
    //consturctor
    Rectangle();
    
    //member variables
    int width;
    int height;
    
    //member methods or functions along with declaration
    double area();

};

#endif
