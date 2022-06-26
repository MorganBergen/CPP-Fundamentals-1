/* -----------------------------------------------------------------------------
 *
 * File Name:  exercise3.cpp
 * Author: Morgan Bergen
 * Assignment:   EECS-168/169 Lab 2
 * Description:
 * This program will convert the input temperature from Fahrenheit to Celsius.
 * Write a program that the user enters the temperature in Fahrenheit and program converts the temperature Celsius. This program should:
 * Obtain a temperature
 * Read the floating-point numbers from the keyboard.
 * Display the temperatures.
 * Formula: T(°C) = (T(°F) - 32) × 5/9
 * Date: Tue Feb 23 15:15:2
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <math.h>

int main(){

    float userTempF = 0.0;
    
        std::cout << "Input a Temperature in Farhenheit: ";
        std::cin >> userTempF;
    
    float convertedTempC;
    double five = 5;
    double nine = 9;
    double fiveDNine = five/nine;
    convertedTempC = ((userTempF - 32) * fiveDNine);
    
        std::cout << userTempF << "ºF" << " = " << convertedTempC << "ºC" << std::endl;
    
    return(0);
}

