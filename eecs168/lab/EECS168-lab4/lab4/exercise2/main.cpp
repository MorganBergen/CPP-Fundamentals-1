/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Morgan Bergen 
 * Assignment:   EECS-168/169 Lab 4
 * Description:  Exercise 2 Gibbonacci Sequence
 * 
 * The Fibonacci sequence is a classic numerical sequence.
 * With the exception of the first two numbers in the sequence, 
 * every number is the sum of the previous two numbers.
 * G_0 = 5
 * G_1 = 7
 * G_n = G_n-1 + G_n-2
 * 
 * Here's the first few numbers in the sequence:
 * 5, 7, 12, 19, 31, 50, 81, 131, 212, 343, 555
 * 
 * You just write a program that asks the user how many Gibbonacci numbers
 * they want to see.  Assume good input.
 * NOTE:  You need to match the formatting where all numbers are followed by
 * a comma exceot for the last number.
 * 
 * Sample Output:
 * How many Gibbonacci numbers do you want printed?: 8
 * 5, 7, 12, 19, 31, 50, 81, 131
 * 
 * Date: Thu Mar 18 09:44:34 CDT 2021
 *
 ---------------------------------------------------------------------------- */

#include <iostream>

int main()
{
    int amountPrinted;
    int firstNum = 5;
    int secondNum = 7;
    int nextNum = 0;

    std::cout << "How many Gibbonacci numbers do you want printed?: ";
    std::cin >> amountPrinted;

    for (int i = 1; i <= amountPrinted; i++)
    {
        if (i == 1)
        {
            std::cout << firstNum << ", ";
        }
        else if (i == 2)
        {
            std::cout << secondNum << ", ";
        }
        else
        {
            nextNum = firstNum + secondNum;
            firstNum = secondNum;
            secondNum = nextNum;
            std::cout << nextNum;

            if (i < amountPrinted)
            {
                std::cout << ", ";
            }
            else
            {
                std::cout << std::endl;
            }
        }
    }
    return (0);
}
