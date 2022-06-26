#ifndef cat_h
#define cat_h

#include <stdio.h>
#include <string>
#include "animal.h"

class cat : public animalInterface {
private:
    std::string catName;
public:
    cat();
    void setName(std::string name);
    std::string getName();
};

#endif
