/*devise a program that will :
 * 	(a)	initialize an integer variable called number to 86 decimal.
 *
 * 	(b)	using printf, output the value of number 
 * 		(i) as a character 
 * 		(ii) as a decimal number, an octal number and a hexadecimal number */

#include<stdio.h>

int main() {
	int number = 86;
        

	printf("number = %c\n", number);
	printf("number = %d\n", number);
	printf("number = %o\n", number);
	printf("number = %x\n", number);

	return 0;

}
 
