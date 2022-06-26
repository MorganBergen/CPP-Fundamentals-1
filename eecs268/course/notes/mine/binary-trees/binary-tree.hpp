//binary-tree.hpp file
//assume the constructor and add are written

#include "binary-tree.h"




template <typename T>
BinaryTree<T>::BinaryTree(){
    m_root = nullptr;
}

template <typename T>
void BinaryTree<T>::add(T entry){
    //stubbed
}

template <typename T>
bool BinaryTree<T>::isInTree(T entry) const{
    return(recIsInTree(entry, m_root));
}

template <typename T>
bool BinaryTree<T>::recIsInTree(T entry, BNode<T>* curNode){
    if (curNode == nullptr) {
        return (false);
    } else if (curNode -> getEntry() == entry) {
        return (true);
    } else {
        bool isInLST = recIsInTree(entry, curNode -> getLeft());
        bool isInRST = recIsInTree(entry, curNode -> getRight());
        return(isInLST || isInRST);
    }
}
