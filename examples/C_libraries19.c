#include <stdio.h>
#include <string.h>


int main() {
	char str[] = "hello world";
	int c = getchar();
	char *ptr = NULL;

	ptr = strrchr(str, c);

	if (ptr != NULL) {
		printf("found '%c' at position %ld\n", c, ptr - str);
	} else {
		printf("character '%c' not found\n", c);
		}

	return 0;
}
