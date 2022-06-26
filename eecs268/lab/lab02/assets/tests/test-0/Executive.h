#include "ShapeContainer.h"

#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include <string>
#include <fstream>

class Executive {
    
public:
    Executive();
    ~Executive();
    void setValue(int new_value);
    int getValue();
private:
    int value;
    
};

#endif

