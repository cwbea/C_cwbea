#include <stdio.h>

void hello(void); //prototype

int main() {
	int x;
	x = 2;

	hello();

	printf("\n x = %d\n", x);

	hello();

	printf("\n end of program.\n");

	return 0;

}

void hello(void) {
	int i;
	
	for (i = 0; i < 3; i++)
		printf("hello\n");

} 
