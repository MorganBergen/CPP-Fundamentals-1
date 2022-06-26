//DMV.hpp

#ifndef DMV_hpp
#define DMV_hpp

#include <stdio.h>
#include <iostream>
#include "DriversLicenseRecord.hpp"
#include "DriversLicenseRecord.cpp"

class DMV{
    
    private:
    std::string file;

    public:
    DriversLicenseRecord person[55];
    DMV(std::string realFile = "records.txt");
    void printMenu();
    void allDriverInfo();
    void unregistedSeniors();
    void firstInitalFilter();
    void driverIDFilter();
    void run();

};

#endif
