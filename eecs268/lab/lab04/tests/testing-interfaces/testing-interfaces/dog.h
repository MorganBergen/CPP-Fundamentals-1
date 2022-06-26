#ifndef dog_h
#define dog_h
#include <string>
#include "animal.h"
#include <stdio.h>

class dog : public animalInterface {
    
private:
    std::string dogName;
    
public:
    dog();
    void setName(std::string name);
    std::string getName();
};


#endif

