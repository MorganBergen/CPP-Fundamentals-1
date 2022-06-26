#include "Executive.h"
#include "Stack.h"
#include "Queue.h"
#include <fstream>
#include <stdexcept>
#include <iostream>

Executive::Executive(std::string fn){
    filename = fn;
}

void Executive::run() {
    std::ifstream myFile;
    myFile.open(filename);
    if (!myFile.is_open()) {
        throw (std::runtime_error("File was not opened!"));
    }
    Stack<std::string> Elevator;
    Queue<std::string> Line;
    std::string temp;
    int numPpl = 0;
    while (myFile >> temp) {
        if (temp == "WAIT") {
            myFile >> temp;
            Line.enqueue(temp);
        }
        else if (temp == "PICK_UP") {
            try {
                myFile >> numPpl;
                for (int i = 0; i < numPpl; i++) {
                    if (Line.isEmpty()) {
                        throw(std::runtime_error("Not enough people in life to pick up.\n"));
                    }
                    Elevator.push(Line.peekFront());
                    Line.dequeue();
                }
            } catch (std::runtime_error& rte) {
                std::cout << rte.what() << '\n';
            }
        } else if (temp == "DROP_OFF") {
            try {
                myFile >> numPpl;
                for (int i = 0; i < numPpl; i++) {
                    if (Elevator.isEmpty()) {
                        throw (std::runtime_error("Not enough people in the elevator to drop off.\n"));
                    }
                    Elevator.pop();
                }
            } catch (std::runtime_error& rte) {
                std::cout << rte.what() << '\n';
            }
        } else if (temp == "INSPECTION") {
            std::cout << "\nElevator Status:\n";
        }
    }
}


/*
 
 std::cout << command << std::endl;
 
 std::cout << "      Elevator status:" << std::endl;
 std::cout << "      line size " << line_size << std::endl;
 std::cout << "      elevator size " << elevator_size << std::endl;
 
 if (Elevator.isEmpty()) {
     std::cout << "      The elevator is empty." << std::endl;
     std::cout << "      No one is in the elevator." << std::endl;
 } else {
     std::cout << "      The elevator is not empty." << std::endl;
     try {
         std::cout << "      ";
         std::cout << Elevator.peek() << " will be the next person to leave the elevator." << std::endl;
     } catch (std::exception &e) {
         std::cerr << e.what() << std::endl;
     }
 }
 
 if (Line.isEmpty()) {
     std::cout << "      No one is in line.\n" << std::endl;
 } else {
     std::cout << "      ";
     std::cout << Line.peekFront() << " will be the next person to get on the elevator." << std::endl;
     std::cout << "________________________________________" << std::endl;
 }
 std::cout << std::endl;
 */
