#include <stdio.h>

// function to sort an array in ascending order

void sortArray(int arr[], int n) {
	int temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				// swap elements
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
	     	printf("%d ", arr[i]);
	}
}

int main() {
	int arr[] = {23, 34, 67, 16, 12, 6};
	int n = sizeof(arr) / sizeof(arr[0]);

	//print original array
	printf("original array:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	//call the function to sort the array
	printf("Array in ascending order:\n");
	sortArray(arr, n);

	printf("\n");

	return 0;
}

