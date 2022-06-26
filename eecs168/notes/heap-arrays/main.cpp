 /*
 * Goal Let the user creat and fill an array of characters
 * 
 *
 * 
 */


#include <iostream>
#include <string>

int main(){

    char* symbols = nullptr;
    int size = 0;

    std::cout << "How many characters do you want to store?: ";
    std::cin >> size;

    symbols = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter a char: ";
        std::cin >> symbols[i];
    }

     for (int i = 0; i < size; i++)
    {
        std::cout << symbols[i] << '\n';
    }

    delete[] symbols;

    return(0);
}   