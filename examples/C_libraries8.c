#include <stdio.h>

int main() {
	FILE *fptr = NULL;
	fptr = fopen("disc_players.txt", "w+");
	if (fptr == NULL) {
		perror("file not created successfully");
		return 1;
	} 

	fprintf(fptr, "bees are essential components of the ecosystem"); 
	
	// move the file pointer to the beginning of the file
	fseek(fptr, 0, SEEK_SET);

	fprintf(fptr, "honeybadgers are fearless little mammals");

	// move the file pointer to the end of the file
	fseek(fptr, 0, SEEK_END);

	fprintf(fptr, " let us seek the peace always");
	return 0;
}
