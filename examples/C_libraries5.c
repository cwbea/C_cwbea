#include <stdio.h>

struct student {
	char fname[20];
	char mname[20];
	char lname[20];
};

int main() {
	struct student st[60];
	FILE *ptr;

	ptr = fopen("student_records.txt", "w");
	if (ptr == NULL) {
		perror("error opening file for writing");
		fclose(ptr);
		return 1;
	}

	for (int i = 0; i < 1; i++) {
		printf("Enter Student's Details \n\n");
		printf("First name: ");
		scanf("%s", st[i].fname);
		printf("\nMiddle name: ");
		scanf("%s", st[i].mname);
		printf("\nLast name: ");
		scanf("%s", st[i].lname);

		fwrite(&st[i], sizeof(st[i]), 1, ptr);
	}
	
	fclose(ptr);



	return 0;
}
