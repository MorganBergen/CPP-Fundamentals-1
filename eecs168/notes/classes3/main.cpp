//main.cpp
#include <iostream>
#include "Circle.h"

int main()
{
	Circle circ1;//Constructor is called
	Circle circ2;//Constructor is called
	
	std::cout << circ1.getRadius() << '\n';
	std::cout << circ2.getRadius() << '\n';
	
	circ1.setRadius(20);
	circ2.setRadius(-10);
	
	//print the area
	std::cout << circ1.area() << '\n';
	std::cout << circ2.area() << '\n';
	
}

/*
 class Triangle
 {
     private:
     //member variables
     double m_base;
     double m_height;
     
     public:
     Triangle();
     double area(); //method declaration
     double getBase();
     double getHeight();
     
     bool setBase(double base);
     bool setHeight(double height);
 };




 */
