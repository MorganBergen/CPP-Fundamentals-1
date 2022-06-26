/*
 Boardwork 3 Exceptions
 
 Assume there is a function called dangerous.  T
 his function takes a double and returns a double.
 But sometines it throws an exception (std::runtime_error), but you don't know why.
 
 
 You must write a main() that will ask the user for a number that you pass to dangerous, you have to keep prompting the user.  Once dangerous works, print the value.  Otherwise keep getting new values from the user.
 
 */
#include <iostream>
#include <stdexcept>

double dangerous(double e){
    if (e != 1) {
        throw(std::runtime_error("ERROR"));
    } else {
        return(5);
    }
};

int main(){
    
    bool checker = false; //false = 1
    double userNum = 0;
    double dangerousNumOut = 0;
    
    do {
        std::cout << "Please enter a number (ex. 1.2): ";
        std::cin >> userNum;
        
        try {
            dangerousNumOut = dangerous(userNum);
            checker = true;
        } catch (std::runtime_error& rte) {
            std::cout << "Error, not the correct number\n";
        }
    } while (!checker);
    
    std::cout << dangerousNumOut << std::endl;
    
    return(0);
}


