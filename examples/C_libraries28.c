#include <stdio.h>
#include <stdlib.h>

int main () {
	int *ptr = 0;
	size_t x = 5;


	ptr = calloc(x, sizeof(int));
	
	if (ptr == 0) {
		perror("not defined");
		free(ptr);
		return 1;
	}

	ptr[0] = 12;
	ptr[1] = 14;
	ptr[2] = 16;
	ptr[3] = 20;
	ptr[4] = 22;

	for (int i = 0; i < 5; i++) {
		printf("%d\n", ptr[i]);
	}

	free(ptr);	


	return 0;
}
