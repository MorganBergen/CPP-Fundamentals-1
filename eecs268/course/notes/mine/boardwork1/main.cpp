/*
 
 Define the following function takes an array of doubles and returns the sum of all positive values in the array of doubles
 
 */

#include <iostream>
#include <array>

//function declaration
double returnPosSum(double *arr, int size);

int main(){
    
    int size = 5;
    double arr[5] = {1, -1, 2, 4, 0};
    
    double printedSum;
    printedSum = returnPosSum(arr, size);
    
    std::cout << printedSum;
    
    return(0);
}

//function definition
double returnPosSum(double *arr, int size){
    
    int sum = 0;
    
    for (int i = 0; i <= size; i++) {
        if (arr[i] > 0) {
            sum = sum + arr[i];
        } else {
            
        }
    }
    
    return(sum);
}


