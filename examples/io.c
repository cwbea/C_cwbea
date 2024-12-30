/* devise a peogram that will :
 * 	(a) input one character from the keyboard
 * 	(b) output the binary representation for the character 01100001 */

/* from left to right 
 * 1*2^6 + 1*2^5 + 1*2^0 
 * 64 + 32 + 1 = 134 */

/*	0	1	1	0	0	0	0	1
 *	128     64      32      16      8       4       2       1
 *	0       64      32      0       0       0       0       1
 *	
 *	64 + 32 + 1 = 97   */

#include<stdio.h>

int main() { 
	int x;
	int b = 97;
	int n  = 97;


	x = getchar();	
	putchar(x);

	printf("character = %c\n", b);
	printf("binary_integer = %b\n", n);
		
	return 0;

} 
 
