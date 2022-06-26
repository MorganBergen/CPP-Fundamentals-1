Timing code

Recall: Time complexity is really the number of instructions needed to run.
        Time complexity is not clock on the wall time.
        
Clock on the wall time is affected by:
    processing power
    processor load
Complexity analysis is not tied to hardware

processor
A central processing unit, also called a central processor, main processor or just processor, is the electronic circuitry that executes instructions comprising a computer program. The CPU performs basic arithmetic, logic, controlling, and input/output operations specified by the instructions in the program.

Time and space complexities of various algorithms

Algorithm                           Time        Space
getEntry()                          O(1)        O(1)
peek()                              O(1)        O(1)
enqueue()                           O(1)        O(1)
copy a 2D array (nxn)               O(n²)       O(n²)
remove index 0 linked list          O(1)        O(1)
remove the last index linked list   O(n)        O(n)

O(1)  -> constant
O(n)  -> linear
O(n²) -> quadratic


for (int i = 0; i < (n - 1); i++) {
    for (int j = 0; j < (n - 1); j++) {
        //do something
    }
}
