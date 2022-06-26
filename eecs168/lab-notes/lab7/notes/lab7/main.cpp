#include <iostream>

int main() {

    int * p = new int;
    delete p;

    // Memory leak
    int * q = new int;
    delete q;

    return(0);
}
/*
memcheck that we see in here is a memory detector that can detect some of the 
common problems in C++ programs: 
accessing memory you shouldn't, using undefined values, incorrect allocation 
and de-allocation of heap blocks and memory leaks

int is 4 bytes that’s why it’s showing here the amount of memory being lost 
and it also shows the function where this memory has been leaked, which here 
it’s in the “main” function

Definitely lost in here means that no pointer to the block can be found and 
hence it’s probably the case that the programmer hasn’t freed the pre-allocated 
memory space. It’s like the pointer has been lost somewhere in the program

*/