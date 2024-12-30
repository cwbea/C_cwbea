#include <stdio.h>

struct {
	unsigned x : 20;
	unsigned y : 10;
	unsigned z : 22;
} bitfield;

int main() {
	bitfield.x = 1;

	printf("%d\n", bitfield.x);

	printf("size of bitfield =%d\n", sizeof(bitfield));

	return 0;	

}
