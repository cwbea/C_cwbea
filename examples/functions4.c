#include <stdio.h>

int getint(void);

void main(void) {
	int x;
	printf("please input a number : ");

	x = getint();
	printf("and another : ");
	printf("\n sum is %d\n", x + getint());

	
}

int getint(void) {
	int ch, num = 0;
	while ((ch = getchar()) >= '0' && ch <= '9')
		num = num * 10 + (ch - '0');

	return num;
}

/* function parameters -> parameters are function arguments enclosed in ()
 * function arguments -> arguments are the data type passed into the function parameter
 * function return value -> return values are data type returned to the function
 * function parameters and function arguments are basically the same  */

/* list of all function prototypes
 * void main(void); 
 * int main(void);
 * void main(int);
 * int main(int);
 * data types can be other than int or void others include float, char etc. */
