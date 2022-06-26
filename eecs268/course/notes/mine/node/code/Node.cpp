/*
 * @author  Morgan Bergen
 * @file    Node.cpp
 * @date    Wed Sep 15 13:30:51 CDT 2021
 * @brief   This file does something
 *
 */

#include "Node.h"

Node::Node(int entry){
    mEntry = entry;
}

int Node::getEntry() const {
    return(mEntry);
}

void Node::setEntry(int entry){
    mEntry = entry;
}

Node* Node::getNext() const{
    return(mNext);
}
