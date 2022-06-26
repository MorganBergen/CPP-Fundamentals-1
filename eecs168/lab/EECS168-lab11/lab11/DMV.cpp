//dmv.cpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "DriversLicenseRecord.hpp"
#include "DMV.hpp"

DMV::DMV(std::string realFile){
    
    file = realFile;
    std::string arrFirstName[55];
    std::string arrLastName[55];
    int arrAge[55];
    char arrVoterStatus[55];
    int arrLicenseNumber[55];

    std::ofstream outFile;
    std::ifstream inFile;
    std::string file = "records.txt";

    inFile.open(file);
    if (inFile.is_open()){

        int enteries;
        inFile >> enteries;
        for (int i = 0; i < enteries; i++){
            inFile >> arrFirstName[i];
            inFile >> arrLastName[i];
            inFile >> arrAge[i];
            inFile >> arrVoterStatus[i];
            inFile >> arrLicenseNumber[i];
        }
        for (int i = 0; i < enteries; i++){
            person[i].setFirstName(arrFirstName[i]);
            person[i].setLastName(arrLastName[i]);
            person[i].setAge(arrAge[i]);
            person[i].setVoterStatus(arrVoterStatus[i]);
            person[i].setLicenseNumber(arrLicenseNumber[i]);
        }
        inFile.close();
    } else {
        std::cerr << "File could not be opened.\n";
    }

}

void DMV::run(){
    DMV run;
    run.printMenu();
}

void DMV::printMenu(){
    int option;
    do
    {
    DMV profiles;
    std::cout   << "\nSelect an option:\n" 
                << "1) Print all Drivers Info\n"
                << "2) Print all senior, unregistered voters\n"
                << "3) Print drivers by first initial\n"
                << "4) Print driver with id\n"
                << "5) Quit\n"
                << "Enter your choice: ";
    std::cin >> option;
    switch (option) {
    case 1:
        profiles.allDriverInfo();
        break;
    case 2:
        profiles.unregistedSeniors();
        break;
    case 3:
        profiles.firstInitalFilter();
        break;
    case 4:
        profiles.driverIDFilter();
        break;
    case 5:
        std::cout << '\0';
        break;
    default:
        std::cout << std::endl;
        break;
    }
    } while (!(option == 5));

    
}

void DMV::allDriverInfo(){

    std::cout << "\nAll Drivers Information: \n";
    for (int i = 0; i < 55; i++){
        std::cout << person[i].getLastName() << ", " << person[i].getFirstName();
        std::cout << " (" << person[i].getAge() << "): ";
        std::cout << person[i].getLicenseNumber();
        std::cout << '\n';
    }
    std::cout << '\n';
}

void DMV::unregistedSeniors(){
    
    std::cout << "\nAll Senior Unregistered Voter's, Driver Information: \n";
    for (int i = 0; i < 55; i++){
        if ((person[i].getAge() >= 55) && (person[i].getVoterStatus() == 'N')) {
            std::cout << person[i].getLastName() << ", " << person[i].getFirstName();
            std::cout << " (" << person[i].getAge() << "): ";
            std::cout << person[i].getLicenseNumber();
            std::cout << '\n' << "Registration Status: " << person[i].getVoterStatus();
            std::cout << '\n';
        } else {
            std::cout << '\0';
        }
    }
    std::cout << "\n";
}

void DMV::firstInitalFilter(){

    std::cout << "\nFirst Name Initial Filter, Driver Information: \n";
    char inputFilter;
    std::cout << "Enter a (Capital Case) Character to Filter by First Inital: ";
    std::cin >> inputFilter;
    int counter = 0;

    for (int i = 0; i < 55; i++){
        std::string holder = person[i].getFirstName();
        if (inputFilter == holder.at(0)) {
            std::cout << person[i].getLastName() << ", ";
            std::cout << person[i].getFirstName();
            std::cout << " (" << person[i].getAge() << "): " << person[i].getLicenseNumber();
            std::cout << '\n';
        } else {
            counter++;
        }
        if (counter == 55){
            std::cout << "No records found.\n";
        } else {
            std::cout << '\0';
        }
    }
}

void DMV::driverIDFilter(){

    std::cout << "\nDriver's License ID Filter, Driver Information: \n";
    int inputFilter;
    std::cout << "Enter Driver's License Id to Filter: ";
    std::cin >> inputFilter;
    int counter = 0;

    for (int i = 0; i < 55; i++){
        int number = person[i].getLicenseNumber();
        if (inputFilter == number){
            std::cout << person[i].getLastName() << ", ";
            std::cout << person[i].getFirstName();
            std::cout << " (" << person[i].getAge() << "): " << person[i].getLicenseNumber();
            std::cout << '\n';
        } else {
            counter++;
        }
        if (counter == 55){
            std::cout << "No records found.\n";
        } else {
            std::cout << '\0';
        }
    }
}
