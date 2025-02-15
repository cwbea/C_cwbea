#include <stdio.h>
#include <string.h>

#define STDOUT 1;

int main() {
	char bird[30];
	char nest[30];
	
	fgets(bird, sizeof(bird), stdin);
	strcpy(nest, bird);

	printf("bird : %s\n", bird);
	printf("nest : %s\n", nest);

	return 0;
}
