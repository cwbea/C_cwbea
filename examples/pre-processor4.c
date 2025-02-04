#include <stdio.h>

#define INRANGE(num) (num > 0 && num < 10) 

int main() {
	int x = 9;
	int y;
	y = INRANGE(x);

	printf("y = %d\n", y);

	return 0;
}
