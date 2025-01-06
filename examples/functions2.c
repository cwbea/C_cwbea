#include <stdio.h>

void hello(void);
int x;

int main() {
    //	int x;
	x = 2; 

	hello();

	printf("\n x = %d\n", x);

	hello();

	printf("\n end of program");

	return 0;
}

void hello(void) {

	int i;

	for (i = 0; i < x; i++)	// error
		printf("hello ");

	x = 4;
}

