#include <iostream>

int main()
{

int age1;
int age2;
int age3;
    
    int 1234;

    std::cout << "Please, input your age: ";
    std::cin >> age1;

    std::cout << "Please, input your guardian's age: ";
    std::cin >> age2;

    std::cout << "Please, input your pet's age: ";
    std::cin >> age3;

int ageSum = age1 + age2 + age3;

    std::cout << "The total of all the ages you inputted: " << ageSum << std::endl;

    return (0);
}


/*
 Notes for Feb 11
 
 
 Question
 Can you define the purpose of some of the syntax of the output stream.
 std stands for standard, but why do we have this for outputting?
 :: stands for scope resolution operator, why do we need this?
 cout is short for compiler output, why do we need this?
 << is an insertion operator, why do we need this?

 Compound std::cout Statements

 std::cout << "You are " << userAge << " years old\n;
 
 "You are "     Text under quotes
 userAge        Variable
 " years old\n" Text under quotes
 \n             Special Characters
 ::             scope resolution operator The standard library activates a set of new features, the stamp           :: allows for std::cout to happen
 
Rules for naming variables
 
 1.  Must begin with a letter or underscore (_)
 2.  After the first symbol in the name, it can be followed by zero or more letters, numbers, and/or underscores.
 3.  The name cannot be a word already in use by C++
 4.  Your variable names, must be meaningful
 
 Compiler Errors
 Example:
 
 int 1234;
 
 error:  expected unqualified-id
 1 error generated
 
 */
