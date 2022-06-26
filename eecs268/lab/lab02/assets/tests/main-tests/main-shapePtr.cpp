//  main.cpp

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"


int main(int argc, const char * argv[]) {
    
    int size = 3;
    
    //class ShapeContainer { ... private:
    Shape** array_of_shapes = nullptr;
    int m_size;
    
    //ShapeContainer::ShapeContainer(int size) {
    m_size = size;
    
    array_of_shapes = new Shape*[m_size];
    
    for (int i = 0; i < m_size; i++) {
        array_of_shapes[i] = nullptr;
        std::cout << array_of_shapes[i] << std::endl;
        
    }
    //}
    
    // void Executive::add {
    
    Circle* tempCir0 = new Circle;
    tempCir0 -> setRadius(0);
    
    Circle* tempCir1 = new Circle;
    tempCir1 -> setRadius(1);
    
    Circle* tempCir2 = new Circle;
    tempCir2 -> setRadius(2);
    
    Shape* shapePtr = nullptr;
    
    shapePtr = tempCir0;
    
    array_of_shapes[0] = shapePtr;
    
    shapePtr = tempCir1;
    
    array_of_shapes[1] = shapePtr;
    
    shapePtr = tempCir2;
    
    array_of_shapes[2] = shapePtr;
    
    //}
    
    for (int i = 0; i < size; i++) {
        
        std::cout << "Shape at index " << i << ": " << array_of_shapes[i] -> shapeName();
        std::cout << " area = " << array_of_shapes[i] -> area() << std::endl;
        
    }

    
    
    
    
    //ShapeContainer::~ShapeContainer(){
    for (int i = 0; i < m_size; i++) {
        if (array_of_shapes[i] != nullptr) {
            std::cout << "deleting " << array_of_shapes[i] << " ...... ";
            
            delete array_of_shapes[i];
            std::cout << array_of_shapes[i] << std::endl;
        } else {
            std::cout << array_of_shapes[i] << "is already set to nullptr" << std::endl;
        }
    }
    //}
    
    delete[] array_of_shapes;
    
    
    
    return 0;
}


/*Shape at index 0: Circle area = 95.0331
 Shape at index 99: Does not exist
 Shape at index 2: Rectangle area = 212.625
 Exiting...*/

/*5
 ADD 0 CIR 5.5
 ADD 1 TRI 2.5 6.6
 PRINT 0
 ADD 2 REC 10.5 20.25
 PRINT 99
 PRINT 2
 EXIT*/













