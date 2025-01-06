#include <stdio.h>

void hello(int num);

int main() {
	int x;
	x = 2;

	hello(x);

	printf("\n%d\n", x);
	

	return 0;
}




void hello(int num) {
	int i;
	for (i = 0; i < num; i++)
		printf("hello ");
	num = 100;	//extra line
}
