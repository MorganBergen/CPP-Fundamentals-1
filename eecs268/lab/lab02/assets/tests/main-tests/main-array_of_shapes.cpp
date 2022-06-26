//  main.cpp

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main(int argc, const char * argv[]) {
    
    double radius;
    double length;
    double width;
    double base;
    double height;
    
    
    //an array of shape pointers, each pointer will point to a cir, rec, or tri object
    
    Shape** array_of_shapes = nullptr;
    array_of_shapes = new Shape*[3];
    
    for (int i = 0; i < 3; i++) {
        array_of_shapes[i] = nullptr;
    }
    
    std::cout << "enter radius: ";
    std::cin >> radius;
    array_of_shapes[0] = new Circle(radius);
    
    std::cout << "enter width: ";
    std::cin >> width;
    std::cout << "enter length: ";
    std::cin >> length;
    array_of_shapes[1] = new Rectangle(width, length);
    
    std::cout << "enter base: ";
    std::cin >> base;
    std::cout << "enter height: ";
    std::cin >> height;
    array_of_shapes[2] = new Triangle(base, height);
    
    for (int i = 0; i < 3; i++) {
        std::cout << "Shape at index " << i << ": " << array_of_shapes[i] -> shapeName();
        std::cout << " area = " << array_of_shapes[i] -> area() << std::endl;

    }
    
    
    return 0;
}


/*Shape at index 0: Circle area = 95.0331
 Shape at index 99: Does not exist
 Shape at index 2: Rectangle area = 212.625
 Exiting...*/












