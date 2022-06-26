/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Morgan Bergen
 * Assignment:   EECS-168/169 Lab 6
 * Description: Exercise 3: Arrays with File Input
 *
 * Create an empty text document name "input.txt" and copy the example contents from below:
 * 5
 * 105
 * 15
 * 20
 * 35
 * 47
 * The first value in the file tells you how many ints (the type must be int!) are in the files.
 * The rest of the values are the ints you want to store.
 *
 * After you've read in the values display them to the screen in the following format:
 * Contents of input.txt:
 * [105, 15, 20, 35, 47]
 *
 * Input a value to search for:
 *
 * Example:
 * Contents of input.txt:
 * [105, 15, 20, 35, 47]
 *
 * Input a value to search for: 5
 * 5 is not in the array.
 * Do you wish to quit (y/n): n
 * Input a value to search for: 105
 * 105 is in the array.
 * Do you wish to quit (y/n): y
 * Let the user search as many times as they want.
 *
 * Date: Thu Apr  1  17:30:36 CDT 2021
 *
 ---------------------------------------------------------------------------- */

#include <iostream>
#include <fstream>

int main() {
    
    int first = 5;
    int second = 105;
    int third = 15;
    int fourth = 20;
    int fifth = 35;
    int sixth = 47;
    
    std::ofstream output;
    std::string fileName = "input.txt";
    output.open(fileName);
        
    output << first << '\n';
    output << second << '\n';
    output << third << '\n';
    output << fourth << '\n';
    output << fifth << '\n';
    output << sixth << '\n';
    
    output.close();
    
    std::ifstream input;
    input.open("input.txt");
    
    int totalValues;
    
    if (input.is_open()) {
        
        input >> totalValues;
        std::cout << "Contents of input.txt:" << '\n';

        int valuesArray[totalValues];
        for (int i = 0; i < totalValues; i++) {
            input >> valuesArray[i];
        }
        
        for (int i = 0; i < totalValues; i++) {
            if (i == 0) {
                std::cout << "[" << valuesArray[i] << ", ";
            } else if (i == totalValues - 1) {
                std::cout << valuesArray[i] << "]";
            } else {
                std::cout << valuesArray[i] << ", ";
            }
        }
        std::cout << "\n\n";
        
        char optionQuit;
        
        do {
            int search;
            std::cout << "Input a value to search for: ";
            std::cin >> search;
            
            if (valuesArray[0] == search) {
                std::cout << valuesArray[0] << " is in the array.";
            } else if (valuesArray[1] == search) {
                std::cout << valuesArray[1] << " is in the array.";
            } else if (valuesArray[2] == search) {
                std::cout << valuesArray[2] << " is in the array.";
            } else if (valuesArray[3] == search) {
                std::cout << valuesArray[3] << " is in the array.";
            } else if (valuesArray[4] == search) {
                std::cout << valuesArray[4] << " is in the array.";
            } else {
                std::cout << search << " is not in the array.";
            }
            
            std::cout << "\nDo you wish to quit (y/n): ";
            std::cin >> optionQuit;
            
        } while (optionQuit != 'y' && optionQuit != 'Y');

        input.close();
        
    } else {
        std::cout << "File could not be opened!\n";
    }

    return(0);
}
