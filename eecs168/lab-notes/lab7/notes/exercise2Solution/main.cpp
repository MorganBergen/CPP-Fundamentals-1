#include <iostream>
#include <string>
using namespace std;

int main() {
  std::cout << "Input an array size for you words array:\n";

  int size;
  std::string* ustrings = nullptr;
  std::cin >> size;

  ustrings = new std::string[size];

  //int longest = 0;

  //int shortest = 100;
  



  for (int i=0; i<size; i++){
    std::cout << "Output a word: \n";
    std::cin >> ustrings[i];
  }

  int longest = ustrings[0].length();
  int shortest = ustrings[0].length();
  std::string longest_word = ustrings[0];
  std::string shortest_word = ustrings[0];

  for (int j=1; j<size; j++) {
    
    if (ustrings[j].length() > longest) {

        longest = ustrings[j].length();
        longest_word = ustrings[j];

        //longest_word 
        //std::cout << longest_word;
        
    } 
    else if (ustrings[j].length() < shortest){

      shortest = ustrings[j].length();
      shortest_word = ustrings[j];
      //std::string shortest_word;
      //shortest_word = ustrings[i];
      

    }



  }  

  
  std::cout << "Longest word: " << longest_word << "\n";
  std::cout << "Shortest word: " << shortest_word;
  //std::cout << longest_word << "\n";
  //std::cout << shortest_word << "\n";
}
