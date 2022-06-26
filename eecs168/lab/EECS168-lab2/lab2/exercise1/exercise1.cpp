/* -----------------------------------------------------------------------------
 *
 * File Name:  exercise1.cpp
 * Author: Morgan Bergen
 * Assignment:   EECS-168/169 Lab 2
 * Description:
 * In this exercise we will use the Math class to perform square root calculations.
 * Create a program to solve for the hypotenuse of a right triangle.
 * The formula is simple, a^2 + b^2 = c^2.
 * You will obtain a value for a and b then solve for c.
 * You will need to use the sqrt() function.
 * Make your output look like the sample output below.
 * Sample Output:
 * Will use the formula a^2 + b^2 = c^2 to solve for the hypotenuse of a triangle.
 * Input a value for a: 8.0
 * Input a value for b: 10.5
 * The hypotenuse is : 13.2004
 * Date: Tue Feb 23 14:13:26
 *
 ---------------------------------------------------------------------------- */

#include <iostream>
#include <math.h>

int main(){
        
    double base; // The base side
    double perp; // The perpendicular side
    double hypo; // The hypotenuse
    
    std::cout << "Will use the formula a^2 + b^2 = c^2 to solve for the hypotenuse of a triangle." << std::endl;
    std::cout << "Input a value for a: ";
    std::cin >> base;
    
    std::cout << "Input a value for b: ";
    std::cin >> perp;
    
    hypo = 0.0;
    hypo = sqrt(pow(base, 2) + pow(perp, 2));
    
    std::cout << "The hypotenuse is: " << hypo << std::endl;
    
    return(0);
}

