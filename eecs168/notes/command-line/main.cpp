#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    std::string pet="";
    std::string tempCount="";
    int petCount = 0;
    
    //Require 3 command-line arguments
    if(argc >= 3)
    {
        //Get the pet type
        pet = argv[1];

        //Get the pet count
        tempCount = argv[2];
        
        //convert the string to an int
        petCount = std::stoi(tempCount);
    }
    else
    {
        std::cout << "ERROR: Invalid arguments\n";
    }
    
    //You don't have to delete[] argv
    
    return(0);
}
/*
 Command line Arguments and Classes
 
 Example:
 % ./programName apple orange banana
 
 We already use command-line arguments
 Example:
 % g++ main.cpp -o programName
 % cd folder/path/here
 
 g++ is the name of a program that we are invoking
 cd is the name of a program that we are invoking
 
 Assume we language our program like this
 Example:
 % ./programName dog 1234
 
 argc ==> 3
 argv -->   0 [] -> [.][/][p][r][o][g][\0]
            1 [] -> [d][o][g][\0]
            2 [] -> [1][2][3][4][\0]
 
 \0 All null-terminiated char arrays of varying sizes
 
 Classes
 
 Primitive Types        Class Types
 int                    std::string
 double                 std::ifstream
 char                   std::ofstream
 bool
 (all our pointers)
 
 Example of creating a string:
 
 std::string word = "banana";
    - word is a string object
    - word is an instance of a string class
 
 if (word.length() > 5) {
 // do something
 }
    - word is an object
    - .length() is a call to a member method
 
 We're going to use Classes to encapsulate related data and functionality
 
 We'll need to expand beyond just main.cpp
 
 ---------
 | Folder |
 -------------------------------------
 |   ---         ---         ---      |
 |  |   |       |   |       |   |     |
 |  |   |       |   |       |   |     |
 |  |   |       |   |       |   |     |
 |   ---         ---         ---      |
 | main.cpp    makefile   student.h   |
 |                                    |
 |                                    |
 |                                    |
 -------------------------------------
 
 Let's say we have a program 
 
 */
