/* -----------------------------------------------------------------------------
 *
 * File Name:  exercise1.cpp
 * Author: Morgan Bergen
 * Assignment:   EECS-168/169 Lab 3
 * Description: ASCII

Let's make an ASCII program!
We will allow the user to see the ASCII representation of a specific number
they want or to see all the ASCII conversions from 33 to 126.
Recall that an int can be casted to a char by doing the following:
 

 * Develop a program that displays a menu with 3 options:
 * Option 1:  The user inputs an integer value in the range (33- 126) inclusively 
 * and you display the equivalent ASCII character.  HINT: use char(x) to comvert the
 * integer value to the equivalent character value.
 * Option 2:  List all ASCII values form 33 - 126
 * Option 3:  Exit and display nothing
 * 
 * example:
 *     int x = 97;
    std::cout << '\n'
              << (char)x << '\n';
 * 
 * Date: Sun Mar 14 18:59:48 CDT 2020
 *
 ---------------------------------------------------------------------------- */

#include <iostream>

int main()
{
    int inputChoice;

    do
    {
        std::cout << "\n 1) Select a specific ASCII character provided an int"
                  << "\n 2) Display visible ASCII values (33 to 126)"
                  << "\n 3) Exit\n"
                  << "Choice: ";
        std::cin >> inputChoice;

        switch (inputChoice)
        {
        case 1:
            int inputValue;
            std::cout << "Enter value: ";
            std::cin >> inputValue;
            if (inputValue > 34 && inputValue < 127)
            {
                std::cout << inputValue << " = " << (char)inputValue;
            }
            else
            {
                std::cerr << "Sorry that entry is not within range, please try again.\n";
            }
            break;
        case 2:
            for (int i = 33; i < 127; i++)
            {
                std::cout << i << " = " << (char)i << '\n';
            }
            break;
        default:
            break;
        }
    } while (inputChoice != 3);

    return (0);
}
