#include <stdio.h>  /*preprocessor inclusion to give us access
		     to the  stdio library functions */

#define ONE	1   /*preprocessor macro substitution*/

int globalnum;      /*this is an example of a global data
		      definition*/

/*the main programme now follows the
 * open brace { and close brace }
that marks the beginning and end*/

int main()
{	
	int localnum; /*this is a local variable*/
	int sum;      /*this is a local variable*/

	globalnum = ONE;
	localnum  = ONE;
	sum = globalnum + localnum;

	printf("answer is %d\n", sum);

	return 0;
}

