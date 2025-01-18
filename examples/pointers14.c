#include <stdio.h>

int main() {
	int *iptr = 0; 
	int arr[10] = {2,4,6,8,10,12,14,16,18,20};

        iptr = &arr[4];
       
				
	printf("value of arr = %d\n", *iptr);
	
	iptr++;

	printf("value of arr = %d\n", *iptr);

	iptr = &arr[6 - 3];
	
	printf("value of arr = %d\n", *iptr);

	return 0;

}


