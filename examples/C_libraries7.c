#include <stdio.h>

int main(void) {
	FILE *fptr;
	char buff[20];

	printf("welcome to C\n");

	fptr = fopen("readme.txt", "r");
	fread(buff, 20, 1, fptr);
	buff[(sizeof buff) -1] = 0;
	printf("%s", buff);
	fclose(fptr);


	return 0;
}
