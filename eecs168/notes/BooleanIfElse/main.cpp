#include <iostream>

int main() {
    int userAge; // Age of User

    std::cout << "Please enter your age: ";
    std::cin >> userAge; // Getting age from user input

    if (userAge >= 21) {
        std::cout << "Welcome!";
    }
    else {
        std::cout << "Scram, junior.";
    }

    return(0);
}






/*
 If statements
 A syntactical tool to let our code make decisions
 
 Template:
 1.  Stand-alone if statement
 
 if (logical expression)
 {
    code runs only if true
 }
 
 2.  If-else statement
 
 #include <iostream>

 int main(){
     
     int x = -5;
     
     if (x > 0)
     {
         std::cout << "x is positive\n";
     }
     
     std::cout << "Existing..\n";
     
     if (x > 0)
     {
         std::cout << "x is positive\n";
     }
     else
     {
         std::cout << "x is NOT positive\n";
     }
     
     return(0);
 }
 
 */






/*
 Booleans
 
 Data tyoe bool, short for boolean
 
 All values:
 true (1);
 false (0);
 
 Comparison Operators
 = equal to ==
 ≠
 
 The purpose of Booleans is for analysis.
 
 
 #include <iostream>

 int main(){
     
     bool myBool;
     bool yourBool;
     
     myBool = true;
     std::cout << myBool << std::endl;
     
     yourBool = false;
     std::cout << yourBool << std::endl;

     
     
     return(0);
 }

 
 */





// Integer Math and Floating Point Math
/*
#include <iostream>

int main(){
    
    int myInt;
    double myDub;
    
    myInt = 5.0/2.0;
    myDub = 5.0/2.0;
    
    std::cout << "myInt: " << myInt;
    std::cout << std::endl;
    std::cout << "myDub: " << myDub;
    std::cout << std::endl;
    
    int newInt;
    double newDub;
    
    newInt = 1.9;
    newDub = 1/2;
    
    std::cout << "myInt: " << newInt;
    std::cout << std::endl;
    std::cout << "myDub: " << newDub;
    std::cout << std::endl;
    
    return(0);
}
*/
