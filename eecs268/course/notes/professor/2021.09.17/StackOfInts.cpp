
#include "StackOfInts.h"

StackOfInts::StackOfInts()
{
    
}

void StackOfInts::push(int entry) {
    Node* new_top = new Node(entry);
    new_top -> setNext(m_top);
    m_top = new_top;
}
