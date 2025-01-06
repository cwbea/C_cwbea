#include <stdio.h>
                            
float average(int x, int y);
                            
void main() {
	int x = 2, y = 3;
        float z;

	z = average(x, y);  /*when calling a function, the identifier and the parameters
			     (if it has any) are called(written), but the return value
			     will be actually executed */

	printf("avg is %.3f\n", z);
}
                            
float average(int x, int y) { 
	return (x + y)/2.0;
}
