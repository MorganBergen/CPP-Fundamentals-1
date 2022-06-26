#include <iostream>
#include <string>
#include "dog.h"
#include "cat.h"
#include "animal.h"

int main(int argc, const char * argv[]) {
    
    dog mark;
    std::cout << mark.getName() << std::endl;
    mark.setName("mark");
    std::cout << mark.getName() << std::endl;
    
    cat hamilton;
    std::cout << hamilton.getName() << std::endl;
    hamilton.setName("hamilton");
    std::cout << hamilton.getName() << std::endl;
    
    return 0;
}
