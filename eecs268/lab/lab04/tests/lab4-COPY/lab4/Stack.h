#ifndef Stack_h
#define Stack_h

#include "Node.h"
#include <stdio.h>

template <typename T>
class Stack {
private:
    Node<T>* m_top;
public:
    Stack<T>();
    ~Stack<T>();
    Stack<T>(const Stack& origin);
    
    virtual bool isEmpty() const;
    virtual void push(const T value);
    virtual void pop();
    virtual T peek() const;
    
};

#endif
