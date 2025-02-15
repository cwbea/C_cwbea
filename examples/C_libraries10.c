#include <stdio.h>

int main() {
	FILE *fptr = NULL;
	long position;
	char buff[1000];
	ssize_t read_bytes;

	fptr = fopen("swansea.txt", "w+");
	if (fptr == NULL) {
		perror("file not found");
		fclose(fptr);
		return 1;
	}

	fgets(buff, sizeof(buff), stdin);

	fprintf(fptr, buff);

	position = ftell(fptr);
	printf("current fptr position : %ld\n", position);

	fclose(fptr);

	return 0;
}
