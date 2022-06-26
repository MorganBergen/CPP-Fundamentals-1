#include <iostream>

int main()
{
    int size = 0;
    std::cout << "\nUpper Left Triangle\n";

    do
    {
        std::cout << "Input a size: ";
        std::cin >> size;
        if (size <= 3)
        {
            std::cerr << "Invalid Entry, please input a size greater than 3.\n";
        }
        else
        {
            std::cout << '\n';
        }
        
    } while (size <= 3);

    for (int row = size + 1; row > 1; row--)
    {
        for (int col = 1; col < row; col++)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    return (0);
}
