/*
 Practice
 */

#include <iostream>

//pass-by-reference-basics
void swap(int i, int j);
void swapReference(int &c, int &d);

int main(){
    
    /*--------------------------------------------------------------------------------------------------------------*/
    //start of references basics
    std::string name = "morgan";
    std::string &nameAlias = name;
    
    //changes made to the reference change both
    nameAlias = nameAlias + " bergen";
    std::cout << "name = " << name << '\n';
    std::cout << "nameAlias = " << nameAlias << '\n';
    
    //changes made to original change both
    name = name + " is cool!";
    std::cout << "name = " << name << '\n';
    std::cout << "nameAlias = " << nameAlias << '\n';
    //end of refernce basics
    /*--------------------------------------------------------------------------------------------------------------*/
    
    /*--------------------------------------------------------------------------------------------------------------*/
    //start of pass-by-reference basics
    int a = 100;
    int b = 200;

    //argument values are not changed
    swap(a, b);
    std::cout << "\nPass by Value\n";
    std::cout << "A is " << a << "\n";
    std::cout << "B is " << b << "\n";

    //argument values ARE changed
    swapReference(a, b);
    std::cout << "\nPass by Reference-Value\n";
    std::cout << "A is " << a << "\n";
    std::cout << "B is " << b << "\n\n";
    //start of pass-by-reference basics
    /*--------------------------------------------------------------------------------------------------------------*/
    
    
    double pi = 3.14;
    double &alias = pi;
    alias = 10;
    
    std::cout << "\n" << "pi = " << pi;
    std::cout << "\n" << "alias = " << alias;
    
    
    return(0);
}

//a is passed to i = 100
//b is passed to j = 200
void swap(int i, int j){
    
    int temporary = i;  //temporary = 100
    i = j;              //i is set to 200, becasue j = 200
    j = temporary;      //j is set to 100, because temporary = i = 200
    
}

//a is passed by reference to &c which is an alias of a, c = a
//what ever happens to c will also happen to a, vice versa
//b is passed by refernce to &d which is an alias of b, d = b
//what ever happens to d will also happen to b, vice versa
void swapReference(int &c, int &d){
    
    int holder = c;
    c = d;
    d = holder;
    
}
