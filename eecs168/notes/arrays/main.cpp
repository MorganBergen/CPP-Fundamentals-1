/*
 Write a program that obtains 57 doubles from the user. You will then print those values in the reverse order you obtained them.

 Then, obtain one more double from the user, but not a value to store in the array. This number represents a threshold. You will then print all values in the array that are above the threshold.


 
 */


#include <iostream>

int main(){
    
    const int SIZE = 57;
    int nums[SIZE];
    
    nums[0] = 55;
    nums[1] = 65;
    nums[2] = 22;
    nums[3] = 27;
    nums[4] = 865;
    
    
    for (int i = SIZE; i > 0; i--) {
        std::cout << nums[i] << '\n';
    }
    
    return(0);
}


/*
 
 BOARDWORK
 #include <iostream>

int main()
{

    const int SIZE = 5;
    double numInput[SIZE];
    int threshold = 0;
    std::cout << "Please enter 57 doubles: ";

    for (int i = 0; i < SIZE; i++) {
std::cin >> numInput[i];
    }

    for (int i = (SIZE - 1); i >= 0; i--) {

        std::cout << numInput[i] << "\n";
    }

    std::cout << "Please enter a threshold: ";
    std::cin >> threshold;
    
    std::cout << "Here are your numbers above the threshold: \n";
    for (int j = 0; j < SIZE; j++) {
        if (numInput[j] > threshold) {
            std::cout << numInput[j] << "\n";
        }
    }

    return(0);

}

*/
