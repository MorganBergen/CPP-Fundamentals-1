/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Morgan Bergen
 * Assignment:   EECS-168/169 Lab 7
 * Description:
 
 Obtain a file name from the user, which will contain data pertaining to a 2D array
 Create a file for each of the following:
 averages.txt: contains the overall average of the entire array,
 then the average of each row
 reversed.txt: contains the original values but each row is reversed
 flipped.txt: contains the original values but is flipped top to bottom
 (first row is now the last row, etc.)
 If the dimensions of the array are symmetric (NxN):
 create a diagonal.txt: contains the array mirrored on the diagonal
 
 Example files
 The input file will be formatted in the following way:
 <num rows> <num cols>
 <values>
 
 Sample file called "input.txt"
 4 4
 1.0 2.0 3.0 4.0
 5.0 6.0 7.0 8.0
 9.0 10.0 11.0 12.0
 13.0 14.0 15.0 16.0
 
 Output to averages.txt
 Total average: 8.5
 Row 1 average: 2.5
 Row 2 average: 6.5
 Row 3 average: 10.5
 Row 4 average: 14.5
 
 Output to reversed.txt
 4.0 3.0 2.0 1.0
 8.0 7.0 6.0 5.0
 12.0 11.0 10.0 9.0
 16.0 15.0 14.0 13.0
 
 Output to flipped.txt
 13.0 14.0 15.0 16.0
 9.0 10.0 11.0 12.0
 5.0 6.0 7.0 8.0
 1.0 2.0 3.0 4.0
 
 Since it's symmetric we also get diagonal.txt
 1.0 5.0 9.0 13.0
 2.0 6.0 10.0 14.0
 3.0 7.0 11.0 15.0
 4.0 8.0 12.0 16.0
 
 * Date: Thu Apr  8 15:24:16 CDT 2021
 *
 ---------------------------------------------------------------------------- */

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main(){
    
    //Declarations
    /* ---------------------------------------------------------------------------- */
    std::ofstream outFile;
    std::string fileName;
    std::string extension = ".txt";
    std::string averages = "averages.txt";
    std::string reversed = "reversed.txt";
    std::string flipped = "flipped.txt";
    std::string diagonal = "diagonal.txt";
    int numRows = 4;
    int numCols = 4;
    
    double** values = nullptr;
    values = new double*[numRows];
    
    for (int i = 0; i <= numRows; i++) {
        values[i] = new double[numCols];
        
    }
    
    double counter = 1.0;
    /* ---------------------------------------------------------------------------- */
    
    //Obtain a file name from the user, which will contain data pertaining to a 2D array
    /* ---------------------------------------------------------------------------- */
    std::cout << "Input a name: ";
    std::cin >> fileName;
    
    outFile.open(fileName.append(extension));
    outFile << numRows << ' ' << numCols << '\n';
    
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            values[i][j] = counter;
            outFile << std::fixed << std::setprecision(1) << values[i][j] << ' ';
            counter++;
            
        }
        outFile << '\n';
        
    }
    outFile.close();
    /* ---------------------------------------------------------------------------- */
    
    // Reading from the file to save the array & get set up to create the following files
    /* ---------------------------------------------------------------------------- */
    std::ifstream inFile;
    inFile.open(fileName);
    if (inFile.is_open()) {
        
        inFile >> numRows >>  numCols;
        
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numCols; j++) {
                values[i][j] = counter;
                inFile >> values[i][j];
                counter++;
                
            }
        }
        counter = 1.0;
        
        inFile.close();
    } else {
        std::cerr << "File could not be opened.\n";
    }
    /* ---------------------------------------------------------------------------- */
    
    //averages.txt: contains the overall average of the entire array, then the average of each row
    /* ---------------------------------------------------------------------------- */
    
    
    //Writing out the calculated averages out to the averages file
    outFile.open(averages);
    double rowTotal = 0.0;
    double total = 0.0;
    double rowAverage;
    double average;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            values[i][j] = counter;
            total = values[i][j] + total;
            counter++;
            
        }
    }
    counter = 1.0;
    average = total/(numRows*numCols);
    outFile << "Total Average: " << average << '\n';
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            values[i][j] = counter;
            rowTotal = values[i][j] + rowTotal;
            counter++;
            
        }
        rowAverage = rowTotal/numCols;
        outFile << "Row " << i+1 << " average: " << rowAverage << '\n';
        rowTotal = 0.0;
    }
    outFile.close();
    /* ---------------------------------------------------------------------------- */
    
    
    //reversed.txt: contains the original values but each row is reversed
    /* ---------------------------------------------------------------------------- */
    outFile.open(reversed);
    
    for (int i = 0; i < numRows; i++){
        for (int j = 0, k = numCols - 1; j < k; j++, k--) {
            double l = values[i][j];
            values[i][j] = values[i][k];
            values[i][k] = l;
        }
    }
    
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            outFile << values[i][j] << ' ';
        }
        outFile << '\n';
    }
    
    outFile.close();
    /* ---------------------------------------------------------------------------- */
    
    //Output to flipped.txt
    /* ---------------------------------------------------------------------------- */
    outFile.open(flipped);
    
    //resetting the array back to the original structure
    counter = 1.0;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            values[i][j] = counter;
            counter++;
            
        }
    }
    counter = 1.0;
    
    //flipping the array
    for (int i = 0, k = numRows - 1; i < k; i++, k--){
        for (int j = 0; j < numCols; j++) {
            double l = values[i][j];
            values[i][j] = values[k][j];
            values[k][j] = l;
        }
    }
    
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numRows; j++) {
            outFile << std::fixed << std::setprecision(1) << values[i][j] << ' ';
        }
        outFile << '\n';
    }
    
    outFile.close();
    /* ---------------------------------------------------------------------------- */
    
    //output to diagonal.txt
    /* ---------------------------------------------------------------------------- */
    outFile.open(diagonal);
    
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            values[i][j] = counter;
            counter++;
        }
    }
    
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            outFile << values[j][i] << ' ';
        }
        outFile << '\n';
    }
    
    outFile.close();
    /* ---------------------------------------------------------------------------- */
    
    for (int i = 0; i < numRows; i++) {
        delete[] values[i];
    }
    
    delete[] values;
    
    return(0);
}
