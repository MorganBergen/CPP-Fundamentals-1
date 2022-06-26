/* -----------------------------------------------------------------------------
 *
 * File Name:  exercise2.cpp
 * Author: Morgan Bergen
 * Assignment:   EECS-168/169 Lab 2
 * Description:
 * You will create a program that solves the quadratic equation.
 * You will obtain an a, b, and c from the user
 * You may assume the user will give values for a, b, and c that are valid.
 * Assume the user will input values that have valid roots
 * The result should look like below:
 *      Input a: 1.5
 *      Input b: 6.5
 *      Input c: 3.0
 *      root 1: -0.5252
 *      root 2: -3.8081
 * Date: Tue Feb 23 14:46:29
 *
 ---------------------------------------------------------------------------- */

#include <iostream>
#include <math.h>

int main(){
    
    // User will input the value for a, b, c
    double aInput;
    double bInput;
    double cInput;
    
    std::cout << "Input a: ";
    std::cin >> aInput;
    std::cout << "Input b: ";
    std::cin >> bInput;
    std::cout << "Input c: ";
    std::cin >> cInput;
    
    double rootAdd = 0.0; // The Quadratic Equation using Addition
    rootAdd = ((-1 * bInput) + sqrt((pow(bInput, 2)) - 4*aInput*cInput))/(2*aInput);
    
    double rootSub = 0.0; // The Quadratic Equation using Subtraction
    rootSub = ((-1 * bInput) - sqrt((pow(bInput, 2)) - 4*aInput*cInput))/(2*aInput);
    
    std::cout << "root 1: " << rootAdd << std::endl;
    std::cout << "root 2: " << rootSub << std::endl;
    
    return(0);
}
