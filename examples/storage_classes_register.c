#include <stdio.h>

int main() {
	register int y = 12;
	 char x = 'A';
	register char *strptr; 
	
	strptr = &x; 

	printf("y = %d\nstrptr = %c\n", y, *strptr);

	return 0;	

}
