#include <iostream>

// First Function
int func1(int n){
    
    int ans = n + 1; //optional of declaration
    
    return (ans);
}

// Second Function
void printHello(){
    std::cout << "Hello\n" << '\n';
}

int main(){
    
    std::cout << "Lab Lecture April 9";
    int x = 0;
    x = func1(41); //x is now 42
    
    std::cout << func1(52) << '\n';
    std::cout << x << '\n';
    
    printHello();
    
    return(0);
}




/*

 function declaration template:
    <return type><function name>(parameters);
 
 function definition template:
    <return type><function name>(parameters) {
        <function body>
        return(<variable>);
    }

 return types:
 void functions: does not return a function values
 non-void functions: also known as value returning functions (returns value), known as value returning functions
 
 
 */
