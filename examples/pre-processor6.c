#include <stdio.h>

#define square(x) x*x

int main() {
	int joe, fred;
	fred = 5;

	joe = square(fred);

	printf("joe = %d\n", joe);

	return 0;

}
