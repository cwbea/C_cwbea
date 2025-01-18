#include <stdio.h>

// A pointer is a memory address, whose address is the address of another memory.

int main() {
	int *iptr = 0;  //bad practice, first initialise to 0 for type int or null
	//iptr = 300;		   //for type char and later reassign values

	printf("value of 0 is : %d\n", *iptr);

	return 0;

}
