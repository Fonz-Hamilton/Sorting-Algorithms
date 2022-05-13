#include <iostream>
using namespace std;

void Merge(int *arr, int l, int m, int r) {
	int n1 = m - l + 1;			// + 1 so it is not zero say 3-3 = 0 + 1 = 1
	int n2 = r - m;				// example 4-3 so 1

	int leftArr[n1 + 1];		// n1 + 1 to include 0. n1 will have sentinal
	int rightArr[n2 + 1];		

	// fill the left array with values from begin to mid
	for (int i = 0; i < n1; i++) {
		leftArr[i] = arr[l + i];
	}
	// fill right array with values from mid to end
	for (int i = 0; i < n2; i++) {
		rightArr[i] = arr[m + i + 1];
	}

	leftArr[n1] = 99999;				// sentinel values
	rightArr[n2] = 9999;				// sentinel values

	int i = 0;
	int j = 0;

	// compare the values in the two arrays and merge them back into orignal array
	for (int k = l; k <= r; k++) {
		if (leftArr[i] <= rightArr[j]) {
			arr[k] = leftArr[i];
			i++;
		}

		else {
			arr[k] = rightArr[j];
			j++;
		}
	}
}


void MergeSort(int *arr, int l, int r) {
	int m;
	if (l < r) {					// if left is less than right
		m = (l + r) / 2;			// get the mid point
		MergeSort(arr, l, m);		// Call MergeSort on left to mid
		MergeSort(arr, m + 1, r);	// call MergeSort on right to mid
		Merge(arr, l, m, r); 		// combine the two
	}
}

