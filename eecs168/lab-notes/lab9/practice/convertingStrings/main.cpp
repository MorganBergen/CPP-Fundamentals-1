/*
 Converting Strings
 
 There are functions that you can use, after you include the <string> library in your program, that can convert std::string to int or double.
 
 Example
 
 std::string str1: "42";
 std::string str2 = "2.5";
 
 int x = 0;
 double d = 0;
 
 x = std::stoi(str1); //string to int
 d = std::stod(str2); //string to double
 
 */

#include <iostream>
#include <string>

int main() {
    
    std::string str1 = "100";
    std::string str2 = "1.1";
    
    int x = 0;
    double d = 0;
    
    x = std::stoi(str1);
    d = std::stod(str2);
    
    std::cout << x << ' ' << d;
    
    return(0);
}
