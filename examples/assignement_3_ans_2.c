#include <stdio.h>

int main(){
	int a;
	int b;
	int c;
	int d;
	int e;
	int x;
	
	a = 5;
	b = 20;
	c = 25;
	d = 8;
	e = 6;
	x = a*b/c+d-e; /* the operation is performed stepwise from left
		       to right since precedence is equal */	

	printf("x = %d\n", x);

	return 0;
}
