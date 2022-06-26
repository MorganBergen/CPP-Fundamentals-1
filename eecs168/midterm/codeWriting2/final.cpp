/*
 Write a complete main.cpp to do the following:
 Create two arrays of characters based on sizes from the user
 (the arrays do not need to be the same size.
 Let the user fill each array with characters
 After the arrays are filled, you will swap as many values as possible between the arrays
 (remember, the arrays may be different sizes!) and print the updated arrays.
 
 Example:
 
 Arrays before the swap:                Arrays after the swap:
 array1: [a, b, c, d, e, f, g]          array1: [x, y, z, d, e, f, g]
 array2: [x, y, z]                      array2: [a, b, c]
 
 After printing the message, ask the user if they want to exit.
 If they type an 'e' or 'E' then the program should exit, otherwise repeat the entire program until they want to exit.
 Sensible variable names
 Sensible variable types
 */

#include <iostream>

int main(){
    
    char choice = '\0';
    
    do {
        
        char choice = '\0';
        int size1 = 0;
        int size2 = 0;
        char array1[size1];
        char array2[size2];
        
        std::cout << "\nEnter a size number: ";
        std::cin >> size1;
        
        // recieving array input from user
        for (int i = 1; i <= size1; i++) {
            std::cout << "Enter character (" << i << '/' << size1 << ") : ";
            std::cin >> array1[i];
        }
        
        char stored1[size1];
        char secondStored1[size1];
        // storing the values into an array
        for (int i = 1; i <= size1; i++) {
            stored1[i] = array1[i];
        }
        for (int i = 1; i <= size1; i++) {
            secondStored1[i] = array1[i];
        }

        std::cout << "\nEnter a size number: ";
        std::cin >> size2;
        
        // recieving array input from user
        for (int i = 1; i <= size2; i++) {
            std::cout << "Enter character (" << i << '/' << size2 << ") : ";
            std::cin >> array2[i];
        }
        
        char stored2[size2];
        char secondStored2[size2];
        // storing the values into an array
        for (int i = 1; i <= size2; i++) {
            stored2[i] = array2[i];
        }
        for (int i = 1; i <= size2; i++) {
            secondStored2[i] = array2[i];
        }

        // printing arrays before the swap to the user
        std::cout << "\nArrays before the swap: ";
        std::cout << "\narray1: ";
        for (int i = 1; i <= size1; i++) {
            if (i == 1) {
                std::cout << '[' << stored1[i] << ", ";
            } else if (i == size1) {
                std::cout << stored1[i] << ']';
            } else {
                std::cout << stored1[i] << ", ";
            }
        }
        
        std::cout << "\narray2: ";
        for (int i = 1; i <= size2; i++) {
            if (i == 1) {
                std::cout << '[' << stored2[i] << ", ";
            } else if (i == size2) {
                std::cout << stored2[i] << ']';
            } else {
                std::cout << stored2[i] << ", ";
            }
        }
        
        // sorting algorithm
        std::cout << "\n\nArrays after the swap: ";
        if (size1 > size2) {
            for (int i = 1; i <= size2; i++) {      //swapped
                stored1[i] = stored2[i];
            }
            for (int i = 1; i <= size2; i++) {      //swapped
                secondStored2[i] = secondStored1[i];
            }
            std::cout << "\narray1: ";
            for (int i = 1; i <= size1; i++) {
                if (i == 1) {
                    std::cout << '[' << stored1[i] << ", ";
                } else if (i == size1) {
                    std::cout << stored1[i] << ']';
                } else {
                    std::cout << stored1[i] << ", ";
                }
            }
            std::cout << "\narray2: ";
            for (int i = 1; i <= size2; i++) {
                if (i == 1) {
                    std::cout << '[' << secondStored2[i] << ", ";
                } else if (i == size2) {
                    std::cout << secondStored2[i] << ']';
                } else {
                    std::cout << secondStored2[i] << ", ";
                }
            }
            std::cout << '\n';
        } else if (size2 > size1) {
            for (int i = 1; i <= size1; i++){       //swapped
                stored2[i] = stored1[i];
            }
            for (int i = 1; i <= size2; i++){       //swapped
                secondStored1[i] = secondStored2[i];
            }
            std::cout << "\narray1: ";
            for (int i = 1; i <= size1; i++) {
                if (i == 1) {
                    std::cout << '[' << secondStored1[i] << ", ";
                } else if (i == size1) {
                    std::cout << secondStored1[i] << ']';
                } else {
                    std::cout << secondStored1[i] << ", ";
                }
            }
            std::cout << "\narray2: ";
            for (int i = 1; i <= size2; i++) {
                if (i == 1) {
                    std::cout << '[' << stored2[i] << ", ";
                } else if (i == size2) {
                    std::cout << stored2[i] << ']';
                } else {
                    std::cout << stored2[i] << ", ";
                }
            }
        } else {
            for (int i = 1; i <= size1; i++) {
                stored1[i] = stored2[i];
            }
            for (int i = 1; i <= size1; i++) {
                secondStored2[i] = secondStored1[i];
            }
            std::cout << "\narray1: ";
            for (int i = 1; i <= size1; i++) {
                if (i == 1) {
                    std::cout << '[' << stored1[i] << ", ";
                } else if (i == size1) {
                    std::cout << stored1[i] << ']';
                } else {
                    std::cout << stored1[i] << ", ";
                }
            }
            std::cout << "\narray2: ";
            for (int i = 1; i <= size1; i++) {
                if (i == 1) {
                    std::cout << '[' << secondStored2[i] << ", ";
                } else if (i == size1) {
                    std::cout << secondStored2[i] << ']';
                } else {
                    std::cout << secondStored2[i] << ", ";
                }
            }
        }
        std::cout << "\n;
        
        
        std::cout << "Would you like to exit? (e/E): ";
        std::cin >> choice;
        std::cout << '\n';
        
    } while ((choice == 'e') || (choice == 'E'));
    
    return(0);
}

