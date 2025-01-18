#include <stdio.h>

int main() {
	int arr[] = {2,4,6,8,10};
	int size;
	int i;

	int *iptr = 0;

	iptr = arr;

	size = sizeof(arr) / sizeof(int);

	for (i=0; i<size; i++) {
		
		printf("array value [%d] = %d\n", i, *(iptr + i));
	}

	return 0;
}
