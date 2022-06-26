/*
 Goal:
 
 Obtain the user's age
 Print it back to them
 
 */

#include <iostream>

int main(){
    
    // Declare the variable
    int userAge;
    
    //Prompt the user
    std::cout << "Input your age: ";
    
    //Obtain their age
    std::cin >> userAge;
    
    //print age back to user
    std::cout << "You are " << userAge << " years old." << std::endl;
    
    return 0;
}

/*
 Variables
 
 Declare a variable
    typeName variableName;
 Example
    int num;
 
 Initialize a variable
    variableName = expression;
 Example
    num = 10;
 
Input from the User
 
 std::cin >> variableName;
 
 */
