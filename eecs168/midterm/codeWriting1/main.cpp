/*
Code Writing Program

Write a complete main.cpp to do the following:
Obtain an n for an n x n grid from the user
Print an n x n grid of the pattern below
Sensible variable names
Sensible variable types
Complete main
*/

#include <iostream>

int main() {

    int size;
    std::cout << "Please input a number: ";
    std::cin >> size;
    std::cout << '\n';
    
    // determining if the grid has a median
    double median = ((size + 1)/2.0);
    std::cout << "n = " << size << '\n';
            
            for (int i = 1; i <= size; i++) {
                if (i == 1 || i == size) {
                    for (int j = 1; j <= size; j++) {
                        if (j == 1 || j == size) {
                            std::cout << 'D';
                        } else {
                            std::cout << i;
                        }
                    }
                // if there is no median
                } else if ((floor(median) != median && ceil(median) != median)){
                    for (int j = 1; j <= size; j++) {
                        if (j == 1 || j == size) {
                            std::cout << i;
                        } else {
                            std::cout << 'D';
                        }
                    }
                // if there is a median
                } else if (i == median){
                    for (int j = 1; j <= size; j++) {
                        if (j == median) {
                            std::cout << 'D';
                        } else {
                            std::cout << i;
                        }
                    }
                } else {
                    for (int j = 1; j <= size; j++) {
                        if (j % 2 == 0) {
                            std::cout << 'D';
                        } else {
                            std::cout << i;
                        }
                    }
                }
                std::cout << '\n';
            }

    return (0);
}
