/* -----------------------------------------------------------------------------
 *
 * File Name:  exercise4.cpp
 * Author: Morgan Bergen
 * Assignment:   EECS-168/169 Lab 2
 * Description:
 * Casting character and ints
 * This exercise you'll see how to cast a character to an int
 * You're only provided sample output:
 * Input a character: a
 * The ASCII value for 'a' is: 97
 * Goodbye!
 * Date: Tue Feb 23 16:37:15
 *
 ---------------------------------------------------------------------------- */

#include <iostream>

int main(){
    
    char userInput;
    std::cout << "Input a Character: ";
    std::cin >> userInput;
    
    int ASCII = static_cast<int>(userInput);
    std::cout << "The ASCII value for '" << userInput << "' is: " << ASCII << std::endl;
    std::cout << "Goodbye!" << std::endl;
    
    return(0);
}

