/*
 
 Command Line Arguments
 You can pass information into your program at the command - in other words, from terminal.
 Example:
 % ./main coffee eggs bread
 
 Inaddition to launching your program, you apssed 3 pieces of information, "coffee", "eggs", and "bread" into the program.  Where is it?  In a 2D character array.
 
 Your main() will be updated to use command line arguments.
 
 //old main
 int main(){
    //stuff
 }
 
 //new main
 int main(int argc, char** argv) {
    //suff
 }
 
 Argc
 - A count of how many command line argument (include the program's name) were passed in.
 - Our exampple from above would set argc to 4
 
 Argv
 - A 2D character array with all the words passed in
    
 */

#include <iostream>
#include <string>

int main(int argc, char** argv){
    
    std::string myStr;
    
    //check to see if there's an argument to grab
    if (argc > 1) {
        //copies the argument into your variable
        myStr = argv[1];
    }
    
    for (int i = 1; i <= 3; i++) {
        std::cout << argv[i] << " ";
    }
    
    std::cout << '\n' << argc;
    std::cout << '\n' << myStr << '\n';
    
    return(0);
}
