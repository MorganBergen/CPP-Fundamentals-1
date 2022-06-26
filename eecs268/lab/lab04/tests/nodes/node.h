#include <string>
#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
    
private:
    T m_entry;
    Node<T>* m_next;
    
public:
    Node(T new_entry);
    T getEntry();
    void setEntry(T new_entry);
    Node<T>* getNext();
    void setNext(Node<T>* new_next);
    
};

#endif
