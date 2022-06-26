#include <iostream>

int main(){

    for (int i = 0; i < 1001; i++) {
            std::cout << 'A';
        for (int j = 1000; j == i; j--) {
            std::cout << "H!" << std::endl;
        }
    }

    for (int i = 0; i < 1001; i++) {
        std::cout << 'A';

for (int j = 1000; j == i; j--){
std::cout << "H!" << std::endl;
}
    }

    
    return(0);
}

/*
 For loop
 
    for (initialization; condition; increment) {
        loop body:  statement
    }
    
    i stands for iterator or index
 
 Infinite loops:  Loops that never stop ∞
 
 //GOAL"  Print the values 1 to 5000000
 std::cout << "Notes for Mar 2" << std::endl;
 
 std::cout << std::endl;
 
 for (int i = 0; i <= 10; i++) { // i = i + 1;
     std::cout << i << std::endl;
 }
 // Print 500 down to 0
 for (int i = 500; i >= 0; i--) {
     std::cout << i << std::endl;
 }
 // Print 5000 to 6000
 for (int i = 5000; i <= 6000; i++) {
     std::cout << i << std::endl;
 }
 
 
    Syntactial Sugar
    
    Increase lcv by 1 increment
    lcv = lcv + 1
    lcv += 1
    lcv++
    ++lcv
 
    Decrease lcv by 1 decrement
    lcv = lcv - 1
    lcv -= 1
    lcv--
    --lcv
 
    Other Shorthand Operators
    +=
    -=
    *=
    /=
    %=
 
 
 */
