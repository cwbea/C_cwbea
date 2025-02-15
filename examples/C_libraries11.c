#include <stdio.h>

int main() {
	FILE *file = NULL;
	char ch;

	file = fopen("ladybugs.txt", "w+");

	fprintf(file, "the ladybugs are an essential part of the marine\n");

	while ((ch = fgetc(file)) != EOF) {
		printf("%c", ch);
	}
	
	if (feof(file)) {
		printf("\nend of file reached");
	} else {
		printf("\nend of file not reached");
	}

	fclose(file);

	return 0;
}
