#include <stdio.h>
#include <string.h>
#include <errno.h>

int main() {
	FILE *fileptr;
	char *filename = "person_profile";
	char data[20];

	fileptr = fopen(filename, "w+");
	if (fileptr == NULL) {
		fprintf(stderr, "fopen errno : %d\t---> %s\n", errno, strerror(errno));
		return 1;
	} else {
		fprintf(stdout, "created successfully\n\n");
	}
	
	printf("Enter your name :");
	fgets(data, 20, stdin);

	fwrite(data, sizeof(char), 20, fileptr);

	return 0;

}	
