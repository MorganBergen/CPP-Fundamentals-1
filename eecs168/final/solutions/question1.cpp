/*
 Define a function that takes an array of characters and its size. It returns true if the array contains the sequence 'd', 'o', 'g' (case-sensitive). The three letters MUST be in that exact order but can be anywhere in the array. You are NOT allowed to use any libraries/classes that perform the search for you. Assume valid parameters.

 */

#include <iostream>

bool dogSequence(char array[], int size);

int main(){
    
    char dog[3] = {'d', 'o', 'g'};
    
    
    char first[9] = {'a', 'b', 'c', 'd', 'o', 'g', 'x', 'y', 'z'};
    char second[3] = {'g', 'o', 'd'};
    char third[4] = {'d', 'o', 'a', 'g'};
    char fourth[3] = {'d', 'o', 'g'};
    char fifth[6] = {'d', 'o', 'g', 'd', 'o', 'g'};
    
    std::cout << dogSequence(dog, 3) << " = " << true << '\n';
    std::cout << dogSequence(first, 9) << " = " << true << '\n';
    std::cout << dogSequence(second, 3) << " = " << false << '\n';
    std::cout << dogSequence(third, 4) << " = " << false << '\n';
    std::cout << dogSequence(fourth, 3) << " = " << true << '\n';
    std::cout << dogSequence(fifth, 6) << " = " << true << '\n';
    
    return(0);
}

bool dogSequence(char array[], int size){
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if ('d' == array[i]) {
            counter++;
            if ('o' == array[i + 1]) {
                counter++;
                if ('g' == array[i + 2]) {
                    counter++;
                } else {
                }
            } else {
            }
        } else {
        }
    }
    if (counter >= 3) {
        return(true);
    } else {
        return(false);
    }
}


