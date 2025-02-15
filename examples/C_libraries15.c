#include <stdio.h>
#include <string.h>

#define STDOUT 1;

int main() {
	char bird[] = "obi is a boy and ";
	char nest[] = "Ada is a girl";
	
	strncat(bird, nest, 8);

	printf("bird : %s\n", bird);

	return 0;
}
