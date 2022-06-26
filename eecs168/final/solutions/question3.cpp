#include <iostream>
#include <string>

bool isPalindrome() {
    bool checker = false;
    return (checker);
}

void reverse(){
    
}

int main() {
    
    char m_array[7] = {'v', 'i', 'l', 'l', 'a', 'g', 'e'};
    char bob[3] = {'b', 'o', 'b'};
    char abccba[6] = {'a', 'b', 'c', 'c', 'b', 'a'};
    
    //changed back to int later
    bool checker = false;
    int size = int(strlen(m_array));
    char storage[size];
    char reverse[size];
    std::string original = "";
    std::string reversed = "";
    
    //storage
    for (int i = 0; i < size; i++) {
        storage[i] = m_array[i];
        std::cout << storage[i] << " ";
        original = original + storage[i];
    }
    for (int i = 0; i < size; i++) {
        reverse[i] = storage[size - i - 1];
        std::cout << reverse[i] << " ";
        reversed = reversed + reverse[i];
    }
    std::cout << "\noriginal: " << original << "\n";
    std::cout << "\nreversed: " << reversed << "\n";
    
    if (original == reversed) {
        checker = true;
    } else {
        checker = false;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return (0);
}

//  The method isPalindrome returns true if the contents of the CoolString is a palindrome, meaning the characters in the array are the same forwards and backwards. It does NOT print anything. You may NOT alter the parameter list.
//  [14pts] Assume you are adding a new method to the CoolString class called isPalindrome(). Assume its signature is the following in the header file:

/*
 //CoolString.cpp
 #include <string>

 bool CoolString::isPalindrome() const
 {
   //Your code below

     bool checker = false;
     int SIZE = int(strlen(m_array));
     char storage[size];
     char reverse[size];
     std::string original = "";
     std::string reversed = "";
     
     for (int i = 0; i < SIZE; i++){
         storage[i] = m_array[i];
         original = original = storage[i];
     }
     for (int i = 0; i < SIZE; i++){
         reverse[i] = stroage[SIZE - i - 1];
         reversed = reversed + reverse[i];
     }
     if (original == reversed) {
         checker = true;
     } else {
         checker = false;
     }
     return(checker);
 }

 */
