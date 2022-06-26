//DriversLicenseRecord.hpp

#ifndef DriversLicenseRecord_hpp
#define DriversLicenseRecord_hpp
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

class DriversLicenseRecord {
    
private:
    std::string firstName;
    std::string lastName;
    int age;
    char voterStatus;
    int licenseNumber;
    
public:
    void setFirstName(std::string inputFirstName){
        firstName = inputFirstName;
    }
    std::string getFirstName(){
        return(firstName);
    }
    void setLastName(std::string inputLastName){
        lastName = inputLastName;
    }
    std::string getLastName(){
        return(lastName);
    }
    void setAge(int inputAge){
        age = inputAge;
    }
    int getAge(){
        return(age);
    }
    void setVoterStatus(char inputStatus){
        voterStatus = inputStatus;
    }
    char getVoterStatus() {
        return(voterStatus);
    }
    void setLicenseNumber(int inputNumber){
        licenseNumber = inputNumber;
    }
    int getLicenseNumber(){
        return(licenseNumber);
    }

};

#endif /* DriversLicenseRecord_hpp */
