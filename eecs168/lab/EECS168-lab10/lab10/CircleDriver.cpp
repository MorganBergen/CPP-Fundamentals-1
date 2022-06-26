#include <iostream>
#include "CircleDriver.hpp"
#include "Circle.hpp"

void CircleDriver::obtainCircles(){
    double x;
    double y;
    double r = 0.0;
    std::cout << "Enter information for Circle 1: \n";
    while (!circ1.setRadius(r)){
        std::cout << "Enter Radius: ";
        std::cin >> r;
    }
    std::cout << "X Position: ";
    std::cin >> x;
    std::cout << "Y Position: ";
    std::cin >> y;
    circ1.setX(x);
    circ1.setY(y);
    
    r = 0.0;
    
    std::cout << "\nEnter information for Circle 2: \n";
    while (!circ2.setRadius(r)){
        std::cout << "Enter Radius: ";
        std::cin >> r;
    }
    std::cout << "X Position: ";
    std::cin >> x;
    std::cout << "Y Position: ";
    std::cin >> y;
    circ2.setX(x);
    circ2.setY(y);
}

void CircleDriver::printCircleInfo(){
    
    std::cout << "\nInformation for Circle 1: " << std::endl;
    std::cout << "location: (" << circ1.getX() << ", " << circ1.getY() << ")" << std::endl;
    std::cout << "diameter: " << circ1.diameter() << std::endl;
    std::cout << "area: " << circ1.area() << std::endl;
    std::cout << "circumferenceL: " << circ1.circumference() << std::endl;
    std::cout << "distance from the origin: " << circ1.distanceToOrigin() << std::endl;
    
    std::cout << "\nInformation for Circle 2: " << std::endl;
    std::cout << "location: (" << circ2.getX() << ", " << circ2.getY() << ")" << std::endl;
    std::cout << "diameter: " << circ2.diameter() << std::endl;
    std::cout << "area: " << circ2.area() << std::endl;
    std::cout << "circumferenceL: " << circ2.circumference() << std::endl;
    std::cout << "distance from the origin: " << circ2.distanceToOrigin() << std::endl;
    
    if (circ1.intersect(circ2)) {
        std::cout << "\nThe circles intersect.\n" << std::endl;
    } else {
        std::cout << "\nThe circles do not intersect." << std::endl;
    }
}

void CircleDriver::run(){
    obtainCircles();
    printCircleInfo();
}
