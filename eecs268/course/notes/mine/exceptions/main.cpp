/*
 EECS 268
 August 30 2021 Lecture Notes
 Exceptions Handeling
 View Notes Here
 https://people.eecs.ku.edu/~jwgibbo/eecs268/2021summer/lectures/2021.06.11.exceptions/
 */

#include <iostream>
#include <stdexcept>

//cannot progress in a well defined way
int myDiv(int num, int denom){
    
    if(denom != 0){
        return(num/denom);
    } else {
        
        
        //throw(exception("message"));
        throw(std::runtime_error("Div by 0"));
        
        //throw is a runtime error with a message
        //threw the message into an object with a data type called runtime_error
        //an object gets created and a function runs
    }
}

int main(){
    
    int ans0 = 0;
    int ans1 = 0;
    ans0 = myDiv(10, 5);
    
    try {
        ans1 = myDiv(10, 0);
        std::cout << ans1 << std::endl; //skipped code because it does not get caught, because the try block skips the first
        //only enter into the catch block if an exception has been thrown
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    return(0);
}

/*
 Handling Exceptions:
 Any uncaught exceptions will crash your code, will terminate your program
 Exception should be caught and handling by the caller
 
 You only go to the catch block only if you had an exception to be thrown
 try catch
 
 Example:
 
 try {
 //something risky
 } catch(std::runtime_error& rte) {
 
 } catch(std::logic_error& le){
 
 } catch(...) {
 //catch any or all errors or exceptions
 }
 
 
 (1) Additional Exercise
 Description:
 Assume there is a function named dangerous.  This function takes a double and returns a double.  But, sometimes it throws a std::runtime_error.  We don't know exactly why, but it does.
 Goal:
 Pass 55 to dangerous and print the answer if it works, or print "ERROR" if an exception.
 
 double ans = 0;
 try {
 ans = dangerous(55);
 std::cout << ans;
 } catch(std::exception& e) {
 std::cout << "ERROR";
 }
 
 This is a syntacial way to interact with code that we wrote that could crash our program.
 
 The purpose of try catch erros is to prevent errors from crashing the entire program
 
 */
