#include <stdio.h>

int main() {
	int a = 12;
	int b = 4;
	int x;
	int y;

	x = a >> b; /* converting 12 to binary --> 1100
		       32 bits = 32 zeros --> 0000 0000 0000 0000 0000 0000 0000 0000
		                               0    0    0    0    0    0    0   0

				 in cpu   -->  0    0    0    0    1    1   0    0
			  1st right shift -->  0    0    0    0    0    1   1    0
			  2nd right shift -->  0    0    0    0    0    0   1    1
			  3rd right shift -->  0    0    0    0    0    0   0    1
			  4th right shift -->  0    0    0    0    0    0   0    0
			     
			      total sum   -->  0     */
			                             
	y = a << b; /* first convert 12 to binary --> 1100
		       left shift (4 times) then gives --> 00001100
		       1 byte = 8 bits
		       4 byte = 32 bits 
		       32 bits = 32 zeros --> 0000 0000 0000 0000 0000 0000 0000 0000
		       			       0    0    0    0    0    0    0    0

			           in cpu -->  0    0    0    0    1    1    0    0 
		            1st left shift-->  0    0    0    1    1    0    0    0
			    2nd left shift-->  0    0    1    1    0    0    0    0
			    3rd left shift-->  0    1    1    0    0    0    0    0
			    4th left shift-->  1    1    0    0    0    0    0    0
			                      128   64   32   16   8    4    2    1

					      128 + 64 = 192
					       
				To convert 12 to binary :
				                         12/2 = 6 rem 0
							  6/2 = 3 rem 0
							  3/2 = 1 rem 1   down to up   
							  1/2 = 0 rem 1

				To convert 4 to binary   :
							  4/2 = 2 rem 0
							  2/2 = 1 rem 0
							  1/2 = 0 rem 1

		                             Giving us    : 100 which is also 0100   */
		                  
                                                                  

	printf("left shift = %d\n", y);
	printf("right shift = %d\n",x);

	return 0;	



}
