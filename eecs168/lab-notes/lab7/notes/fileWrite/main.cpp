/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Zoe Kulphongpatana
 * Assignment:   EECS-168/169 Lab 6
 * Description:  This program will create an array from user inputed values in another file.
 * Date: 3/26
 *
 ---------------------------------------------------------------------------- */

#include <iostream>
#include <fstream>
#include <algorithm>

int main() {

	// variable for the name of the file is initialized, a variable to read from the files is created
	std::string myFile = "";
	std::ifstream inFile;

	// the user is prompted for a file name until a file that can be opened is inputted
	while (inFile.is_open() == false) {
		std::cout << "What is the name of the file?: ";
		std::cin >> myFile;
		inFile.open(myFile);
		//if (inFile.is_open() == false) {
		//	std::cout << "Invalid file name, please try again.\n";
		//}
	}

	// an integr variable for the size of the array is initialized and if the file is opened the first value is put into size
	int size;
	if (inFile.is_open()) {
		inFile >> size;
	} else {
		std::cout << "The file could not be opened!\n";
	}

	// a double array of the determined size is created
	double* inputNums = nullptr;
	inputNums = new double[size];

	// if the file is opened values will be put into the array
	if (inFile.is_open()) {
		for (int i = 0; i < size; i++) {
			inFile >> inputNums[i];
		}	
		inFile.close();
	} else {
		std::cout << "The file could not be opened!\n";
	}

	// an array for the normalized values is created and values from inputNums are put into it
	double* normalNums = nullptr;
	normalNums = new double[size];
	for (int i = 0; i < size; i++) {
		normalNums[i] = inputNums[i];
	}	
	// min and max variables are initialized and the min and max values from the normalNums array are found
	double min = normalNums[0];
	double max = normalNums[0];
	for (int i = 0; i < size; i++) {
		if (normalNums[i] < min) {
			min = normalNums[i];
		}
		else if (normalNums[i] > max) {
			max = normalNums[i];
		}
	}
	// the values in the normalNums array are normalized and saved in that array. 	
	for (int i = 0; i < size; i++) {
		if (normalNums[i] == min) {
			normalNums[i] = 0;
		} else if (normalNums[i] == max) {
			normalNums[i] = 1;
		} else {
			normalNums[i] = (normalNums[i] - min) / (max - min);
		}
	}

	// an array for the reversed values is created and values from inputNums are put into it
	double* reverseNums = nullptr;
	reverseNums = new double[size];
	for (int i = 0; i < size; i++) {
		reverseNums[i] = inputNums[i];
	}
	// the values in the reverseNums array are reversed and saved in that array
	//int first = 0;
	//int last = size - 1;
	//while (first != last) {
		//std::swap(reverseNums[first], reverseNums[last]);
		//first++;
		//last--;
	//}

	// file to output the normalized array is created and opened, and information is written into it
	std::ofstream outFileNormal;
	std::string fileNameNormal = "normalized.txt";
	outFileNormal.open(fileNameNormal);
	
	outFileNormal << "Original array: [";
	for (int i = 0; i < size; i++) {
		outFileNormal << inputNums[i];
		if (i != size - 1) {
			outFileNormal << ", ";
		}
	}
	outFileNormal << "]\n";

	outFileNormal << "Normalized array: [";
        for (int i = 0; i < size; i++) {
                outFileNormal << normalNums[i];
                if (i != size - 1) {
                        outFileNormal << ", ";
                }
        }
        outFileNormal << "]\n";
	
	outFileNormal.close();
	
        // file to output the reversed array is created and opened, and information is written into it
        std::ofstream outFileReverse;
        std::string fileNameReverse = "reversed.txt";
        outFileReverse.open(fileNameReverse);

        outFileReverse << "Original array: [";
        for (int i = 0; i < size; i++) {
                outFileReverse << inputNums[i];
                if (i != size - 1) {
                        outFileReverse << ", ";
                }
        }
        outFileReverse << "]\n";

        outFileReverse << "Reversed array: [";
        for (int i = 0; i < size; i++) {
                outFileReverse << reverseNums[i];
                if (i != size - 1) {
                        outFileReverse << ", ";
                }
        }
        outFileReverse << "]\n";

	outFileReverse.close();

	std::cout << "The input values have been normalized and reversed.\n";

	// heap allocated arrays are deleted
	delete[] inputNums;
	delete[] normalNums;
	delete[] reverseNums;
	
	return(0);
}


