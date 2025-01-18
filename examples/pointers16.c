#include <stdio.h>

int main() {
	int x = 12;
	int y = 10;

	int *p1 = 0;
	int *p2 = 0;

	p1 = &x;
	p2 = &y;

	x = *p1 - *p2 + 2;

	printf("x = %d\n", x);

	return 0;

}
