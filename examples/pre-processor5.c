#include <stdio.h>

int counter = 123;
                                                 
#define DEBUG(x) printf("Variable x = %d\n", x);

int main() {
	
	DEBUG(counter);
	return 0;

}
