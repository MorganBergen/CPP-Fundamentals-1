/*
Rook Path
In addition to the user picking the size for this pattern, they will also pick the position of a Rook.
The positions will range from 0 up to, but not including, n.  
Obtain the row then the column.
You will then print the nxn board displaying where the Rook could travel.
In the column, display | (the same symbol used in logical or)
In the row, display - (dash)
In teh exact position of the Rook, display a capital R
Display *s everywhere else

Recall the Rooks can move vertically and horizontally from edge to edge on the board
Example Output:

Example where n = 5 and position of the Rook is (1, 3)
 ***|*
 ---R-
 ***|*
 ***|*
 ***|*

 Example where n=5 and position of the Rook is (4,2)
 **|**
 **|**
 **|**
 **|**
 --R--
*/

#include <iostream>

int main()
{

    std::cout << "1) Checkerboard\n";
    std::cout << "2) Rook Path\n";
    std::cout << "3) Running Total\n";
    std::cout << "4) Upper Left Triangle\n";
    std::cout << "5) Upper Right Triangle\n\n";

    int choice;
    std::cout << "Input a choice: ";
    std::cin >> choice;
    int size = 0;

    // Start of Rook Path Code
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

    // Input a row position
    int rowPosition = 0;
    do
    {
        std::cout << "Input the row number for the Rook's Position: ";
        std::cin >> rowPosition;
        if (rowPosition > size)
        {
            std::cerr << "Invalid Entry, please input a number greater than 0 and less than your declared size.\n";
        }
        else
        {
            std::cout << '\n';
        }

    } while (rowPosition > size);

    // Input a column position
    int colPosition = 0;
    do
    {
        std::cout << "Input the column number for the Rook's Position: ";
        std::cin >> colPosition;
        if (colPosition > size)
        {
            std::cerr << "Invalid Entry, please input a number greater than 0 and less then your declared size.\n";
        }
        else
        {
            std::cout << '\n';
        }

    } while (colPosition > size);

    for (int row = 0; row < size; row++)
    {
        if (row == rowPosition)
        {
            for (int col = 0; col < size; col++)
            {
                if (col == colPosition)
                {
                    std::cout << 'R';
                }
                else
                {
                    std::cout << '-';
                }
            }
        }
        else
        {
            for (int col = 0; col < size; col++)
            {
                if (col == colPosition)
                {
                    std::cout << '|';
                }
                else
                {
                    std::cout << '*';
                }
            }
        }
        std::cout << '\n';
    }
    // End of Rook Path Code

    return (0);
}
