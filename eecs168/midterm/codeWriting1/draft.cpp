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

    std::cout << '\n';
    int size;
    std::cout << "Please input a number: ";
    std::cin >> size;
    std::cout << '\n';
    
    
    // determining if the grid has a median
    
    double median = ((size + 1)/2.0);
    double medianDecimal = (median - int(median));
    
    std::cout << median << '\n';
    std::cout << "floor = " << floor(median) << '\n';
    std::cout << "ceil = " << ceil(median) << '\n';
    
    if (floor(median) != median && ceil(median) != median) {
        std::cout << "you win!";
    } else {
        std::cout << '\n';
    }
    
    if (medianDecimal == 0) {
        std::cout << "there is a middle\n";
    } else {
        std::cout << "there is no middle\n";
    }
    

    std::cout << "n = " << size << '\n';
    
    switch (size) {
        case 3:
            for (int i = 1; i <= size; i++) {
                if (i % 2 == 0) {
                    for (int j = 1; j <= size; j++) {
                        if (j == 1 || j == size) {
                            std::cout << i;
                        }
                        else {
                            std::cout << 'D';
                        }
                    }
                }
                else {
                    for (int j = 1; j <= size; j++) {
                        if (j == 1 || j == size) {
                            std::cout << 'D';
                        }
                        else {
                            std::cout << i;
                        }
                    }
                }
                std::cout << '\n';
            }
            break;
            
        case 4:
            
            for (int i = 1; i <= size; i++) {
                if (i == 1 || i == size) {
                    for (int j = 1; j <= size; j++) {
                        if (j == 1 || j == size) {
                            std::cout << 'D';
                        } else {
                            std::cout << i;
                        }
                    }
                } else {
                    for (int j = 1; j <= size; j++) {
                        if (j == 1 || j == size) {
                            std::cout << i;
                        } else {
                            std::cout << 'D';
                        }
                    }
                }
                std::cout << '\n';
            }
            break;
            
        case 5:
            for (int i = 1; i <= size; i++) {
                if (i == 1 || i == size) {
                    for (int j = 1; j <= size; j++) {
                        if (j == 1 || j == size) {
                            std::cout << 'D';
                        } else {
                            std::cout << i;
                        }
                    }
                } else if (i % 2 == 0) {
                    for (int j = 1; j <= size; j++) {
                        if (j % 2 == 0) {
                            std::cout << 'D';
                        } else {
                            std::cout << i;
                        }
                    }
                } else {
                    for (int j = 1; j <= size; j++) {
                        if (i == j) {
                            std::cout << 'D';
                        } else {
                            std::cout << i;
                        }
                    }
                }
                std::cout << '\n';
            }
            
            break;
            
        default:
            for (int i = 1; i <= size; i++) {
                if (i == 1 || i == size) {
                    for (int j = 1; j <= size; j++) {
                        if (j == 1 || j == size) {
                            std::cout << 'D';
                        } else {
                            std::cout << i;
                        }
                    }
                } else if ((floor(median) != median && ceil(median) != median)){
                    for (int j = 1; j <= size; j++) {
                        if (j == 1 || j == size) {
                            std::cout << i;
                        } else {
                            std::cout << 'D';
                        }
                    }
                    
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
            break;
    }

    std::cout << "\nn = 3\n";
    std::cout << "D1D\n2D2\nD3D\n";
    std::cout << "\nn = 4\n";
    std::cout << "D11D\n2DD2\n3DD3\nD44D\n";
    std::cout << "\nn = 5\n";
    std::cout << "D111D\n2D2D2\n33D33\n4D4D4\nD555D\n\n";

    return (0);
}
