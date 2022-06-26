/*
 
 Question 2
 Define a function that takes a 2D array of characters and its dimensions.
 This function will return true if the first and the last column are identical (case-sensitive).
 Assume valid parameters.
 
 Examples
 Content of array passed in     return type
 a, z, q, a                     true
 b, t, p, b
 y, r, d, y

 A, z, q, a                     false
 b, t, p, b
 y, r, d, y

 a, a                           true
 b, b

 a,a,a,a,a                      false
 a,a,a,a,z

*/

#include <iostream>
#include <string>

bool identical(char **array, int rows, int cols){
    bool checked = false;
    std::string firstColumn = "";
    std::string lastColumn = "";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j == 0) {
                firstColumn += array[i][j];
            } else if (j == cols - 1) {
                lastColumn += array[i][j];
            }
        }
    }
    if (firstColumn == lastColumn) {
        checked = true;
    }
    return (checked);
}

int main() {
    
    int firstNumRows = 2;
    int firstNumCols = 5;
    char **first = nullptr;
    first = new char*[firstNumRows];
    first[0] = new char[firstNumCols];
    first[1] = new char[firstNumCols];
    first[0][0] = 'a';
    first[0][1] = 'a';
    first[0][2] = 'a';
    first[0][3] = 'a';
    first[0][4] = 'a';
    first[1][0] = 'a';
    first[1][1] = 'a';
    first[1][2] = 'a';
    first[1][3] = 'a';
    first[1][4] = 'z';
    
    int thirdNumRows = 2;
    int thirdNumCols = 2;
    char **third = nullptr;
    third = new char*[thirdNumRows];
    third[0] = new char[thirdNumCols];
    third[1] = new char[thirdNumCols];
    third[0][0] = 'a';
    third[0][1] = 'a';
    third[1][0] = 'b';
    third[1][1] = 'b';
    
    std::cout << identical(first, firstNumRows, firstNumCols) << '\n';
    std::cout << identical(third, thirdNumRows, thirdNumCols) << '\n';
    
    
   return 0;
}
