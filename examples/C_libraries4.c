#include <stdio.h>

int main(void) {
	FILE *fp;
	fp = fopen("test.txt", "w");
	fprintf(fp, "this is cw file code written to test.txt\n");
	fflush(fp);
	fclose(fp);

	fp = freopen("test2.txt", "w", stdout);
	if (fp == NULL) {
		perror("freopen");
		fclose(fp);
		return 1;
	}

	printf("this will be written to test2.txt\n");
	fclose(fp);

	return 0;
}	
