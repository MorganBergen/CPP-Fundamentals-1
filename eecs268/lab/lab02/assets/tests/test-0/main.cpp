#include "Executive.h"

#include <iostream>

int main(int argc, const char* argv[]){
    
    std::cout << std::endl;
    
    std::cout << "allocating memory for the array object of type executive" << std::endl;
    Executive* array = new Executive[5];
    
    for (int i = 0; i < 5; i++) {
        array[i].setValue(i);
    }
    std::cout << "\nvalues in the object stored in the array" << std::endl;
    for (int i = 0; i < 5; i++){
        std::cout << "object at index: " << i << " == value: " << array[i].getValue() << std::endl;
    }
    
    std::cout << "\nabout to delete array" << std::endl;
    delete[] array;
    std::cout << "\nprogram exiting..." << std::endl;
    
    return(0);
}


/*
 std::cout << "\ncompiled!" << std::endl;
 
 if (argc < 2) {
     std::cerr << "incorrect number of parameters.";
 } else {
     std::cout << "correct number of parameters";
     
     
 }
 
 */
