#include <stdio.h>
#include <string.h>

#define STDOUT 1;

int main() {
	char bird[30];
	char nest[30];
	
	fgets(bird, sizeof(bird), stdin); 
	strncpy(nest, bird, 15);

	printf("bird : %s\n", bird);
        printf("nest : %s\n", nest);

	return 0;
}	
