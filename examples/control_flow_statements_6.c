#include <stdio.h>

int main() {
	int ch, i, j, arr[10];
	i = 0;
	


	for (i=0; i<10; i++) {
		ch = getchar();
		if (ch == '\n') break;
		arr[i] = ch;
		
	}

	for (j=0; j<10; j++) {
		printf("%c ",  arr[j]);
		
	}
	

	return 0;
		     

	

}
