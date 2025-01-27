#include<stdio.h>
#include<string.h>
#include<errno.h>

int main() {
	FILE *fileptr;
	char *filename = "c_language.txt";

	fileptr = fopen(filename, "r");
	if (fileptr == NULL) {
		fprintf(stderr, "fopen errno : %d\t---> %s\n", errno, strerror(errno));
		return 1;
	} else {
		fprintf(stdout, "created successfully\n");
	}

	return 0;


}
