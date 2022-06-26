#include <iostream>

int main()
{

    std::cout << "3) Running Total\n";

    int choice;
    int size = 0;
    std::cout << "Input a choice: ";
    std::cin >> choice;

//Running Total Start Code
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

    int counter = 1;

    for (int row = 1; row <= size; row++)
    {
        for (int col = 1; col <= size; col++)
        {
          if (col != size)
          {
              std::cout << counter;
              std::cout << ",";
              counter++;
          }
          else 
          {
              std::cout << counter;
          }
        }
        std::cout << '\n';
        counter++;
    }
//Running Total Start Code

    return (0);
}
