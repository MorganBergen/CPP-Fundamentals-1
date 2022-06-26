#include <iostream>

int main(){

    int size = 0;
    std::cout << "Enter the side: ";
    std::cin >> size;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            std::cout << row << col << ' ';
        }
    std::cout << '\n';
    }

    return(0);
}