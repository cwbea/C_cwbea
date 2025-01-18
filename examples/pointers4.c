#include <stdio.h>

int main() {
	int arr[5];
	int *ptr = arr;
	int i;
	int size;

	size = sizeof(arr) / sizeof(int);

	printf("Enter 5 Elements of the Array:\n");
	for (i=0; i<5; i++) {
		printf("Enter value for element %d: ", i);
		scanf("%d", (ptr + i));
		}

	printf("\n The values of the array are :\n");
	for (i=0; i<size; i++) {
		printf("Element %d: %d\n", i, *(ptr + 1));
		}

	return 0;
}
