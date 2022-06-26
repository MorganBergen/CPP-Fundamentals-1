#ifndef Executive_h
#define Executive_h

#include <stdio.h>
#include <string>

class Executive {
private:
    std::string filename;
    
public:
    Executive(std::string file);
    void run();
};

#endif
