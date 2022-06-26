The Abstract Data Type Queue

Behavior:
FIFO - The first item inserted into a queue is the first item out of the queue.

Member Variables:
Data - A finite number of node objects, not necessarily distinct, having the same data type and ordered by when they were added.

Memeber Methods:
isEmpty() - Sees whether the queue is empty.
enqueue(newEntry) - Adds newEntry at the back of the queue.
dequeue() - Removes the node object at the front of the queue, that is removes the node object that was added earliest.
peekFront() - Returns the front most node object of the queue, that is gets the node object that was added earliest.

                                                        dequeue()                 enqueue(back)
                                                        front, entry, entry, ..., back

queue1.enqueue(1)                       queue 1:        1
queue1.enqueue(2)                       queue 1:        1 2
queue2.enqueue(3)                       queue 2:        3
queue2.enqueue(4)                       queue 2:        3 4
queue1.dequeue()                        queue 1:        2
queueFront = queue2.peekFront()         peek queue2:    3
queue1.enqueue(queueFront)              queue 1:        2 3 
queue1.enqueue(5)                       queue 1:        2 3 5 
queue2.dequeue()                        queue 2:        4
queue2.enqueue(6)                       queue 2:        4 6








Queue Linked-Based Implementation
A link-based implementation of a queue uses a chain of linked nodes.
Much like the other link-based implementations that you have seen.
Removing a node from the beginning of a linked chain.
Adding a new node to the chain's end, means that we need a pointer to the chains last node.

The most efficient approach to adding a new node to a queue is to use a tail pointer to reference the end of the chain.
front_ptr   Just like how head pointers points to the beginning of a chain of linked nodes.
back_ptr    A tail pointer points to the end of a chain of linked nodes.
 

We will be using a linear chain, regardless of how many external points it has.  A chain does have a node whose next pointer is nullptr.

The method enqueue
bool enqueue(Q new_entry);

enqueue 

- inserting a new node new_node_ptr to the back of the chain
- three pointer changes are required
    1.  the next pointer in the new node
    2.  the next pointer in the back of the node
    3.  the external pointer back_ptr
- code
    1. new_node_ptr -> setNext(nullptr);
    2. back_ptr -> setNext(new_node_ptr);
    3. back_ptr = new_node_ptr;
    
- inserting an item to an empty queue 

- if new_node_ptr points to a new node
- the following statements add the node to the empty chain
    front_ptr = new_node_ptr
    backptr = new_node_ptr


 













































