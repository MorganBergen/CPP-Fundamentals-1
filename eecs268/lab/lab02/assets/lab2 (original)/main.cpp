/* -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Morgan Bergen
 * Assignment:   EECS-268 Lab 2
 * @brief (write description here)
 * @date Mon Sep 13 10:15:48 CDT 2021
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#include "Executive.h"

#include <iostream>

int main(int argc, const char* argv[]){
    
    if (argc < 2){
        std::cerr << "incorrect number of parameters.\n" << std::endl;
    } else {
        Executive exec(argv[0]);
    }
    
}
