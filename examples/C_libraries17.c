#include <stdio.h>
#include <string.h>

#define STDOUT 1;

int main() {
	char bird[] = "obi is a boy and ";
	char nest[] = "Ada is a girl";
	int result;

	result = strncmp(bird, nest, 2);
	printf("bird : %s\n", bird);

	if (result < 0) {
		printf("%s is less than %s\n", bird, nest);
	} else if (result == 0) {
		printf("%s is equals to  %s\n", bird, nest);
	} else {
		printf("%s is greater than %s\n", bird, nest);
	}

	return 0;
}
