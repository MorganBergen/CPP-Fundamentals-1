#include "Node.h"

template <typename T>
T Node<T>::getEntry() const{
    return (m_entry);
}

template <typename T>
void Node<T>::setEntry(T entry){
    m_entry = entry;
}

template <typename T>
Node<T>* Node<T>::getNext() const{
    return (m_next);
}

template <typename T>
Node<T>::Node(T entry){
    m_entry = entry;
    m_next = nullptr;
}
