/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Morgan Bergen
 * Assignment:   EECS-168/169 Lab 6
 * Description: Exercise 4: Arrays, Reading from File, and Writing to File

 Create a program that performs the following:
 Prompts the user for a file name and stores it.
    Prompts the user until they give the name of a file that can be opened.
 Read in and store the double in the file then...
 Create a copy of the values in another array of the same size.
    Then, normalize the values in the copy (yes this will chnage values)
    The largest value is always normalized to 1.0 and the smallest to 0.0
    The values in between are adjusted to be between 0 and 1 but represent their former ratios to the original number
    Hint:  (value - min)/(max - min)
 Create a copy of the original array then reverse the order of value (e.g. the first value in the original will be the last value in the new array)
 Once you have the normalized and reversed arrays, store them in two separate files along with the original values
    Store the normalized array in a file called "normalized.txt"
    Store the reversed array in a file called "reversed.txt"
 
 Assume the user types in "input.txt" as the file name and the file contains the following:
 5
 10.0
 40.0
 20.0
 30.0
 50.0
 
 Example normalized.txt.
 Original array: [10, 40, 20, 30, 50]
 Normalized array: [0, 0.75, 0.25, 0.5, 1]
 
 Example of reserved.txt
 Original array: [10, 40, 20, 30, 50]
 Reversed array: [50, 30, 20, 40, 10]
 
 WARNING:
    We will test your program with different files that may have different contents
    Test your program by changing the contents of your file and run your program again
    You shouldn't need to recompile your code even if the input file changes changes
    You can assume the file will be properly formatted and conatin good data
 
 Debugger Remainder
 Arrays is a great opprotunity to revisit and use the debugger. Open up GDB or DDD and take a look at the contents of your array through the debugger. DDD can even show you a visualization of the array's contents.
 
 * Date: Thu Apr  1  17:30:36 CDT 2021
 *
 ---------------------------------------------------------------------------- */


#include <iostream>
#include <fstream>

int main(){

    std::string userFile;
    std::ifstream inFile;

    do {
        std::cout << "Please enter a file name (example: name.txt): ";
        std::cin >> userFile;
    
    } while (userFile != "input.txt");
        
    inFile.open(userFile);
    
    if (inFile.is_open()) {
        
        int size;
        inFile >> size;
        double storage[size];
        
        for (int i = 0; i <= size; i++) {
            if (i == 0) {
            } else {
                inFile >> storage[i];
            }
        }
        
        std::cout << "Original Array: ";
        for (int i = 1; i <= size; i++) {
            if (i == 1){
                std::cout << "[" << storage[i] << ", ";
            } else if (i == size){
                std::cout << storage[i] << "]\n";
            } else {
                std::cout << storage[i] << ", ";
            }
        }
        
        double max = storage[1];
        double min = storage[1];

        for (int i = 1; i <= size; i++) {
            if (storage[i] > max) {
                max = storage[i];
            }
        }
        for (int i = 1; i <= size; i++){
            if (storage[i] < min){
                min = storage[i];
            }
        }
        
        double normalized[size];
        for (int i = 1; i <= size; i++) {
            normalized[i] = 0.0;
        }
        for (int i = 1; i <= size; i++) {
            if (i == 1) {
                normalized[i] = 0;
            } else if (i == size) {
                normalized[i] = 1;
            } else {
                normalized[i] = (((storage[i]) - min)/(max - min));
            }
        }
        
        std::cout << "Normalized Array: ";
        for (int i = 1; i <= size; i++) {
            if (i == 1) {
                std::cout << "[" << normalized[i] << ", ";
            } else if (i == size) {
                std::cout << normalized[i] << "]";
            } else {
                std::cout << normalized[i] << ", ";
            }
        }
        
        double reversed[size];
        for (int i = 1; i <= size; i++) {
            reversed[i] = 0.0;
            reversed[i] = storage[i];
        }
        
        for (int i = 1, j = size - 1; i <= j; i++, j--){
            int t = storage[i];
            storage[i] = storage[j];
            storage[j] = t;
        }
        std::cout << "\nReversed Array: ";
        for (int i = 1; i <= size; i++) {
            if (i == 1) {
                std::cout << "[" << reversed[i] << ", ";
            } else if (i == size) {
                std::cout << reversed[i] << "]";
            } else {
                std::cout << reversed[i] << ", ";
            }
        }
        
        
        
        inFile.close();
        
    } else {
        std::cerr << "File could not be opened!\n";
    }
    
    

    
	return(0);
}











































