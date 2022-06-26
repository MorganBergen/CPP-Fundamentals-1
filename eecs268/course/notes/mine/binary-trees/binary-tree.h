#ifndef binary_tree_h
#define binary_tree_h

#include <stdio.h>
#include "BNode.h"

template <typename T>
class BinaryTree {

private:
    //node that has entry, left and right pointers
    //assume this class has getters and setters for those members
    BNode<T>* m_root;
    
    //private helper method that the isInTree invokes
    bool recIsInTree(T entry, BNode<T>* curNode);
    
public:
    BinaryTree();
    
    //assume this works
    void add(T entry);
    
    //figures out where entry is in the tree
    bool isInTree(T entry) const;
}



#endif

#include "binary-tree.hpp"
