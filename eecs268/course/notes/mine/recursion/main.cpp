/*
 recursion
 
 recursive function
 function that calls itself
 */

#include <iostream>

void recFunc(int i) {
    
    if (i < 5) {
            
        std::cout << "i = " << i <<  std::endl;
        
        recFunc(i + 1);
    
    }

}

int main() {
    
    //initial call
    recFunc(0);

    
    return(0);
}
