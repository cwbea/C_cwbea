#include <stdio.h>

int main() {
	int i;
	i = 0;

	while (i < 255) {
		printf("%c ", i);
		i++;
	}
	printf("\n");

	return 0;
}
