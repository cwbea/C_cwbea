#include <stdio.h>
#include <stdlib.h>

int main() {
	char *ch = "12";
	char *ch1 = "234";
	char *ch2 = "4567";
	int convert_to_int;
	long convert_to_long;
	float convert_to_float;

	convert_to_int = atoi(ch);
	printf("integer value is : %d\n", convert_to_int);

	convert_to_long = atol(ch1);
	printf("long value is : %ld\n", convert_to_long);

	convert_to_float = atof(ch2);
	printf("float value is : %f\n", convert_to_float); 

	return 0;
}
