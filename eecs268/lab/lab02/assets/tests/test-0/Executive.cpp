#include "Executive.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

#include <iostream>
#include <fstream>
#include <stdexcept>


Executive::Executive(){
    std::cout << "default executive constructor has been invoked" << std::endl;
    value = 0;
}

Executive::~Executive(){
    std::cout << "destructor has been invoked for object with value " << value << std::endl;
}

void Executive::setValue(int new_value){
    value = new_value;
}

int Executive::getValue(){
    return(value);
}

