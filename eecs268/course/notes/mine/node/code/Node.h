/*
 * @author  Morgan Bergen
 * @file    Node.h
 * @date    Wed Sep 15 13:30:51 CDT 2021
 * @brief   This file does something
 *
 */

#ifndef NODE_H
#define NODE_H

class Node {
    
private:
    int mEntry;
    Node* mNext;
    
public:
    Node(int entry);
    int getEntry() const;
    void setEntry(int entry);
    Node* getNext() const;
    void setNext(Node* next);
    
};

#endif
