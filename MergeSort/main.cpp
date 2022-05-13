#include <iostream>
#include <fstream>
#include "MergeSort.h"
using namespace std;

int main() {
	
	int arrSize;
	ifstream txtFile("numbers.txt");

	if (txtFile.good()) {
		txtFile >> arrSize;

	}

	else {
		cout << "Did not open file" << endl;
		return 1;
	}

	int array[arrSize];

	// dont have to offset the loop because the file read the first line already	
	for (int i = 0; i < arrSize; i++) {
		
		txtFile >> array[i];
		
	}
		
	cout << "Numbers entered" << endl;
	//cout << arrSize << endl;
	for (int i = 0; i < arrSize; i++) {
		cout << array[i] << " ";
	}

	cout << endl;

	cout << "Sorted" << endl;

	MergeSort(array, 0, arrSize - 1);

	for (int i = 0; i < arrSize; i++) {
		cout << array[i] << " ";
	}
	cout << endl;


}
