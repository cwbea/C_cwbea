#include <stdio.h>

int main() {
	int a;
	int b;
	int c;
	int d;
	int e;
	int x;

	a = 5;
	b = 20;
	c = 24;
	d = 6;
	e = 5;
	x = a*b/(c+d-e); /* the expression in the bracket is given
			  precedence or first determined before 
			  operation proceeds from left to right */

	printf("x = %d\n", x);

	return 0;


}
