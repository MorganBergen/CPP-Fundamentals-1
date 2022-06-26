#include <iostream>
#include "Node.h"

int main(){
    
    std::cout << "compiled" << std::endl;
    
    Node one(5);
    std::cout << one.getEntry() << std::endl;
    
    return(0);
}
