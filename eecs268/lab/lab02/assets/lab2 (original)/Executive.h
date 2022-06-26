/*
 file - Executive.h
 brief - this file allows for the overarching functionality of the program. We have the add, print, and deleteObject functionalities of the
 program and we also have member variables that we can set as we read in from the file and then we can declare objects
 and set their member variables as necessary as we perform operations.
 
 */
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "ShapeContainer.h"
#include <string>
#include <fstream>

class Executive{
    
public:
    
    //declares executive object, opens file, reads in size, creates container object
    Executive(std::string fileName);
    
    // deletes what m_container pointer is pointing to
    ~Executive();
    
    // reads in the file operation and index to perform it on and refers to add, print, and deleteObject as necessary
    void run();
    
    
private:
    std::ifstream inFile;
    
    int m_fileSize,  m_index;
    std::string m_fileName;
    ShapeContainer* m_container;
    
    std::string m_instruction, m_nameOfObject;
    double m_radius, m_length, m_width, m_height, m_base;
    
    void add(); // reads in name of object, declares circle, triangle, rectangle object, sets values of that object, and passes into m_container
    void print() const; // calls shapeName function and area function of ShapeContainer  of m_container given the index (from executive member variable)
    void deleteObject(); // calls m_container remove function at index
    
    
};

#endif
