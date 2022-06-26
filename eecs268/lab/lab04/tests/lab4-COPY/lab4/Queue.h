#ifndef Queue_h
#define Queue_h

#include "Node.h"
#include <stdio.h>

template <typename Q>

class Queue {
private:
    Node<Q>* m_front;
    Node<Q>* m_back;
    
public:
    Queue<Q>();
    ~Queue<Q>();
    Queue<Q>(const Queue& orig);
    
    virtual bool isEmpty() const;
    virtual void enqueue(const Q entry);
    virtual void dequeue();
    virtual Q peekFront() const;
    
    
};

#endif
