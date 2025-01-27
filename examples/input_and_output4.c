#include <stdio.h>
#include <string.h>

int main() {
	FILE *fileptr;
	char *filename = "ubuntu.c";
	char ch_read;
	char ch;

	fileptr = fopen(filename, "a+");

	printf("character in the file:\n");

	while ((ch_read = getc(stdin)) != EOF) {
		putc(ch_read, fileptr);
	}
	
	return 0;

}
