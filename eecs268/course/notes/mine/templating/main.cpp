/*
 EECS 268 Notes
 Wednesday Sept 1
 
 
 Templating
 
 
 Templating
 - You can have two of the same function names, and the compiler would automatically assign which option is most appropriate.
 - If you want to support a third type you would have to define another function.
 - Any data type you want to support you have to write an entire function with a different data type everytime.
 - We want to do this operation without having to recreate a new function everytime.
 - We want to create a function that multiplies two things together and add one without having to be exclusive to a certain data type!
 */

//compatable with integers, it can multiply with any two integers
int myMult(int num1, int num2){
    return(num1 * (num2++));
}

//compatable with doubles, it can multiply with any two doubles
double myMult(double num1, double num2){
    return(num1 * (num2++));
}

/*
 Goal
 We want to remove the need to know/care about the specific type.  Let's make a templated function!
 
 //boiler plate for template function
 
 template <template parameters>
 return type function name(function parameters){
    statement
 }
 
 */

template<typename T>
//there is some type t that we will operate on, doesnt matter which data type it is

//function declaration
template <<#template parameters#>>
<#return type#> <#function name#>(<#function parameters#>) {
    <#statements#>
}
//function call
myMult<datatype>(parameter, parameter);
// functionName<dataType>(

template <typename T>
T myMult(T num1, T num2){
    return(num1 * (num2++));
}

//now you are able to write your algoritm without having to be so concerned with data types

int main(){
    std::cout << myMult<int>(5, 10) << std::endl;
    std::cout << myMult template(5.5, 10.5) << std::endl;
}








