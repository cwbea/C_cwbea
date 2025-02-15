#include <stdio.h>

int main() {
	FILE *fptr = NULL;
	char ch;
	char buff[100];

	fptr = fopen("sun_lovers.txt", "w+");
	fprintf(fptr, "lovely mammals dancing in the rain");
	fread(buff,  100, 1, fptr);
	printf("%s\n", buff);
	rewind(fptr);

	fread(&ch, sizeof(ch), 1, fptr);
	printf("%c\n", ch);
	//printf("%s\n", *buff);
		

	return 0;	

}

