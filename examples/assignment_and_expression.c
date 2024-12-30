#include <stdio.h>

int main() {
	int a;
	int b;
	int c;
	float t;
	int d;
	int z;
	float x = 8.0;
	float y = 3.0;
	int m = 10;
	int n = 4;
	int q;

	a = 10;
	b = 2;
	c = 5;
	t = a*c/b;
	d = 20;
	t = a*c/(b+d);   /* 2.27 */
	z = 50%22;
	y = x/y;
	q = m >> n;  /* 10 which is 1010 in binary and 4 which is 0100
			will be shifted right 
			0000 0000 0000 0000 0000 0000 0000 0000
			 0    0    0    0    0    0    0    0
			 0    0    0    0    1    0    1    0
			 0    0    0    0    0    1    0    1
			 0    0    0    0    0    0    1    0
			 0    0    0    0    0    0    0    1
			 0    0    0    0    0    0    0    0
			128   64   32   16   8    4    2    1

			answer :  10 >> 4 = 0   */


	m = m << n;  /* first convert 10 to binary --> 00001010
		       4 bytes is 32 bits and 32 bits is 4 bytes
		       1 byte is 8 bit
		       32 bit is 32 zeros --> 0000 0000 0000 0000 0000 0000 0000 0000
		       				0   0    0    0    1    0    1    0
						0   0    0    1    0    1    0    0
						0   0    1    0    1    0    0    0
						0   1    0    1    0    0    0    0
						1   0    1    0    0    0    0    0
				              128   64   32   16   8    4    2    1

					      128 + 32 = 160 

						10 / 2 = 0
						5 / 2  = 1
						2 / 2  = 0
						1 / 2  = 1

						1010    note answer is bottom to up
						0100 = 4 in decimal */ 

	printf("10*5/(2+20) : %f\n", t);
	printf("z = %d\n", z);
	printf("y = %f\n", y);
	printf("shift_left = %d\n", m);
	printf("shift_right = %d\n", q);
	return 0;



}
