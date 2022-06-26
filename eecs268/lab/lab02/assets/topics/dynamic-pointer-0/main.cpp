#include <iostream>


int main(){
    
    /*
     the new operator creates a dynamic variable of a specified type and returns a pointer that points to this new variable.
    the operator new can be used to create variables that have no identifiers to serve as their names.
     These nameless variables are referred to as via pointers
     */
    
    int* p1;
    p1 = new int;
    std::cout << "\n\n\n";
    std::cout << "Please enter an integer:      ";
    std::cin >> *p1;
    
    std::cout << "You entered the integer:      " << *p1 << std::endl;
    std::cout << "It's memory address is        " << &p1 << std::endl;
    std::cout << "Your input memory address is  " << p1 << std::endl;
    
    return(0);
}
