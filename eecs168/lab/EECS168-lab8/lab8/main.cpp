/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Morgan Bergen
 * Assignment:   EECS-168/169 Lab 8
 * Description: Functions
 * In this lab you'll make a single large program that uses several function definitions.
 * Your main should have very little going on. In fact, I've provided your entire main below:
 * int main()
 * {
 * run();
 * return(0);
 * }
 * What your program will do is present the user with the following menu:
 * 1) Count digits
 * 2) Sum digits
 * 3) Is Palindrome
 * 4) Reverse
 * 5) Exit
 * Choice:
 * For all choices, you may assume good input.
 * You will write several functions that you will use in combination to complete this lab:
 *
 * - int lastDigit(int n)
 * - returns the last digit in n
 * - example lastDigit(123) returns 3
 * - int removeLastDigit(int n)
 * - returns the number n with the last digit trimmed off
 * - example removeLastDigit(123) returns 12
 * - when removeLastDigit is passed a 1-digit number, return 0
 * - int addDigit(int currentNum, int newDigit)
 * - returns the currentNum with newDigit placed into the ones space
 * - example addDigit(123, 4) returns 1234
 * - int reverse(int n)
 * - returns the reverse of n
 * - example reverse(1234) returns 4321
 * - this function should call other functions you've defined
 * - bool isPalindrome(int n)
 * - returns true if n is a palindrome
 * - example isPalindrome(12321) returns true, but isPalindrome(123) returns false
 * - This should use reverse
 * - int countDigits(int n)
 * - returns the count of digits in n
 * - example countDigits(123) returns 3
 * - this function should use removeLastDigit
 * - int sumDigits(int n)
 * - returns the sum of digits in n
 * - example countDigits(123) returns 6
 * - this function should use removeLastDigit
 * - void printMenu()
 * - prints the menu
 * - This does NOT obtain user input, it only prints the menu
 *      void run()
 * - Until the user wants to quit, this function will print the menu, obtain the user's choice, and call the
 *      appropriate functions to print the desired results
 *
 * Date: Tues Apr 13 15:05:21 CDT 2021
 *
 ---------------------------------------------------------------------------- */

#include <iostream>
#include <string>

int lastDigit(int n);
int removeLastDigit(int n);
int addDigit(int currentNum, int newDigit);
int reverse(int n);
bool isPalindrome(int n);
int countDigits(int n);
int sumDigits(int n);
void printMenu();
void run();

int main() {
    
    run();
    
    return (0);
}

void printMenu() {
    std::cout << "1) Count digits\n";
    std::cout << "2) Sum digits\n";
    std::cout << "3) Is Palindrome\n";
    std::cout << "4) Reverse\n";
    std::cout << "5) Exit\n";
    std::cout << "Choice: ";
}

//not menu
int lastDigit(int n) {
    return (n % 10);
}

//not menu
int removeLastDigit(int n) {
    n = n/10;
    return (n);
}

//not menu
int addDigit(int currentNum, int newDigit){
    
    std::string currentN = std::to_string(currentNum);
    std::string newD = std::to_string(newDigit);
    std::string result = currentN + newD;
    
    return std::stoi(result);
}

int countDigits(int n) {
    
    int count = 1;
    int digit = removeLastDigit(n);
    
    while (digit != 0) {
        digit = digit / 10;
        count++;
    }
    return (count);
}

int sumDigits(int n){
    
    int sum = 0;
    int size = countDigits(n);
    int digitArray[size];
    
    for (int i = 0; i < size; i++) {
        digitArray[i] = lastDigit(n);
        n = removeLastDigit(n);
    }
    
    for (int i = 0; i < size; i++) {
        sum = sum + digitArray[i];
    }
    
    return(sum);
}

int reverse(int n){
    
    int reversedDigit = 0;
    int size = countDigits(n);
    int digits[size];
    int reversed[size];
    
    for (int i = 0; i < size; i++) {
        digits[i] = lastDigit(n);
        n = removeLastDigit(n);
        reversed[i] = digits[i];
    }
    
    for (int i = 0; i < size; i++) {
        reversedDigit *= 10;
        reversedDigit += reversed[i];
    }
    
    return (reversedDigit);
}

bool isPalindrome(int n){
    
    bool palidrome;
    
    if (n == reverse(n)) {
        palidrome = true;
    } else {
        palidrome = false;
    }
    
    return(palidrome);
}

void run() {
    int choice;
    int userInput;
    std::string inputPrompt = "Input a positive integer: ";
    char newline = '\n';
    
    do {
        printMenu();
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << newline;
                std::cout << inputPrompt;
                std::cin >> userInput;
                std::cout << "Amount of digits in " << userInput << " is " << countDigits(userInput) << newline << newline;
                break;
                
            case 2:
                std::cout << newline;
                std::cout << inputPrompt;
                std::cin >> userInput;
                std::cout << "Sum of digits in " << userInput << " is " << sumDigits(userInput) << newline << newline;
                break;
                
            case 3:
                std::cout << newline;
                std::cout << inputPrompt;
                std::cin >> userInput;
                
                if (isPalindrome(userInput) == true) {
                    std::cout << userInput << " is Palindrome." << newline << newline;
                } else {
                    std::cout << userInput << " is not Palindrome." << newline << newline;
                }
                
                break;
                
            case 4:
                std::cout << newline;
                std::cout << inputPrompt;
                std::cin >> userInput;
                std::cout << "Reversed version of " << userInput << " is " << reverse(userInput) << newline << newline;
                break;
                
            default:
                break;
        }
        
    } while (choice != 5);
}
