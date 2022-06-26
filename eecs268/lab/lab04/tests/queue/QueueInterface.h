#ifndef QUEUEINTERFACE_H
#define QUEUEINTERFACE_H

template <typename Q>
class QueueInterface {

public:
    virtual bool isEmpty() const = 0;
    virtual bool enqueue(const Q& new_entry) = 0;
    virtual bool dequeue() = 0;
    virtual Q peekfront() const = 0;
    virtual ~QueueInterface() {};

};

#endif
