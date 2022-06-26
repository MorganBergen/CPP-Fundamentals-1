#include "Queue.h"
#include <stdexcept>

template <typename Q>
Queue<Q>::Queue(){
    
}

template <typename Q>
Queue<Q>::~Queue(){
    
}

template <typename Q>
Queue<Q>::Queue(const Queue& origin){
    
}

template <typename Q>
bool Queue<Q>::isEmpty() const {
    
}

template <typename Q>
void Queue<Q>::enqueue(const Q entry){
    Node<Q>* newNode = new Node<Q>(entry);
    if (isEmpty()) {
        m_front = newNode;
    } else {
        m_back -> setNext(newNode);
    }
    m_back = newNode;
}

template <typename Q>
void Queue<Q>::dequeue() {
//    if (!isEmpty()) {
//        Node<Q>* ptr = m_front;
//        m_front = m_front -> getNext();
//        delete ptr;
//    } else {
//        throw (std::runtime_error("Dequeue on empty queue.\n"));
//    }
}

template <typename Q>
Q Queue<Q>::peekFront() const {
    
}


