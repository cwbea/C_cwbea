#include <stdio.h>
#include <string.h>

int main() {
	char *str = "hello world";
	size_t size;

	size = strlen(str);
	printf("length is : %d bytes", size);

	return 0;

}
