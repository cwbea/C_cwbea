#include<stdio.h>

int main() {
	char green[65]; /* allocates memory of 65 bytes of type char */
	printf("input string : "); /* printing of prompt to direct user what to to do */
	fgets(green, 65, stdin); /* accepts 3 arguments into 3 parameters i.e green, 65, stdin */
	printf("\n you entered : %s\n", green);

	return 0;



}
