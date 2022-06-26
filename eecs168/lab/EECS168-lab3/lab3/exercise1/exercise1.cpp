/* -----------------------------------------------------------------------------
 *
 * File Name:  exercise1.cpp
 * Author: Morgan Bergen
 * Assignment:   EECS-168/169 Lab 3
 * Description:
 * Declare and initialze the variable for wind.
 * Ask the user to enter the speed of the wind and store it in the required * variable.
 * By using simple if or else... if ladder, display the category of hurricane.
 * If the wind speed is invalid (negative speed), display the error.
 * (Use an and statement within the if else)
 * Let's learn about what the different categories of hurricane mean.
 * In short, it all comes down to wind speed.
 * The upper bounds are non-inclusive
 * For example, a category Four is 58 (included) up to but not including 70 m/s.
 * You will obtain a wind speed from the user and tell them
 * either what category or type if it's just a tropical storm.
 * If the wind speed is invalid, print an error.
 * Sample Output:
 * Input a wind speed (m/s): 55
 * A wind speed of 55 m/s is a Category 3 hurricane.
 * Input a wind speed (m/s): -111
 * Negative wind? Sorry, that's invalid.
 * Input a wind speed (m/s): 0
 * A wind speed of 0 m/s is a tropical depression.
 * Date: Mon Mar  8 14:54:29 CST 2021
 *
 ---------------------------------------------------------------------------- */

#include <iostream>

int main(){

    int userInput;
    
    std::cout << "Input a wind speed (m/s): ";
    std::cin >> userInput;
    
    if (userInput >= 70) {
        std::cout << "A wind speed of " << userInput << " m/s is a Category 5 hurricane.\n";
    } else if (userInput >= 58) {
        std::cout << "A wind speed of " << userInput << " m/s is a Category 4 hurricane.\n";
    } else if (userInput >= 50) {
        std::cout << "A wind speed of " << userInput << " m/s is a Category 3 hurricane.\n";
    } else if (userInput >= 43) {
        std::cout << "A wind speed of " << userInput << " m/s is a Category 2 hurricane.\n";
    } else if (userInput >= 33) {
        std::cout << "A wind speed of " << userInput << " m/s is a Category 1 hurricane.\n";
    } else if (userInput >= 18) {
        std::cout << "A wind speed of " << userInput << " m/s is a tropical storm.\n";
    } else if (userInput >= 0) {
        std::cout << "A wind speed of " << userInput << " m/s is a tropical depression.\n";
    } else {
        std::cout << "Negative wind? Sorry, that's invalid.\n";
    }
	return(0);
}
