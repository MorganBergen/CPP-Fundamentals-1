#include <iostream>
//Note: Quotes instead of <>arond file
#include "Triangle.h"

int main(){

    Triangle tri1;
    Triangle tri2;

    std::cout << "Enter base and height: ";
    std::cin >> tri1.base >> tri1.height;
    std::cout << "Enter base and height: ";
    std::cin >> tri2.base >> tri2.height;

    //call the area method that belongs to all triangles using tri1
    std::cout << "Area for tri1: " << tri1.area();
    std::cout << std::endl;
    
    //call the area method that belongs to all triangles using tri2
    std::cout << "Area for tri2: " << tri2.area();
    std::cout << std::endl;

    std::string str1 = "dogs";
    std::string str2 = "banana";

    std::cout << str1.length() << '\n';
    std::cout << str2.length();
    /*
    The calling object determines the values for the member variables in the method definition
    */

    return(0);
}
