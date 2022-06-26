/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Your name 
 * Assignment:   EECS-168/169 Lab 5
 * Description:  
 * 
 * Checkerboard:
 * Normal checkerboard pattern of uppercase O's and X's.
 *
 * Patterns:
 * Here are sample patterns where n = 5.
 *
 * Sample Output: 
 * OXOXO
 * XOXOX
 * OXOXO
 * XOXOX
 * OXOXO
 * 
 * Date: date the program was last modified
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include <iostream>

int main()
{

    std::cout << "1) Checkerboard\n";
    std::cout << "2) Rook Path\n";
    std::cout << "3) Running Total\n";
    std::cout << "4) Upper Left Triangle\n";
    std::cout << "5) Upper Right Triangle\n\n";

    int choice;
    std::cout << "Input a choice: ";
    std::cin >> choice;

    int size = 0;

    // Start Checkerboard Code
    do
    {
        std::cout << "Input a size: ";
        std::cin >> size;
        if (size <= 3)
        {
            std::cerr << "Invalid Entry, please input a size greater than 3.\n";
        }
        else
        {
            std::cout << '\n';
        }

    } while (size <= 3);

    for (int row = 0; row < size; row++)
    {
        bool alternate;
        for (int col = 0; col < size; col++)
        {
            if (alternate)
            {
                std::cout << 'X';
            }
            else
            {
                std::cout << 'O';
            }
            alternate = !alternate;
        }
        std::cout << '\n';
    }
    // Start Checkerboard Code End

    return (0);
}
