#include <stdio.h>

int main() {
	FILE *fptr = NULL;
	
	fptr = fopen("terminator3.txt", "w+");

	fprintf(fptr, "iron melting recursively simulates terminator");

	fscanf(fptr, "%*s");

	if (ferror(fptr)) {
		perror("fscanf");
		fclose(fptr);
		return 1;
	}

	fclose(fptr);

	return 0;
}
