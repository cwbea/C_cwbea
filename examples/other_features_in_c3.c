#include <stdio.h>
#include <stdlib.h>

int* (fnptr)(int x); //pointer to function declaration or function returning pointer declaration

int main() {
	int x = 12;
	int *ptr = NULL;
	ptr = fnptr(x);
	
	printf("x = %d\n", *ptr);

	return 0;	
}

int *fnptr(int x) {
	int *ptr = NULL;
	ptr = (int *) malloc(sizeof(int));
	if (ptr == NULL) {
		perror(" ");
		return NULL;
	}
	ptr = &x;
	return ptr;
}
		
