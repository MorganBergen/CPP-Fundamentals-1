/*
 file - Executive.h
 brief - this file allows for the overarching functionality of the program. We have the add, print, and deleteObject functionalities of the
 program and we also have member variables that we can set as we read in from the file and then we can declare objects
 and set their member variables as necessary as we perform operations.
 
 */

#include "Executive.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include <iostream>
#include <fstream>
#include <stdexcept>

Executive::Executive(std::string fileName){
    
    m_fileName = fileName;
    
    inFile.open(fileName);
    
    if(inFile.is_open()){
        
        inFile>>m_fileSize;
    }
    m_container = new ShapeContainer(m_fileSize);
}

Executive::~Executive(){
    
    delete  m_container;
    
}

void Executive::run(){
    
    while(!inFile.eof()){
        
        inFile >> m_instruction >> m_index;
        
        if (m_instruction == "ADD"){
            
            add();
            
        } else if (m_instruction == "PRINT"){
            
            print();
            
        } else if (m_instruction == "DELETE"){
            
            deleteObject();
            
        } else if (m_instruction == "EXIT"){
            
            inFile.close();
            std::cout<<"Exiting..."<<std::endl;
            return;
            
        } else{
            
            std::cout<<"Invalid option!"<<std::endl;
            
        }
        
    }
    inFile.close();
    
}

void Executive::add(){
    
    inFile >> m_nameOfObject;
    
    if(m_nameOfObject == "CIR"){
        inFile >> m_radius;
        Circle* tempCir = new Circle; // don't delete this is passed in
        tempCir -> setRadius(m_radius);
        try {
            m_container -> add(tempCir, m_index);
        } catch(std::runtime_error& e){
            std::cout<< "Shape at index " << m_index << ": " << e.what() << std::endl;
            delete tempCir;
        }
        
    }
}
