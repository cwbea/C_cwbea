#include <stdio.h>

int main(){
	int i;
	int j;
	int a;
	int b;
	int x = 2;
	int y = 3;
       int joe = 4;
	int abc = 5;
	int Bob = 2;
	Bob = Bob << 2;
	int k;
	k = 1 << 15 >> 15;
	long fran = 0xffffe;
	int Ann;

	Ann = fran;

	printf("integ_Ann = %d\n", Ann);

	printf("hexad_Ann = %x\n", Ann);

	printf("shift_k = %d\n", k);

	printf("left_shift Bob = %d\n", Bob);


	x += (y = (joe *= abc)); /* local variables can be reassigned values */
	
	printf("x = %d\n", x);

	printf("i increment iteration\n");
	for (i = 1; i<5; i++)
	{
		printf(" i = %d\n", i);
	}
	
	printf("j increment iteration\n");
	for (j = 1; j<5; ++j)
	{
		printf("j = %d\n", j);
	}

	a = 10;
	b = 1;
	a += b; /* this is same as a = a + b; ++(val) only increases a value by 1,
		   while +=(val) increases the value by any assigned number. */

	printf("a = %d\n", a); 

	printf("i decrement iteration\n");
	for (i = 5; i>0; i--)
	{
		printf("i = %d\n", i);
	}

	printf("j decrement iteration\n");
	for (j = 5; j>0; --j);
	{
		printf("j = %d\n", j);
	}

	return 0;



}
