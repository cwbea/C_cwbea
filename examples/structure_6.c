#include <stdio.h>
#include <stdlib.h>

struct Friend {
	int birthday;
	struct Friend *link;

}; 

void display_array(struct Friend *ptr);

int main() { 
	
	struct Friend *n1, *n2, *n3;

	n1 = (struct Friend*) malloc(sizeof(struct Friend));
	
	n2 = (struct Friend*) malloc(sizeof(struct Friend));
	
	n3 = (struct Friend*) malloc(sizeof(struct Friend));

	n1 -> birthday = 100;

	n2 -> birthday = 120;

	n3 -> birthday = 140;

	n1 -> link = n2;

	n2 -> link = n3;

	n3 -> link = NULL;

	display_array(n1);

	return 0;

}

void display_array(struct Friend *ptr) {
	while (ptr != NULL) {
		printf("friend birthday = %d\n", ptr -> birthday);
		ptr = ptr -> link;
	}
}
