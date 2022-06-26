#include <iostream>

void init2D(int* arr2D[], int rows, int cols) {
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++) {
            arr2D[i][j] = -1;
        }
    }
}

void print2D(int** arr2D, int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++) {
            arr2D[i][j] = -1;
        }
    }
}

int main(){
    
    int** grid = nullptr;
    int rows = 3;
    int cols = 4;
    
    grid = new int*[rows];
    
    for (int i = 0; i < rows; i++) {
        grid[i] = new int[cols];
    }
    
    init2D(grid, rows, cols);
    print2D(grid, rows, cols);
    
    delete[] grid;
    
    return(0);
}
