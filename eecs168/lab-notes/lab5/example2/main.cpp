#include <iostream>

int main(){

    int size = 0;
    std::cout << "Enter a size: ";
    std::cin >> size;

    for (int row = size + 1; row > 1; row--)
    {

        for (int space = 0; space < size - (row - 1); space++)
        {
            std::cout << ' ';
        }
        
        for (int col = 1; col < row; col++)
        {
            std::cout << '*';
        }
        
        std::cout << '\n';
    }
    

    return(0);
}

