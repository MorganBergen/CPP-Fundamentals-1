#include <iostream>

void recFunc(int i) {
    if (i < 5) {
        recFunc(i + 1); //recursive call
        std::cout << i << std::endl;
    }
}


/*
 
 recFun(0)       0, 0 < 5, 0 + 1
 recFun(1)       1, 1 < 5, 1 + 1
 recFun(2)       2, 2 < 5, 2 + 1
 recFun(3)       3, 3 < 5, 3 + 1
 recFun(4)       4, 4 < 5, 4 + 1
 
 
 
 
 */

//Boardwork
//define rec sum to take a positive int
//return sum from 1 to n
int recSum (int n) {
    if (n == 1) {
        return(1);
    } else {
        return (n + recSum(n - 1));
    }
}

// your definition here
// sum of 1 to 4 ==> 4 + 3 + 2 + 1
// sum of 1 to 3 ==>     3 + 2 + 1
// sum of 1 to 2 ==>         2 + 1
// sum of 1 to 1 ==>             1

/*
 
 sum of 1 to 4 ==> 4 + recSum(3)
 sum of 1 to 3 ==>     3 + recSum(2)
 sum of 1 to 2 ==>         2 + recSum(1)
 sum of 1 to 1 ==>             1
 
 */

int gibbonacci(int n) {
    std::cout << n << " ";
    if (n == 0) {
        return (7);
    } else if (n == 1) {
        return (17);
    } else {
        return (gibbonacci(n - 1) + gibbonacci(n - 2));
    }
}

/*
 
 0, 7, 1, 17, n -> previous two gibbonacci's combined
 
 define the int gibbonacci(int n)
 gib(0) --> 7
 gib(1) --> 17
 gib(n) --> previous two gibbonacci's combined
 
 gib(2) = gib(1) + gib(0)
 
 
 
 */



int main() {
    
    std::cout << gibbonacci(2) << std::endl;
    
    std::cout << "Exiting...\n";
    return(0);
}
/*
 first thing to do when you write a recursive function
 when don't we have to recurse
 //initial call
 std::cout << "recFunc(0)" << std::endl;
 recFunc(0);
 
 std::cout << "recSum(4)" << std::endl;
 std::cout << recSum(4) << " " << std::endl;
 
 */


