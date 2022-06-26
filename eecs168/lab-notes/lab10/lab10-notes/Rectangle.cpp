
//cpp files for classes are implementation files
//All methods are defined in the cpp file

//First thing to do in cpp is include the header file
#include "rectangle.h"

Rectangle::Rectangle(){
    
    //Assigning base and height initial values
    width = 0;
    height = 0;
}

double Rectangle::area(){
    
    double ans = 0;
    ans = width * height;
    return(ans);
    
}
