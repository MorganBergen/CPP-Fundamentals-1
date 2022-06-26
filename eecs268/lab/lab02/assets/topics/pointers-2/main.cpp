#include <iostream>
#include <string>

int main(){
    
    
    //different memory addresses same variable values
    
    int* yellow;
    int* orange;
    
    int six = 6;
    int two = 2;
    
    yellow = &six;
    orange = &two;
    
    *yellow = *orange;
    
    //yellow's variable value in which its pointing to has changed to 2
    //however yellow's memory address is not the same as that of orange
    
    std::cout << "*yellow   " << *yellow << std::endl;
    std::cout << "*orange   " << *orange << std::endl;
    std::cout << "yellow    " << yellow << std::endl;
    std::cout << "orange    " << orange << std::endl;
    
    //same memory addresses and obviously same variable values
    
    int* circle;
    int* square;
    
    int seven = 7;
    int one = 1;
    
    circle = &seven;    //initialized to the memory address of seven
    square = &one;      //initialized to the memory address of one
    
    std::cout << "*circle   " << *circle << std::endl;
    std::cout << "*square   " << *square << std::endl;
    std::cout << "circle    " << circle << std::endl;
    std::cout << "square    " << square << std::endl;
    
    circle = square;
    //circle now points to the same memory address to that of square
    
    std::cout << "*circle   " << *circle << std::endl;
    std::cout << "*square   " << *square << std::endl;
    std::cout << "circle    " << circle << std::endl;
    std::cout << "square    " << square << std::endl;
    
    
    
    return(0);
}

/*
 
 Self-Test Exercises of Chapter 9
 
 1. Explain the concept of a pointer in C++
 A pointer is a memory address of a variable
 A point of type int, is not actually of type int, but rather is capable of holding a variable whose value is of type int.
 
 2.  What unfortunate misinterpretation can occur with the following declaration.
 int* inPtr1, inPtr2;
 
 inPtr2 is not a pointer, although it appears as though it is a int* data type.
 
 3.  Give at least two uses of the * operator.  State what the * is doing, and name the use of the * that you present.
 
 *operator can be used to declare a pointer of anytype.
 example:
 int* pointer1;
 
 *operator can be used to output the variable value for which the pointer is pointing to
 
 std::cout << *pointer;
 
 *operator can be used for an assignment whereby the value of the variable in which the pointer is pointing is changed
 example:
 int* orange;
 int* yellow;
 
 *orange = 62;
 *yellow = 7;
 
 *orange = *yellow;
 
 then orange is pointing to the same memory location, but with a different value, speifically it is pointing to the same value in which yellow is pointing to
 
 */
