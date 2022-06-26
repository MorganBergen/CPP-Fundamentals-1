/* -----------------------------------------------------------------------------
 *
 * @file:       ShapeContainer.cpp
 * @author:     Morgan Bergen
 * Assignment:  EECS-268 Lab 2
 * @brief:
 ShapeContainer.h @brief:
 This file has all the method signatures for the container class,
 it has methods to add and remove objects from the class,
 it can return the area, and
 it can shape name of an object at a specific index.

 ShapeContainer.cpp @brief:
 Has yet to be made.

 * @date:       Mon Sep 13 10:15:48 CDT 2021
 *
 ---------------------------------------------------------------------------- **/
//Start your program.



#include "ShapeContainer.h"
#include <iostream>

ShapeContainer::ShapeContainer(int size){
    m_size = size;
    m_arrayOfShapes = new Shape*[m_size];
    for (int i = 0; i < m_size; i++) {
        m_arrayOfShapes[i] = nullptr;
    }
}

ShapeContainer::~ShapeContainer(){
    for (int i = 0; i < m_size; i++) {
        if (m_arrayOfShapes[i] != nullptr) {
            delete m_arrayOfShapes[i];
        } else {

        }
    }
}

void ShapeContainer::add(Shape* shapePtr, int index){

    if (index < 0 || index > m_size - 1) {
        throw std::runtime_error("Cannot add object because index is out of range.");
    } else if (m_arrayOfShapes[index] == nullptr) {
        m_arrayOfShapes[index] = shapePtr;
    } else {
        delete m_arrayOfShapes[index];
        m_arrayOfShapes[index] = shapePtr;
    }
}
