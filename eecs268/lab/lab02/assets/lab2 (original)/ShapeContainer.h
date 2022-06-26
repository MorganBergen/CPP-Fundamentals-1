/*
file - ShapeContainer.h
brief - this file has all the method signatures for the container class, it has methods to add and remove objects
from the class, and it also can return the area and shapename of an object at a specific index
*/
#ifndef SHAPECONTAINER_H
#define SHAPECONTAINER_H

#include "Shape.h"
#include <stdexcept>

class ShapeContainer{

   public:
     ShapeContainer(int size); //initialize pointers in m_arrayOfShapes to nullptr
     ~ShapeContainer(); // deletes what m_arrayOfShapes is pointing to
     double area(int index) const; //returns area at index throws a std::runtime_error if index is invalid, meaning out of range or index has nullptr
     std::string shapeName(int index) const; //returns shapeName at index throws a std::runtime_error if index is invalid, meaning out of range OR index has nullptr
     void add(Shape* shapePtr, int index); //adds a pointer that points to a shape object to specific index of m_arrayOfShapes throws a std::runtime_error if index is invalid OR if shapePtr is nullptr
     void remove(int index); //removes object that m_arrayOfShapes points to, then assigns index to nullptr, throws a std::runtime_error if the index is invalid or there is no object to delete
   private:
     Shape** m_arrayOfShapes;
     int m_size;
};

#endif
