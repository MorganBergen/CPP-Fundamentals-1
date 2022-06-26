#include <iostream>

int main(){
    
    int array_size;
    
    std::cout << "Enter array size: ";
    std::cin >> array_size;
    
    int* array;
    array = new int[array_size];
    
    for (int i = 0; i < array_size; i++){
        array[i] = i;
    }
    
    for (int i = 0; i < array_size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < array_size; i++){
        std::cout << &array[i] << " ";
    }
    
    std::cout << "\nEnter array size: ";
    std::cin >> array_size;
    
    for (int i = 0; i < array_size; i++){
        array[i] = i+1;
    }
    
    for (int i = 0; i < array_size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < array_size; i++) {
        std::cout << &array[i] << " ";
    }
    
    delete[] array;
    
    return(0);
    
}
