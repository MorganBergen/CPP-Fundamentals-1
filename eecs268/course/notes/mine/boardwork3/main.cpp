#include <fstream>
#include <iostream>
#include <array>

Triangle** trianglesFromFile(std::string Filename){

//open the file

//int main(){
    
    //variables
    
    int numTriangles;
    double triangleBase;
    double triangleHeight;
    Triangle trianglesHB[];
    
    std::ifstream inStream;
    //std::ofstream outStream;
    
    inStream.open(Filename);
    
    //open the file
    if(!inFile.is_open()){
        std::cerr << "error";
        exit(1);
    }
    
    //read in Triangle information
    inStream >> numTriangles;
    trianglesHB = new Triangle[numTriangles];
    
    for (int i = 0; i < numTriangles; i++) {
        inStream >> triangleBase >> triangleHeight;
        //public method from triangle class!
        trianglesHB[i].setBase(triangleBase);
        trianglesHB[i].setHeight(triangleHeight);
    }
    
    //return triangles base and height
    return(trianglesHB);
    
    inStream.close();
    
    return(0);
}

/*
 
 example.txt
 5
 10.5  7.5
 2.5, 1.5
 3.2, 6.1
 2.0, 5.0
 7.5, 20.5
 
 */
