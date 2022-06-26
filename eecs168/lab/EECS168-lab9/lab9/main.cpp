/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Morgan Bergen
 * Assignment:   EECS-168/169 Lab 9
 * Description: Array Resizing
 * You will create an array manipulation program that allows the user to do pretty much whatever they want to an array.
 * When launching the program, the user will pass in a file name that contains a set of value and an int that informs the program how many values are in the file (see example below)
 * Check to see if the file could be opened. Exit the program if it was not opened, otherwise continue
 * Create an array and fill it with the values from file
 * Present the user with a menu, detect their choice, and provide them any needed follow up prompts that are needed.
 * Continue until they want to quit
 * Date: Fri Apr 23 08:37:42 CDT 2021
 *
 ---------------------------------------------------------------------------- */

#include <iostream>
#include <string>
#include <fstream>

void printMenu();
void print(int arr[], int size);
int count(int arr[], int size, int target);
int* insert(int arr[], int size, int value, int position);
int* remove(int arr[], int size, int position);

int main(int argc, char** argv){
    
    std::string file;
    std::string size;
    std::ifstream inFile;
    
    if (argc > 2) {
        file = argv[1];
        size = argv[2];
    }
    
    const int SIZE = std::stoi(size);
    int nums[SIZE];
    int choice;
    int userInput;
    int position;
    int element;
    
    inFile.open(file);
    if (inFile.is_open()) {
        
        
        for (int i = 0; i < SIZE; i++) {
            inFile >> nums[i];
        }
    }
    
    printMenu();
    std::cin >> choice;
    
    switch (choice) {
        case 1:
            std::cout << "Enter an element: ";
            std::cin >> element;
            std::cout << "Enter a position: ";
            std::cin >> position;
            if (position < 0 || position >= SIZE){
                std::cout << "Invalid position";
            } else {
                break;
            }
            
            insert(nums, SIZE, element, position);
            
            for (int i = 0; i < SIZE; i++) {
                std::cout << nums[i] << " ";
            }
            
            break;
            
        case 2:
            std::cout << "Enter a position: ";
            std::cin >> position;
    
            remove(nums, SIZE, position);
            
            break;
            
        case 3:
            std::cout << "Enter a value: ";
            std::cin >> userInput;
            std::cout << count(nums, SIZE, userInput);
            break;
            
        case 4:
            print(nums, SIZE);
            break;
            
        default:
            break;
    }
    
    return(0);
}

void printMenu(){
    
    std::cout << "Make a selection: \n"
    << "1) Insert\n"
    << "2) Remove\n"
    << "3) Count\n"
    << "4) Print\n"
    << "5) Exit\n"
    << "Choice: ";
    
}

void print(int arr[], int size){
    
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << '\n';
    }
    
}

//returns a count of how many times the target value is in the array
int count(int arr[], int size, int target){
    
    int total = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            total++;
        } else {
        }
    }
    return(total);
}

int* insert(int arr[], int size, int value, int position){
    
    int *base = new int[size + 1];
    for (int i = 0; i < position; i++) {
        base[i] = arr[i];
        base[i] = value;
        size = size + 1;
        for (int j = i + 1; j < size; j++) {
            base[j] = arr[j - 1];
        }
    }
    delete[] arr;
    arr = base;
    return (arr);
}

int* remove(int arr[], int size, int position) {
    int *base = new int[size - 1];
    for(int i = 0; i < position; i++) {
        base[i] = arr[i];
        size = size - 1;
    }
    for(int j = 0; j < size; j++) {
        base[j] = arr[j + 1];
    }
    
    delete[] arr;
    arr = base;
    return arr;
}
