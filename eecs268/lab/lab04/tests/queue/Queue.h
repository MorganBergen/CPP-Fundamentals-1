//#include "Node.h"
//#include "QueueInterface.h"

#ifndef QUEUE_H
#define QUEUE_H

template <typename Q>
class Queue {
private:
    Node<Q>* front_ptr;
    Node<Q>* back_ptr;
    
public:
    Queue();
    Queue(const Queue& aQueue);
    ~Queue();
    
    bool isEmpty() const;
    bool enqueue(Q new_entry);
    bool dequeue();
    Q peekFront() const;
}

#endif
