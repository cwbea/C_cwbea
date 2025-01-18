#include <stdio.h>

int main() {
	int x = 97;
	int *iptr = 0;
	char *chptr = NULL;
	
	iptr = &x;

	chptr = (char *) iptr; 	//convert iptr to a char pointer type
				
	printf("value of x = %d\n", x);
	printf("value of iptr = %d\n", *iptr);
	printf("value of chptr = %c\n", *chptr);

	return 0;
}

