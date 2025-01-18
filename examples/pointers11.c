#include <stdio.h>

int main() {
	int *ptr = 0;	
	int num = 12;

	ptr = &num;

	printf("value of num = %d\n", *ptr);
	printf("address of num = %p\n", ptr);

	return 0;


}
