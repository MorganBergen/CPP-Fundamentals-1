//Circle.h

//Compiler macro to allow for multiple
//includes of this file
//You'll do this in all your .h files
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
	private:
	//member variable
	double radius;
	
	public:
	Circle();
		
	double getRadius();	
	bool setRadius(double newRadius);
	
	//member method
	//FYI, method just means a function
	//that belongs to a class
	double area();
	
};

#endif

