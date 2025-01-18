#include <stdio.h> 

int main() {
	int x = 10;
	int *iptr1 = 0;
	int **iptr2;
	int ***iptr3;
	int ****iptr4;
	int *****iptr5;
	
	iptr1 = &x;
	iptr2 = &iptr1;
	iptr3 = &iptr2;
	iptr4 = &iptr3;
	iptr5 = &iptr4;

	printf("value of x = %d\n", x);
	printf("value of *iptr1 = %d\n", *iptr1);
	printf("value of **1ptr2 = %d\n", **iptr2);
	printf("value of ***iptr3 = %d\n", ***iptr3);
	printf("value of ****iptr4 = %d\n", ****iptr4);
	printf("value of *****iptr5 = %d\n", *****iptr5);
	
	printf("\n");

	printf("address of x = %p\n", &x);
	printf("address of *iptr1 = %p\n", &iptr1);
	printf("address of **iptr2 = %p\n", &iptr2);
	printf("address of ***iptr3 = %p\n", &iptr3);
	printf("address of ****iptr4 = %p\n", &iptr4);
	printf("address of *****iptr5 = %p\n", &iptr5);	

	return 0;
}
