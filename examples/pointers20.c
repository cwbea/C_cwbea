#include <stdio.h>
#include <stdlib.h>

struct bptr {
	char buffer[10];
};

int main() {
	struct bptr *ptr;
	int x = 65;

	ptr = (struct bptr *) malloc(sizeof(struct bptr));

	for (int i = 0; i < 10; i++) {
		ptr -> buffer[i] = x;
		printf("%c\n", ptr -> buffer[i]);
		x++;
	}

	return 0;

}

