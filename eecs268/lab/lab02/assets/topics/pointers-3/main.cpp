#include <iostream>

int main(){
    
    std::cout << "\nDynamic Pointers\n" << std::endl;
    
    int* p1;        //(a)   p1 is declared, undefined, and uninitialized
    int* p2;        //(a)   p2 is declared, undefined, and uninitialized
    
    p1 = new int;   //(b)   p1 points to an new empty address
    *p1 = 42;       //(c)   address is now filled with the value 42
    p2 = p1;        //(d)   p2 now points to the same address as p1
    
    std::cout << "*p1 == " << *p1 << std::endl;
    std::cout << "*p2 == " << *p2 << std::endl;
    std::cout << p1 << " = " << p2 << std::endl;
    
    *p2 = 53;       //(e)   replaces the value of 42 to 53, for p1 and p2
    
    std::cout << "\n*p1 == " << *p1 << std::endl;
    std::cout << "*p2 == " << *p2 << std::endl;
    std::cout << p1 << " = " << p2 << std::endl;
    
    p1 = new int;   //(f)   p1 points to a new empty address
    *p1 = 88;       //(g)   the new address is filled with the value 88
    
    std::cout << "\n*p1 == " << *p1 << std::endl;
    std::cout << "*p2 == " << *p2 << std::endl; //p2 is unchanged
    std::cout << p1 << " ≠ " << p2 << std::endl;
    
    std::cout << "\n" << std::endl;
    
    std::cout << "*p1 == " << *p1 << std::endl;
    std::cout << " p1 == " << p1 << std::endl;
    std::cout << "&p1 == " << &p1 << std::endl;
    
    std::cout << "\n" << std::endl;
    std::cout << "*p2 == " << *p2 << std::endl;
    std::cout << " p2 == " << p2 << std::endl;
    std::cout << "&p2 == " << &p2 << std::endl;

    return(0);
}
