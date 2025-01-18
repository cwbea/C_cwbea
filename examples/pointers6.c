#include <stdio.h>

int main() {
	int *iptr = 0;  //points to no where
	
	if (iptr != 0) {
		printf("false\n");

	} else {
		printf("True\n");
	}

	if (!iptr) {
		printf("false\n");
	} else {
		printf("True\n");
	}
	
	return 0;

}
