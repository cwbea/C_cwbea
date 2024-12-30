#include <stdio.h>

int globalnum;

int main() 
{
	int sum;
	int localnum;
	
	globalnum = 5;
	localnum  = 6;	
	sum = globalnum + localnum;

        printf("%d", sum);

	return 0;
}	
