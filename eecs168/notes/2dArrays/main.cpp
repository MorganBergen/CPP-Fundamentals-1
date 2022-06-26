#include <iostream>

int main(){
    
    //an array of characters
    int nums[3];
    
    //symbol is a pointer that is allocated in the call stack
    char* symbol = nullptr;
    //pointerb is a pointer that is allocated in the call stack
    char* pointerb = nullptr;
    int size = 0;
    
    std::cout << "How many characters?: ";
    std::cin >> size;
    
    //create the array
    symbol = new char[size];
    //Assigning a pointer to a pointer
    pointerb = symbol;
    
    symbol[0] = 'A';
    std::cout << pointerb[0] << '\n'; //Prints A
    pointerb[1] = 'Q';
    delete[] pointerb;
    
    
    return(0);
}


/*
 Anything that is created with the keyword new is a heap allocated array
 arrays solve the problem if there is alot of values you have to declare
 */
