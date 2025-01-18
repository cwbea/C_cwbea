#include <stdio.h>

int main() {
	int x = 12;
	void *ptr;
        ptr = &x;	        //this statement is ok
        x = *(int*) ptr;	/*this statement is illegal,
				(int*) executes first and gives a data type to ptr
				then *ptr now points to the address of x to get the
				content of x which is 12*, 
				NB. casting only takes effect only in the line it was casted
				aside that it returns to it's default "data type" declaration*/
	

	printf("x = *ptr : %d\n", x);

	return 0;
}

