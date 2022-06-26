//main
#include "Shape.h"
#include <iostream>

//Define a function that takes an array of Shape pointers and its size

//ptrShapes is an array pointer of type shapes to objects
Shape* largestShape(Shape** ptrShapesArr, int size);

int main(){
    
    return(0);
}

Shape* largestShape(Shape** ptrShapesArr, int size){
    
    //we will return a pointer to the shape with the largest area
    
    int index = 0;
    double tempArea = 0;
    
    for (int i = 0; i < size; i++) {
        if (ptrShapesArr[i]->area() > tempArea) {
            tempArea = ptrShapesArr[i]->area();
            index = i;
        } else {
        }
    }
    return(ptrShapesArr[index]);
}
