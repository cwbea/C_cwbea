#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ptr = 0;
	ptr = malloc(3 * sizeof(int));
	if (ptr == 0) {
		perror("not defined");
		free(ptr);
		return 1;
	}
	
	*ptr = 12;
	*(ptr + 1) = 14;
	*(ptr + 2) = 16;


	for (int i = 0; i < 3; i++) {
		printf("%d\n", *(ptr + i));
	}

	int *ptr2 = realloc(ptr, 5 * sizeof(int));
	if (ptr2 == 0) {
		perror("not defined");
		free(ptr);
		free(ptr2);
		return 1;
	}

	*(ptr2 + 3) = 80;
	*(ptr2 + 4) = 100;

	for (int i = 3; i < 5; i++) {
		printf("%d\n", *(ptr2 + i));
	}


	free(ptr);
	free(ptr2);

	return 0;
}
