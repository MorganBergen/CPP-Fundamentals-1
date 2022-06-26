#include <iostream>

void arrayWithSize();
void array();

int main(){
    
    arrayWithSize();
    array();
        
    return(0);
}

void arrayWithSize() {
    double* p;
    p = new double[10];
    
    /*
     an entire array with ten indexed variables is created.
     the pointer p is left pointing to the first of these ten indexed vairbales.
     
     */
    
    std::cout << "\n" << std::endl;
    for (int i = 0; i < 10; i++){
        p[i] = i;
        std::cout << p[i] << " ";
    }
    
    std::cout << "\n" << *p << std::endl;
    delete[] p;
}


void array(){
    
    int *pointer;
    int size;
    std::cout << "Please enter a size: ";
    /*
     The size of the array is determined when the program is run.
     */
    std::cin >> size;
    
    pointer = new int[size];
    
    for (int i = 0; i < size; i++){
        pointer[i] = i;
        std::cout << pointer[i] << " ";
    }
    delete[] pointer;
    
}
