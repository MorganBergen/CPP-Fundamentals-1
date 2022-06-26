/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Morgan Bergen
 * Assignment:   EECS-168/169 Lab 6
 * Description: Exercise 1:  Basic Numeric Computation
 * Create an array of 5 doubles.
 * (We know the size at compile time, where do you want to allocate this?)
 * Now that you have an array, we need to get values.
 * Create a loop that will ask the user to input values for the array.
 * Display the values back to the user afte ryou obtain all of them.
 * Test this before moving on.
 * Calculate sum, average, min, and max for the array of doubles.
 * Date: Thu Apr  1 15:25:41 CDT 2021
 *
 ---------------------------------------------------------------------------- */

#include <iostream>

int main(){
    
    const int SIZE = 5;
    double numbers[SIZE];
    int sum = 0;
    int average = 0;
   
    
    std::cout << "Please enter 5 numbers" << '\n';
    
    for (int i = 0; i < SIZE; i++) {
        std::cout << "Input a number into your array: ";
        std::cin >> numbers[i];
    }
    
    std::cout << "Here are all the numbers in your array: " << '\n';
    
    for (int i = 0; i < SIZE; i++) {
        std::cout << numbers[i] << '\n';
    }

    //sum
    for (int i = 0; i < SIZE; i++) {
        sum = sum + numbers[i];
    }
    std::cout << "The sum of all the values is: " << sum << '\n';
    //sum
    
    //average
    std::cout << "The avergae of all the values is: ";
    average = sum/SIZE;
    std::cout << average << '\n';
    //average
    
    //largest
    int largest = numbers[0];
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    std::cout << "The largest value is: " << largest << '\n';
    //largest
    
    //smallest
    int smallest = numbers[0];
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    std::cout << "The smallest value is: " << smallest << '\n';
    //smallest
    
    return (0);
}
