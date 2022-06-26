#include <iostream>


int main(){
    
    int* p1;
    int* p2;
    
    p1 = new int;   //p1 is now an empty pointer, capable of storing ints
    
    std::cout << "p1 is pointing to unnamed memory address of   " << p1 << std::endl;
    std::cout << "p1's memory address is                        " << &p1 << std::endl;
    
    *p1 = 42;
    p2 = p1;    //p2's memory address will be the same as p1's memory address
    
    std::cout << "*p1       " << *p1 << std::endl;
    std::cout << "*p2       " << *p2 << std::endl;
    
    
    *p2 = 53;
    
    //when you now state that *p2 is a different value, that of 53.
    //you are now essentially changing the variable value of *p1 as well
    //the reason for this, is because p1 is pointing to the same address in memory to that of p2.
    std::cout << "*p1       " << *p1 << std::endl;
    std::cout << "*p2       " << *p2 << std::endl;
    
    //but note that the address that p1 is pointing, remember that that address is the same to that of p2, demonstrated by the code below
    std::cout << "p1        " << p1 << std::endl;
    std::cout << "p2        " << p2 << std::endl;
     
    p1 = new int;
    //now you are initializing a brand new memory address for which p1 is pointing to
    
    return(0);
}
