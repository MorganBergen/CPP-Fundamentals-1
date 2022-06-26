#include <iostream>

int main(){
    
    std::cout << "Feb 04 Notes"  << std::endl;
    
    return 0;
}


/*
 
 Linux Commands
 pwd        Present working directory
 ls         el-esss lists all files/folders
 cd         Change Directory
 mkdir      Makes a directory
 cd tab     /Users/owner/...    Autocomplete
 touch      Creates an empty file
 nano       main.cpp
 cd ../     Go up one folder in the directory
 mv "name of first" "name of new"   Rename file
 cat        View the contents of a file
 */

/*
 
 How to Log into Remote Servers
 
 ssh m358b583@cycle3.eecs.ku.edu
 zuhqof-nomwu2-jyGmah
 
 
 ssh MyKuID
 
 CyberDuck as an Aid to get info files
 
 Server     cycle3eecs.ku.edu
 Username   MyKUID
 
 
 Youll make a zip file
 Email them the zip file
 
 
 Notes

Get an SSH
 
 Just use the mac terminal
 https://youtu.be/tubN7G_KpfI

 Join Discord Server
 https://discord.gg/CMe485kZ

 Host name:  cycle3.eecs.ku.edu
 
 /home/KUUsername/
  
 Terminal
 - Purpose of sending commands and viewing results
 - Terminal has focus on a specific folder at all times
 - Get to basic file organization
 - Substitute Underscores or dashes
 - If you see the word public do not put anything in a public folder
 - Store your files in your person directory

 
 g++ main.cpp -o "programName"
 ./a.out
 
 Within Nano
 Control and
 
 main.cpp   ->  Compiling Code ->   Exectuable Program
 c++ code
 
 std::cout << std::endl;
 
 Eva.morrison33@ku.edu
 
 
 HelloWorld: main.o
                 g++ -std=c++11 -g -Wall main.o -o HelloWorld

 main.o: main.cpp
                 g++ -std=c++11 -g -Wall -c main.cpp

 clean:
                 rm *.o HelloWorld
 
 Remote Login to Cycle Servers at Ku

 Step 1    Open Terminal
 Step 2    Type the following command
 ssh m358b583@cycle3.eecs.ku.edu
 Step 3    Type your KUID Password
 zuhqof-nomwu2-jyGmah

 
 
 */
