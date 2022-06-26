#include "node.h"
#include <iostream>
#include <stdexcept>


template <typename T>
Node<T>::Node(T new_entry){
    m_entry = new_entry;
    m_entry = nullptr;
}

template <typename T>
T Node<T>::getEntry() {
    return(m_entry);
}

template <typename T>
void Node<T>::setEntry(T new_entry){
    m_entry = new_entry;
}


template <typename T>
Node<T>* Node<T>::getNext(){
    return(m_entry);
}



template <typename T>
void Node<T>::setNext(Node<T>* new_next){
    m_next = new_next;
}
