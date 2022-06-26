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
 * wants to quit (you can do a simple (y/n) prompt).
 * 
 * Date: Thu Mar 25 17:19:42 CDT 2021
 *
 ---------------------------------------------------------------------------- */

#include <iostream>

int main()
{

    char quitChoice;
    do
    {

        std::cout << "1) Checkerboard\n";
        std::cout << "2) Rook Path\n";
        std::cout << "3) Running Total\n";
        std::cout << "4) Upper Left Triangle\n";
        std::cout << "5) Upper Right Triangle\n\n";

        int choice;
        int size = 0;
        std::cout << "Input a choice: ";
        std::cin >> choice;

        if (choice == 1)
        {
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
            std::cout << '\n';
        }
        else if (choice == 2)
        {
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

            // Input a row position
            int rowPosition = 0;
            do
            {
                std::cout << "Input the row number for the Rook's Position: ";
                std::cin >> rowPosition;
                if (rowPosition > size)
                {
                    std::cerr << "Invalid Entry, please input a number greater than 0 and less than your declared size.\n";
                }
                else
                {
                    std::cout << '\n';
                }

            } while (rowPosition > size);

            // Input a column position
            int colPosition = 0;
            do
            {
                std::cout << "Input the column number for the Rook's Position: ";
                std::cin >> colPosition;
                if (colPosition > size)
                {
                    std::cerr << "Invalid Entry, please input a number greater than 0 and less then your declared size.\n";
                }
                else
                {
                    std::cout << '\n';
                }

            } while (colPosition > size);

            for (int row = 0; row < size; row++)
            {
                if (row == rowPosition)
                {
                    for (int col = 0; col < size; col++)
                    {
                        if (col == colPosition)
                        {
                            std::cout << 'R';
                        }
                        else
                        {
                            std::cout << '-';
                        }
                    }
                }
                else
                {
                    for (int col = 0; col < size; col++)
                    {
                        if (col == colPosition)
                        {
                            std::cout << '|';
                        }
                        else
                        {
                            std::cout << '*';
                        }
                    }
                }
                std::cout << '\n';
            }
        }
        else if (choice == 3)
        {
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

            int counter = 1;

            for (int row = 1; row <= size; row++)
            {
                for (int col = 1; col <= size; col++)
                {
                    if (col != size)
                    {
                        std::cout << counter;
                        std::cout << ",";
                        counter++;
                    }
                    else
                    {
                        std::cout << counter;
                    }
                }
                std::cout << '\n';
                counter++;
            }
        }
        else if (choice == 4)
        {
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

            for (int row = size + 1; row > 1; row--)
            {
                for (int col = 1; col < row; col++)
                {
                    std::cout << '*';
                }
                std::cout << '\n';
            }
        }
        else if (choice == 5)
        {
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
        }
        else
        {
            std::cout << "Invalid Entry";
        }

        std::cout << "Do you want to quit (y/n)?: ";
        std::cin >> quitChoice;

    } while (quitChoice == 'n' || quitChoice == 'N');

    return (0);
}
