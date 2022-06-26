#include <iostream>

int main(){
    
//    //array created on call-stack
//    double arr0[5];
    
    //array created on call stack
    const int SIZE = 5;
    double arr1[SIZE];
    
    //declaration of a pointer
    double* nums = nullptr;
    
    //array created on a heap
    nums = new double[5];
    
    std::cout << "heap allocated array: \n";
    for (int i = 0; i < 5; i++) {
        nums[i] = i;
        std::cout << nums[i] << " ";
    }
    
    std::cout << "\narray created on call stack: \n";
    for (int i = 0, value = 10; i < SIZE ; i++, value++) {
        arr1[i] = value;
        std::cout << arr1[i] << " ";
    }
    
    //heap allocated arrays can have a variable as their size
    
    int userSize = 0;
    int* nums1 = nullptr;
    std::cout << "\nHow big should the array be: ";
    std::cin >> userSize;
    
    nums1 = new int[userSize];
    
    for (int i = 0; i < userSize; i++) {
        nums1[i] = i - 10;
        std::cout << nums1[i] << " ";
    }
    
    delete[] nums;
    delete[] nums1;
    
    return(0);
}


/*
 
 Arrays
 - Array is a collection of variables of the same data type
 - You can create arrays in one of two places in memory, on the call-stack or on the heap
 
 When to make a Stack-Allocated Arrays
 - When the size of the array is known at compile time
 
 When to make a Heap-Allocated Array
 - When the size of the array is known at runtime
 
 */


/*
 #include <iostream>

 //Goal: Define a function that sets all values
 //        a 2D array of ints to -1
 void init2D(int** arr2D, int rows, int cols)
 {
     //Draw the call stack and heap
     for(int i=0; i<rows; i++)
     {
         for(int j=0; j<cols; j++)
         {
             arr2D[i][j] = -1;
         }
     }
 }

 //Goal: Define a function that prints
 //        a 2D array of ints.
 void print2D(int* arr2D[], int rows, int cols)
 {
     for(int i=0; i<rows; i++)
     {
         for(int j=0; j<cols; j++)
         {
             std::cout << arr2D[i][j] << ' ';
         }
         std::cout << '\n';
     }
 }

 int main()
 {
     int** grid = nullptr;
     int rows = 3;
     int cols = 4;
     
     grid =  new int*[rows];
     
     for(int i=0; i<rows; i++)
     {
         grid[i] = new int[cols];
     }
     
     init2D(grid, rows, cols);
     print2D(grid, rows, cols);
     
     //don't forget do delete your 2D array!
 }
 */
