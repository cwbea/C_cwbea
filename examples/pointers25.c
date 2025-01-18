#include <stdio.h>

void Bubblesort(int arr[10]);

int main() {
	int arr[] = {2,23,6,56,7,59,4,88,44,11};

	for (int i = 0; i < 10; i++) {
        	printf("%d ", arr[i]);
	}

	printf("\n");

	Bubblesort(arr);

	return 0;
}

void Bubblesort(int arr[10]) {
	int temp, i, change;
	do {
		change = 0;
		for (i = 0; i < 9; i++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				change = 1;
			}
		}
	} while (change);

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]); 
	}
}

