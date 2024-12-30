#include <stdio.h>

int toosmall;

int main(){
	int joe, fred, a, xyz, toobig, x, y, z, m, n;
	
	joe = 4;
	fred = 5;
	a = 6;
	xyz = 6;
	y = 14;
	n = 7;
	
	//toobig = 0;
	
	/* in the if block the equality operator checks the condition declared, if true the succeeding line of code executes and
	 * gives a new value depending on the expression stated, if false the succeeding expression does not execute and original
	 * initialisation  values stays the same */ 
	 
	if (fred == joe + 1) joe = joe + 7;			  /* == equality operator */ 
	       				        /* the ++ operator has a higher order of precedence than == */

	

	printf("fred = %d\n", fred);

	printf("joe = %d\n", joe);

	/* in the if block the equality operator checks condition declared, if true suceeding expression executes , if false 
	 * original initilisation retain original vales */

	if (a >= xyz) a = 10;

	printf("a = %d\n", a);

	printf("xyz = %d\n", xyz);

	
	/* global variable "toosmall" is by default false or 0 in conditional statement, hence xyz = 6 */

	if (toosmall) xyz = 100; 	

	printf("xyz = %d\n", xyz);


	/* loca; variable "toobig" is by default true in conditional statement, hence xyz = 200 is printed */

	if (toobig) xyz = 200; 

	printf("xyz = %d\n", xyz);

	
	/* after the expression is worked out following rules of precedence, x is assigned a non zero value 166
	 * which by defaukt makes it a true statement and 166 is printed */

	x = 100 * y - 1234;
	
	if (x) printf("x = %d\n", x);
	

	/* after the getchar() fucntion is established, from the if block only when 'a' is input to the keyboard it gets displayed,
	 * any other character when input does not display */
	
	z = getchar();
	
	if (z == 'a') putchar(z);

	
	/* from the conditional statement, m is reinitialised to the value of n which is 7, since this value is not zero, the 
	 * statement by default becomes true and increment expression is executed giving us our corresponding value for x */

	if (m = n) x++;

	printf("x = %d\n", x);

	
	/* from the if statement, equality operator shows m is not equal to n, hence increment expression x++ does not execute 
	 * and x retains its original value prior to this code */

	if (m == n) x++;

	printf("x = %d\n", x);
	

	/* garabage value of m, assigned by the computer is now stored in n, which since its not zero makes the statement by 
	 * default true, making x increment to 169 */

	if (n = m) x++; 

	printf("x = %d\n",  x);

	/*condition is not true , following the equality operator n is not equal to m , hence x retains its original value of
	 * 169 prior to this code */

	if (n == m) x++; 

	printf("x = %d\n", x);

	return 0;


}
