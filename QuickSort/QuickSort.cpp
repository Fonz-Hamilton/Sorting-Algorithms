#include <iostream>
using namespace std;

// the main event
int Partition(int *arr, int p, int r) {
    int x = arr[r];						// take the last element in the array as pivot
    int j = p - 1;						// j = first element - 1
    int temp;							// temp for tempies

    for (int i = p; i < r; i++) {		// i equals the first element in the instance
										// r equals the last elemnt in the instance
        if (arr[i] <= x) {				// if current element is less than the pivot
            j++;						// increment j
            temp = arr[j];				// throw the value in arr[j] into temp
            arr[j] = arr[i];			// swap
            arr[i] =  temp;
        }
		// increment j so it is pointing at the next value ahead of its position
		// this has the effect of pointing to the set of numbers bigger than pivot
		// the if statement swaps the smaller number with first biggest number in current pos
		// the first largest number is what j is pointing to
		// i is pointing to the numbers not yet sorted
		// you swap i and j so now i (smaller) is where j (larger) was
		// increment i to point to the next number in array
		
    }
	// after the for loop ends need to do one last swap
	arr[r] = arr[j + 1]; 		// swap the value of the last index (r) 
	arr[j + 1] = x;				// with the position that is ahead of j
								// this is like what is happening in the if statement except
								// one last time

    return j + 1;				// returns the pivot index

}


void QuickSort(int *arr, int p, int r) {
	int q;
	if (p < r) {
		q = Partition(arr, p, r);
		QuickSort(arr, p, q - 1);		// conquer left
										// from p to where the pivot index is - 1
		QuickSort(arr, q + 1, r);		// conquer right
										// from the pivot index + 1 to the last element of array
	}
}

