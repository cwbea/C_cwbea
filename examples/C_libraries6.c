#include <stdio.h>

struct student {
	char name[20];
};

int main() {
	FILE *fptr = NULL;
	struct student st[20];
	char buff[50];
	char pen[50] = "i am a boy";

	fptr = fopen("st_records.txt", "w+");

	fread(&st[0].name, 1, 20, stdin); //exectues from right to left
	fwrite(&st[0].name, 20, 1, fptr); //executes from left to right

	printf("the content was written successfully from struct\n");

	printf("%ld\n", ftell(fptr));
	
	fclose(fptr);

	return 0;
}
