#include <stdio.h>

int main() {
	char *ch = NULL;	
	ch = "hello world";

	char *ptr[] = {"hello when are you coming'\0'", "i will be back shortly","bring it back"};

	printf("ch = %s\n", ch);

	for (int i = 0; i < 3; i++) {
		printf("ptr = %s\n", *(ptr + i));
	}

	return 0;


}
