#include <iostream>

int main(){
    
    std::cout << "\nFeb 22 Notes:  Doubles and Characters\n" << std::endl;
    
    std::cout << "The Numeric Operator Module:" << std::endl;
    
    int num1 = 5%2;
    int num2 = 7%5;
    int num3 = 23%5;
    int num4 = 15%5;
    int num5 = 9%8;
    int num6 = 3%5;
    int num7 = 0%5;
    int num8 = 1%2;
    int num9 = 2%2;
    int num10 = 3%2;
    int num11 = 4%2;
    int num12 = 5%2;
    int num13 = 6%2;
    
    std::cout   << "5%2 = " << num1 << "\n"
                << "7%5 = " << num2 << "\n"
                << "23%5 = " << num3 << "\n"
                << "15%5 = " << num4 << "\n"
                << "9%8 = " << num5 << "\n"
                << "3%5 = " << num6 << "\n"
                << "0%5 = " << num7 << "\n"
                << "1%2 = " << num8 << "\n"
                << "2%2 = " << num9 << "\n"
                << "3%2 = " << num10 << "\n"
                << "4%2 = " << num11 << "\n"
                << "5%2 = " << num12 << "\n"
    << "6%2 = " << num13 << "\n" << std::endl;
    
    std::cout << "The Data Type Character:" << std::endl;
    
    char symbolA = 'A';
    char symbolQuestionMark = '?';
    char symbolSpace = ' ';
    char symbolNewLine = '\n';
    char symbolTab = '\t';
    char symbolBackSlash = '\\';
    char symbolFive = '5'; //Not Best Practice
    
    std::cout << "'A' = " << symbolA << std::endl;
    std::cout << "'?' = " << symbolQuestionMark << std::endl;
    std::cout << "'space' = " << symbolSpace << std::endl;
    std::cout << "'5' = " << symbolFive << std::endl;
    std::cout << "single quotation \\n single quotation = " << symbolNewLine << std::endl;
    std::cout << "single quotation \\t single quotation = " << symbolTab << std::endl;
    std::cout << "single quotation \\\\ single quotation = " << symbolBackSlash << std::endl;
    
    return 0;
}

/*
 
 Numeric Operators:
 P  ()
 E  No exponent, null
 M  *
 D  /
 A  +
 S  -
 
 Modulo %
 Example:  5/2 = 2 Remainder 1
 num = 5%2; //Store 1 in num
 
 Characters
 
 char - used to store exactly one character
 
 Legal Ways to Printing New Lines:
 std::cout << std::endl;
 std::cout << "Hi\n";
 std::cout << "\n";
 std::cout << '\n';
 
 Compile Error for this Varibale Initalization
 char symbol = '\';
 
 Not best Practice
 char symbol = '5';
 
 */
