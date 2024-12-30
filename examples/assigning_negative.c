#include <stdio.h>

int main() {
	unsigned u;
	double d;
	int i ;  /*signed int i; is the same as int i; */

	u = -1;
	i = u;
	d = 2.0 * i;

	printf("unsigned u = %u\n", u);
	printf("double d = %lf\n", d);

	/* %u is used for printing unsigned values which is only positive numbers */

	/* %d or %i is used for printing 4bytes which is 32 bits integer values that
	 includes both positive and negative numbers, they can be declared as (signed
	 int i; or int i;) */
	
	/* %ld is used to access 8 bytes which is 64 bits */

	/* %f is used to print 4 bytes which is 32 bits floating point value */

	/* %lf is used to print 8 bytes which is 64 bits floating point value */

	return 0;

}
