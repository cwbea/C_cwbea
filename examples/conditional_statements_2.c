#include <stdio.h>

int main() {
	int abc, xyz, fred, joe, z, x;
	joe = 4;
	fred = 5;
	abc = 6;
	xyz = 7;
	z = 8;
	x = 9;

	if (abc <= xyz || fred != joe + 1) z++;

	printf("z = %d\n", z);


	if (x == 2 || x == 4 || x == 6 || x == 8) x++;

	printf("x = %d\n", x);


	if (x == 4 || x == 9 || x == 8) x++;

	printf("x = %d\n", x);

	return 0;

}
