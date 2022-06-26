/*
 
 Myths about Arrays
 
 - You can change the size of an array
    Wrong, once an array is created it's size cannot change, but you can create a new array of a different size and copy any desired value over.
 
 - Arrays are passed by value to functions
    Wrong, when you pass an array to a function, what you are actually passing is the array reference (aka a point ot the first block of memory in the array).  And since an array doesn't know its own size, the size will need to be passed as well.  Let this example illustrate
 
 */
