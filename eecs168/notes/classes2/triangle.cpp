//cpp files for classes are called implementation files
//all methods are defined in the cpp file

//first thing to do in a cpp file is include the header file of the class youre working in
#include "Triangle.h"

//This method belongs to the triangle class
//scope resolution operator
double Triangle::area(){
    
    //base and height's values will be determined based on which instance is doing the calling
    double ans = 0;
    ans = 0.5*base*height;
    
    return(ans);
}