#include "cat.h"
#include <iostream>
#include "string"

cat::cat(){
    catName = "cat unnamed";
}

void cat::setName(std::string name){
    catName = name;
}

std::string cat::getName() {
    return ("this is a cat! "+catName);
}
