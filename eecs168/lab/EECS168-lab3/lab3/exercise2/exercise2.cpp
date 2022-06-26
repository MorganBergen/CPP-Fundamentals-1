/* -----------------------------------------------------------------------------
 *
 * File Name:  exercise2.cpp
 * Author: Morgan Bergen
 * Assignment:   EECS-168/169 Lab 3
 * Description:
 * Long Division Printer
 * Obtain a numerator and a denominator from the user.
 * Then, display the result of long division from the user.
 * You may assume integers as input.
 * You must prevent the user from crashing the program with their input!
 * Your output should very closely resemble the output below:
 * Enter a numerator: 7
 * Enter a denominator: 3
 * 7 / 3 = 2R1
 * Enter a numerator: 11
 * Enter a denominator: 0
 * Sorry, you may not divide by zero.
 * Date: Mon Mar  8 15:19:23 CST 2021
 *
 ---------------------------------------------------------------------------- */

#include <iostream>

int main(){
    
    int userNum;
    int userDen;
    
    std::cout << "Enter a numerator: ";
    std::cin >> userNum;
    
    std::cout << "Enter a denominator: ";
    std::cin >> userDen;
    
    if (userDen == 0) {
        std::cout << "Sorry, you may not divide by zero.\n";
    } else {
        int quotient = userNum/userDen;
        int remainder = userNum%userDen;
        
        std::cout << userNum << " / " << userDen << " = " << quotient << "R" << remainder << std::endl;
    }
    
    return(0);
}
