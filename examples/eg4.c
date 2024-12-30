#include <stdio.h>

int y = 200; /* this is a global variable */

int main(){	
	int x = 100; /* this is a local variable */

	printf("global variable :  %d\n",   y);
	printf("local variable : %d\n", x);

	return 0;
}



