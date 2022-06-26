#include <string>

#ifndef animal_h
#define animal_h

class animalInterface {
    
public:
    virtual ~animalInterface() {};
    //virtual destructor with empty definition.  It's not pure virtual
    
    virtual void setName(std::string name) = 0; //pure virtual function, must be implemented by subclass
    
    virtual std::string getName() = 0;
    
};

#endif
