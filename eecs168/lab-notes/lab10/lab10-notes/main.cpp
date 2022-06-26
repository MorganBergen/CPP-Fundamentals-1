#include  <iostream>
//instead of angle brackets we're using double quotes to include the rectangle class here
#include "rectangle.h"

int main(){
    
    Rectangle r1;
    
    std::cout << "Enter the width: ";
    std::cin >> r1.width;
    
    std::cout << "Enter the height: ";
    std::cin >> r1.height;
    
    std::cout << "The area is: " << r1.area();
    
    return(0);
}
