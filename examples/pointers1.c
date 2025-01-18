#include <stdio.h>

int main() {
	int x;
	int *iptr;
	x = 4;
	int arr[] = {2,4,6,8,10};


	iptr = &x;
	*iptr = x;

	printf("address of x is : %p\n", iptr);
	printf("value of x is : %d\n", *iptr); 

	iptr = &arr[0];
	printf("address of 1st  element of  array is : %p\n", iptr);

	iptr = &arr[1];
	printf("address of 2nd element of array is : %p\n", iptr);

	iptr = &arr[2];
	printf("address of 3rd element of array is : %p\n", iptr);

	iptr = &arr[3];
	printf("address of 4th element of array is : %p\n", iptr);

	iptr = &arr[4];
	printf("address of 5th element of array is : %p\n", iptr);

	return 0;


}
