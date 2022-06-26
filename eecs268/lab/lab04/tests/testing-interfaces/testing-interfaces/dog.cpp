#include "dog.h"

#include <string>
#include <iostream>

dog::dog(){
    dogName = "dog unnamed";
}

void dog::setName(std::string name){
    dogName = name;
}

std::string dog::getName(){
    return ("this is a dog! "+dogName);
}
