#include <stdio.h>

static int getreply(void);

int main() {
	static int x;
	x = getreply();
	
	printf("x = %d\n", x);

	return 0;


}



static int getreply(void) {
	register char ch = getchar();
        
	if (ch == 'Y' || ch == 'y') 
		return 1;

	else return 0;
}

