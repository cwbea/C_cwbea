#include <stdio.h>

union {
	int word;
	struct {
		unsigned busy : 1;
		unsigned done : 1;
		unsigned clear : 1;
		unsigned interrupt : 1;
	} bits;
} status;
int main() {
	status.bits.busy = 1;

	printf("union value = %d\n", status.bits.busy);

	return 0;

}
