#include <stdio.h>

int main() {
	char first_name[20];
	char middle_name[20];
	char last_name[20];
	char full_name[60] = "cwbea hexagon ultimate";

	sscanf(full_name, "%s\n%s\n%s", first_name, middle_name, last_name);
	printf("first_name :%s\nmiddle_name :%s\nlast_name :%s", first_name, middle_name, last_name);
	
	return 0;
}
