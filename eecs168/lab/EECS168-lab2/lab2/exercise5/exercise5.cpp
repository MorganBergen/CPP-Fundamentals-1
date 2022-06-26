/* -----------------------------------------------------------------------------
 *
 * File Name:  exercise5.cpp
 * Author: Morgan Bergen
 * Assignment:   EECS-168/169 Lab 2
 * Description:
 * Create a program (without using if statements or loops) that takes a number of sodas and
 * then tells the user how many Fridge Cubes, six packs, and single sodas it will be packages as.
 * Sample output:
 * Fridge Cubes hold 24 sodas
 * six packs 6
 * Singles are individual sodas
 * Date: Tue Feb 23 17:23:09
 *
 ---------------------------------------------------------------------------- */

#include <iostream>

int main(){
    
    int soda;
    std::cout << "How many sodas do you have? ";
    std::cin >> soda;

    int fridgeCube = (soda/24);
    int fridgeCubeR = (soda%24); //The Remaining Sodas after calculating Fridge Cubes
    int sixPack = (fridgeCubeR/6);
    int singles = (fridgeCubeR%6); //The Remaining Sodas after calculating Six Packs
    
    std::cout << "Fridge Cubes: " << fridgeCube << std::endl;
    std::cout << "Six-packs: " << sixPack << std::endl;
    std::cout << "Singles: " << singles << std::endl;
    
    return(0);
}

