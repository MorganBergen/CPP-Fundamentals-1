/*
 Boardwork Feb 18

 Create a complete main.cpp that obtains two numbers from the user.  The first will be a numerator and the second a denominator.  You will print the full equation and answer the long division.
 */

#include <iostream>

int main(){
    
    int numInput;
    int denInput;
    
    std::cout << "Enter the numerator: ";
    std::cin >> numInput;
    
    std::cout << "Enter the denominator: ";
    std::cin >> denInput;
    
    int numDividDen = numInput/denInput;
    int numModDen = numInput%denInput;
    
    std::cout << numInput << '\\' << denInput << " = " << numDividDen << 'R' << numModDen << std::endl;
    
    return(0);
}
