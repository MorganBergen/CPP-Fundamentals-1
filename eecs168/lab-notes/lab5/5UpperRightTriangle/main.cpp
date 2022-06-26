/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Your name 
 * Assignment:   EECS-168/169 Lab 5
 * Description:  
 * Write a program called patterns. 
 * You'll present the user with a choice of patterns (e.g. Checker Board). 
 * Once the user makes a valid chose, the user then sets the size of the pattern. 
 * The size must be an integer larger than 3.
 * You may assume the user with input an integer, 
 * but your program must make sure the value makes sense in a given context 
 * (menu or pattern size)
 * If the user gives an invalid size or menu choice, 
 * display the text "Error."ask the user for valid input a again.
 * Even after valid input, the entire program should repeat until the user 
 * wants to quit (you can do a simple (y/n) prompt)
 * 
 *
 * Date: date the program was last modified
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include <iostream>

int main(){

    int size = 0;
    std::cout << "Enter a size: ";
    std::cin >> size;

    for (int row = size + 1; row > 1; row--)
    {

        for (int space = 0; space < size - (row - 1); space++)
        {
            std::cout << ' ';
        }
        
        for (int col = 1; col < row; col++)
        {
            std::cout << '*';
        }
        
        std::cout << '\n';
    }
    

    return(0);
}
