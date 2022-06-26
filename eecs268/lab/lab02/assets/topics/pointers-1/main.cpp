#include <iostream>
#include <string>

int main(){
    
    /*
     
     pointer
     a pointer is a memory address
     
     *
     the *operator in front of a pointer variable produces the variable it points to
     the *operator is called the dereferencing operator
     
     &
     the &operator in front of an ordinary variable produces the address of that variable
     the &operator is called the address-of operator
     
     new
     the new operator can be used to create variables that have no identifiers to serve as their names
     the new operator creates a via pointer
     
     */
    
    
    int green = 35;
    int* greenPointer;
    
    greenPointer = &green;
    
    std::cout << "\n\n\n\n";
    
    std::cout << "example 1\n" << std::endl;
    std::cout << "int green = 35;\nint* greenPointer;" << std::endl;
    std::cout << "greenPointer = &green\n\n" << std::endl;
    
    std::cout << "output:" << std::endl;
    std::cout << "green         " << green << std::endl;
    std::cout << "&green        " << &green << std::endl;
    std::cout << std::endl;
    std::cout << "greenPointer  " << greenPointer << std::endl;
    std::cout << "&greenPointer " << &greenPointer << std::endl;
    std::cout << "*greenPointer " << *greenPointer << std::endl;
    
    std::cout << "\n\n\n\n";
    
    int v1;
    int* p1;
    
    v1 = 0;
    p1 = &v1;
    *p1 = 42;
    
    std::cout << "example 2\n" << std::endl;
    std::cout << "v1 = 0;\np1 = &v1;\n*p1 = 42;\n" << std::endl;
    
    std::cout << "output:" << std::endl;
    std::cout << "v1            " << v1 << std::endl;
    std::cout << "&v1           " << &v1 << std::endl;
    std::cout << std::endl;
    std::cout << "p1            " << p1 << std::endl;
    std::cout << "&p1           " << &p1 << std::endl;
    std::cout << "*p1           " << *p1 << std::endl;
    
    std::cout << "\n\n\n\n";
    
    
    
    
    
    std::cout << "\n\n\n\n";
    return(0);
}
