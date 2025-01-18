#include <stdio.h>

int main() {
	int x, y;
	int *iptr = 0;

        x = 50;
 	iptr = &x;
	y = *iptr;	//equivalent to y = x;
	*iptr = y;	//equivalent to x = y;

	printf("value of x = %d\n", x);
	printf("value of iptr = %d\n", *iptr);
	printf("value of y = %d\n", y);
	printf("value of iptr = %d\n", *iptr);

	return 0;
}
