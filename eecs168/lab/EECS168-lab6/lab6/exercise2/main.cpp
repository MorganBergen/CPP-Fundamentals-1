/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Morgan Bergen
 * Assignment:   EECS-168/169 Lab 6
 * Description: Exercise 2: Array of strings
 * Create an array of strings.
 * Let the user decide how big this array is, but it must have at least 1 element.
 * Prompt them until they give a valid size.
 * Prompt the user to populate the array with strings.
 * Display the longest and shortest string.
 * Date: Thu Apr  1 15:57:47 CDT 2021
 *
 ---------------------------------------------------------------------------- */

#include <iostream>
#include <string>

int main(){

    int size = 0;
    
    std::cout << "Input an array size for you words array: ";
    std::cin >> size;
    
    const int finalSIZE = size;
    std::string arr[finalSIZE];
    
    std::cout << "Now please enter " << size << " words" << '\n';
    
    for (int i = 0; i < finalSIZE; i++) {
        std::cout << "Input a word: ";
        std::cin >> arr[i];
    }

    int longest = int(arr[0].length());
    std::string longestArr[finalSIZE];
    int indexPosition = 0;
    
    for (int i = 0; i < finalSIZE; i++) {
        if (arr[i].length() > longest) {
            indexPosition = i;
            longestArr[indexPosition] = arr[i];
        }
    }
    int longestPosition = indexPosition;
    std::cout << "The longest word is: " << longestArr[longestPosition] << '\n';
    
    int shortest = int(arr[0].length());
    std::string shortestArr[finalSIZE];
    int indexPosition2 = 0;
    
    for (int i = 0; i < finalSIZE; i++) {
        if (arr[i].length() < shortest) {
            indexPosition2 = i;
            shortestArr[indexPosition2] = arr[i];
        }
    }
    int shortestPosition = indexPosition2;
    std::cout << "The shortest word is: " << shortestArr[shortestPosition] << '\n';
    
    return (0);
}

