#include <iostream>
#include <fstream>
#include "InSort.h"
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

	InSort(arrSize, array);

	cout << "Sorted" << endl;

	for (int i = 0; i < arrSize; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}
