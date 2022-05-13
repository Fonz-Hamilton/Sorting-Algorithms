#include <iostream>
using namespace std;

int InSort(int n, int *arr) {

	int key;
	int j;

	for (int i = 1; i < n; i++) {

		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) { 
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}

	return 0;
}
